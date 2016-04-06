<?php
/**
 * @file
 * Views exposed filter which adds all related term
 * reference filters after content type is selected.
 *
 * Two field types are supported by now: Term Reference and Entity Reference,
 * which is configured to work with terms.
 */

namespace Handlers\Filters;

/**
 * Class NodeTypeTerms.
 *
 * @package Handlers\Filters
 *
 * @property \views_plugin_query_default $query
 */
class NodeTypeTerms extends \views_handler_filter_node_type {

  /**
   * An associative array where key is a field name and a value - term IDs.
   *
   * @var array[]
   */
  private $termReferences = [];
  /**
   * An associative array where key is a field name and a value - the name of
   * column of database table with term ID.
   *
   * @see taxonomy_field_schema()
   * @see entityreference_field_schema()
   *
   * @var string[]
   */
  private $tableColumns = [];

  /**
   * {@inheritdoc}
   */
  // @codingStandardsIgnoreStart
  public function option_definition() {
    // @codingStandardsIgnoreEnd
    $options = parent::option_definition();

    $options['expose']['contains']['use_term_references'] = [
      'default' => FALSE,
      'bool' => TRUE,
    ];

    return $options;
  }

  /**
   * {@inheritdoc}
   */
  // @codingStandardsIgnoreStart
  public function expose_form(&$form, &$form_state) {
    // @codingStandardsIgnoreEnd
    parent::expose_form($form, $form_state);

    $form['expose']['use_term_references'] = [
      '#type' => 'checkbox',
      '#title' => t('Use term references'),
      // Allow an access only when the Taxonomy module enabled.
      '#access' => function_exists('taxonomy_menu'),
      '#description' => t('Use term reference fields, attached to selected content type, to additionally filtering the content'),
      '#default_value' => !empty($this->options['expose']['use_term_references']),
    ];

    $dependencies = ['use_term_references' => 'multiple'];

    foreach ($dependencies + array_flip($dependencies) as $dependent => $dependency) {
      $form['expose'][$dependent]['#states']['disabled'][] = [
        ":input[name*=$dependency]" => ['checked' => TRUE],
      ];
    }
  }

  /**
   * {@inheritdoc}
   */
  // @codingStandardsIgnoreStart
  public function expose_submit($form, &$form_state) {
    parent::expose_submit($form, $form_state);
    // @codingStandardsIgnoreEnd

    // Disallow to use multiple node types with term reference filter enabled.
    if ($this->options['expose']['use_term_references']) {
      $this->options['expose']['multiple'] = FALSE;
    }
  }

  /**
   * {@inheritdoc}
   */
  // @codingStandardsIgnoreStart
  public function value_form(&$form, &$form_state) {
    // @codingStandardsIgnoreEnd
    parent::value_form($form, $form_state);

    if ($this->options['expose']['use_term_references'] && !empty($form_state['input'][$this->options['expose']['identifier']])) {
      $form['term_references'] = [
        '#tree' => TRUE,
      ];

      if (!empty($form_state['input']['term_references'])) {
        $this->termReferences = $form_state['input']['term_references'];
      }

      foreach (field_info_instances('node', $form_state['input'][$this->options['expose']['identifier']]) as $field_name => $instance) {
        $options = $this->getAllowedValues(field_info_field($field_name));

        if (!empty($options)) {
          $form['term_references'][$field_name] = [
            '#type' => 'select',
            '#title' => $instance['label'],
            '#options' => $options,
            '#multiple' => TRUE,
            '#default_value' => isset($this->termReferences[$field_name]) ? $this->termReferences[$field_name] : [],
          ];
        }
      }
    }
  }

  /**
   * {@inheritdoc}
   */
  public function query() {
    parent::query();

    foreach ($this->termReferences as $field_name => $term_ids) {
      $field_table = "field_data_{$field_name}";

      if (!empty($term_ids)) {
        $this->query->add_field($field_table, 'entity_id');
        $this->query->add_where('term_references', "{$field_table}.{$field_name}_{$this->tableColumns[$field_name]}", $term_ids);
      }
    }
  }

  /**
   * Get options for the term reference field.
   *
   * @param array $field_info
   *   Information of a field of an entity.
   *
   * @return string[]
   *   Taxonomy terms.
   */
  private function getAllowedValues(array $field_info) {
    if ('entityreference' === $field_info['type'] && 'taxonomy_term' === $field_info['settings']['target_type']) {
      $vocabularies = $field_info['settings']['handler_settings']['target_bundles'];

      // If any vocabularies have not been configured then use all of them.
      if (empty($vocabularies)) {
        $vocabularies = db_select('taxonomy_vocabulary', 'tv')
          ->fields('tv', ['machine_name'])
          ->execute()
          ->fetchCol();
      }

      // Prepare an array with options to pass it to taxonomy_allowed_values().
      foreach ($vocabularies as $i => $vocabulary) {
        $field_info['settings']['allowed_values'][] = [
          'vocabulary' => $vocabulary,
          'parent' => 0,
        ];
      }

      $this->tableColumns[$field_info['field_name']] = 'target_id';
    }

    if ('taxonomy_term_reference' === $field_info['type']) {
      $this->tableColumns[$field_info['field_name']] = 'tid';
    }

    if (empty($field_info['settings']['allowed_values'])) {
      return [];
    }

    $field_info['settings']['allowed_values'] = array_filter($field_info['settings']['allowed_values']);

    return taxonomy_allowed_values($field_info);
  }

}
