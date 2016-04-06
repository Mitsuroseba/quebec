<?php
/**
 * @file
 * Definition of the "NodeList" content type plugin.
 */

namespace ContentTypes;

use CTools\Plugins\ContentTypes\ContentTypesInterface;
use CTools\Form;

/**
 * Class NodeList.
 *
 * @package ContentTypes
 */
class NodeList implements ContentTypesInterface {

  /**
   * {@inheritdoc}
   */
  public static function name() {
    return t('Node list');
  }

  /**
   * {@inheritdoc}
   */
  public static function info() {
    return [
      'category' => t('Page parts'),
      'top level' => TRUE,
    ];
  }

  /**
   * {@inheritdoc}
   */
  public static function themeVariants() {
    return self::getNodeViewModes();
  }

  /**
   * {@inheritdoc}
   */
  public static function dependencies() {
    return ['node', 'entity_view_mode'];
  }

  /**
   * {@inheritdoc}
   */
  public static function preprocess(array &$variables, array &$arguments, \ctools_context $context = NULL) {
    $query = db_select('node')
      ->fields('node', ['nid'])
      ->distinct(TRUE)
      ->condition('node.status', NODE_PUBLISHED)
      ->condition('node.type', $variables['parameters']['filter']['content_type'])
      ->range($variables['parameters']['range']['start'], $variables['parameters']['range']['length']);

    // Related to configuration form we might have not configured taxonomy
    // references to content type.
    if (!empty($variables['parameters']['filter']['term_references'])) {
      foreach ($variables['parameters']['filter']['term_references'] as $field_name => $term_ids) {
        if (!empty($term_ids)) {
          $query->leftJoin("field_data_{$field_name}", $field_name, "node.nid = $field_name.entity_id");
          $query->condition("{$field_name}.{$field_name}_tid", $term_ids);
        }
      }
    }

    if (!empty($variables['parameters']['sort']['sticky_first'])) {
      $query->fields('node', ['sticky'])
        ->orderBy('sticky', 'desc');
    }

    $query->orderBy($variables['parameters']['sort']['field'], $variables['parameters']['sort']['direction']);

    $nodes = node_load_multiple($query->execute()->fetchCol());

    if (empty($nodes)) {
      $variables['node'] = [];
    }
    else {
      $variables += entity_view('node', $nodes, $variables['theme']);
    }
  }

  /**
   * {@inheritdoc}
   */
  public static function configurationForm(array &$form, array &$form_state, array &$conf) {
    $content_types = entity_view_mode_get_enabled_bundles('node', $conf['theme']);

    $form['parameters'] = [
      '#type' => 'horizontal_tabs',
      '#access' => !empty($content_types),
    ];

    $form['parameters']['filter'] = [
      '#type' => 'horizontal_tab',
      '#title' => t('Filtering'),
    ];

    $form['parameters']['filter']['content_type'] = [
      '#ajax' => TRUE,
      '#type' => 'select',
      '#title' => t('Content type'),
      '#options' => $content_types,
      '#required' => TRUE,
      '#empty_option' => t('- None -'),
    ];

    if (!empty($conf['parameters']['filter']['content_type'])) {
      $form['parameters']['filter']['term_references'] = self::getTermReferenceFields($conf['parameters']['filter']['content_type']);
    }

    $form['parameters']['sort'] = [
      '#type' => 'horizontal_tab',
      '#title' => t('Sorting'),
    ];

    $form['parameters']['sort']['field'] = [
      '#type' => 'select',
      '#title' => t('Sort by'),
      '#options' => [
        'nid' => t('Post date'),
      ],
    ];

    $form['parameters']['sort']['direction'] = [
      '#type' => 'select',
      '#title' => t('Order by'),
      '#options' => [
        'asc' => t('Ascending'),
        'desc' => t('Descending'),
      ],
    ];

    $form['parameters']['sort']['sticky_first'] = [
      '#type' => 'checkbox',
      '#title' => t('Sticky first'),
    ];

    $form['parameters']['range'] = [
      '#type' => 'horizontal_tab',
      '#title' => t('Range'),
    ];

    $form['parameters']['range']['start'] = [
      '#type' => 'textfield',
      '#title' => t('Offset'),
      '#default_value' => 0,
      '#element_validate' => ['element_validate_integer'],
    ];

    $form['parameters']['range']['length'] = [
      '#type' => 'textfield',
      '#title' => t('Limit'),
      '#default_value' => 1,
      '#element_validate' => ['element_validate_integer_positive'],
    ];

    $form['parameters']['read_more'] = [
      '#type' => 'horizontal_tab',
      '#title' => t('Read more'),
    ];

    $form['parameters']['read_more']['link'] = [
      '#type' => 'link_field',
      '#title' => t('Link'),
      '#default_value' => '',
    ];

    $form['parameters']['advertisement'] = [
      '#type' => 'horizontal_tab',
      '#title' => t('Advertisement'),
    ];

    new Form\Elements\Collection(['parameters', 'advertisement', 'advertisement'], $form, $form_state, $conf, function () {
      $item = [
        '#type' => 'fieldset',
      ];

      $item['number'] = [
        '#type' => 'textfield',
        '#title' => t('Insert an ad in place'),
        '#element_validate' => ['element_validate_integer_positive'],
      ];

      $item['text'] = [
        '#type' => 'textarea',
        '#title' => t('Ad script'),
      ];

      return $item;
    });
  }

  /**
   * {@inheritdoc}
   */
  public static function configurationFormValidate(array &$form, array &$form_state, array &$values) {

  }

  /**
   * {@inheritdoc}
   */
  public static function configurationFormSubmit(array &$form, array &$form_state, array &$conf) {
    $conf['parameters']['read_more']['link']['title'] = check_plain($conf['parameters']['read_more']['link']['title']);
  }

  /**
   * {@inheritdoc}
   */
  public static function configurationFormElementCallback(array &$form, array &$form_state, array &$conf, array &$commands, array $element) {

  }

  /**
   * Get view modes of the "node" entity.
   *
   * @return string[]
   *   View mode labels.
   */
  private static function getNodeViewModes() {
    $entity_view_modes = variable_get('entity_view_modes', []);
    $node_view_modes = [];

    if (isset($entity_view_modes['node'])) {
      foreach ($entity_view_modes['node'] as $name => $info) {
        $node_view_modes[$name] = $info['label'];
      }
    }

    return $node_view_modes;
  }

  /**
   * Get all term reference fields of a specified content type.
   *
   * @param string $content_type
   *   Machine name of a content type.
   *
   * @return array[]
   *   Form fields.
   */
  private static function getTermReferenceFields($content_type) {
    $fields = [];

    // As we need only term reference fields, then check
    // that modules, provided them, are enabled.
    if (function_exists('taxonomy_menu') || function_exists('entityreference_menu')) {
      foreach (field_info_instances('node', $content_type) as $field_name => $field_instance) {
        $options = self::getTermReferenceAllowedValues(field_info_field($field_name));

        if (!empty($options)) {
          $fields[$field_name] = [
            '#type' => 'select',
            '#title' => $field_instance['label'],
            '#options' => $options,
            '#multiple' => TRUE,
          ];
        }
      }
    }

    return $fields;
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
  private static function getTermReferenceAllowedValues(array $field_info) {
    $term_reference = FALSE;

    if ('taxonomy_term_reference' === $field_info['type']) {
      $term_reference = TRUE;
    }
    elseif ('entityreference' === $field_info['type'] && 'taxonomy_term' === $field_info['settings']['target_type']) {
      $term_reference = TRUE;
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
    }

    if (!$term_reference || empty($field_info['settings']['allowed_values'])) {
      return [];
    }

    $field_info['settings']['allowed_values'] = array_filter($field_info['settings']['allowed_values']);

    return taxonomy_allowed_values($field_info);
  }

}
