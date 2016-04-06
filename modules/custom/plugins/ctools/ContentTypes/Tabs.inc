<?php
/**
 * @file
 * Definition of the "Tabs" content type plugin.
 */

namespace ContentTypes;

use CTools\Plugins\ContentTypes\ContentTypesInterface;

/**
 * Class Tabs.
 *
 * @package ContentTypes
 */
class Tabs implements ContentTypesInterface {

  /**
   * {@inheritdoc}
   */
  public static function name() {
    return t('Tabs');
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
    return [];
  }

  /**
   * {@inheritdoc}
   */
  public static function dependencies() {
    return ['panels'];
  }

  /**
   * {@inheritdoc}
   */
  public static function preprocess(array &$variables, array &$arguments, \ctools_context $context = NULL) {
    $variables['rows'] = [];

    foreach (array_keys($variables['panels']) as $panel_name) {
      $panel_object = panels_mini_load($panel_name);
      $variables['rows'][] = [
        'title' => $panel_object->admin_title,
        'content' => panels_render_display($panel_object->display),
      ];
    }
  }

  /**
   * {@inheritdoc}
   */
  public static function configurationForm(array &$form, array &$form_state, array &$conf) {
    $form['panels'] = [
      '#tree' => TRUE,
      '#type' => 'table',
      '#header' => [
        t('Checkbox'),
        t('Mini panel title'),
        t('Mini panel machine name'),
        t('Weight'),
      ],
      '#attributes' => [
        'id' => 'panels-tab-admin-table',
      ],
    ];

    drupal_add_tabledrag('panels-tab-admin-table', 'order', 'sibling', 'panel-weight');

    foreach (static::getMinipanels($conf) as $mini_panel) {
      $form['panels'][$mini_panel['name']] = [
        'selected' => [
          '#type' => 'checkbox',
          '#default_value' => $mini_panel['selected'],
        ],
        'name' => [
          '#markup' => $mini_panel['admin_title'],
        ],
        'machine_name' => [
          '#markup' => $mini_panel['name'],
        ],
        'weight' => [
          '#type' => 'weight',
          '#default_value' => $mini_panel['weight'],
          '#delta' => 10,
          '#title-display' => 'invisible',
          '#attributes' => [
            'class' => ['panel-weight'],
          ],
        ],
        '#attributes' => [
          'class' => ['draggable'],
        ],
      ];
    }
  }

  /**
   * Get all mini panels.
   *
   * @param array $conf
   *   Ctools conf variable.
   *
   * @return array
   *   List of panels.
   */
  public static function getMiniPanels($conf) {
    $panels = panels_mini_load_all();

    foreach ($panels as $panel_name => $panel) {
      $panels[$panel_name] = (array) $panel;
      $panels[$panel_name] = empty($conf['panels'][$panel_name]) ? $panels[$panel_name] : array_merge($panels[$panel_name], $conf['panels'][$panel_name]);
    }

    uasort($panels, ['ContentTypes\Tabs', 'compareWeight']);

    return $panels;
  }

  /**
   * Additional to drupal_sort_weight() sort by selected.
   *
   * @param array $a
   *   First item for comparison. The compared items should be associative
   *   arrays that optionally include a 'weight' element. For items without
   *   a 'weight' element, a default value of 0 will be used.
   * @param array $b
   *   Second item for comparison.
   *
   * @return int
   *   Integer result of comparison.
   *
   * @see drupal_sort_weight()
   */
  public static function compareWeight($a, $b) {
    $a_selected = (is_array($a) && isset($a['selected'])) ? $a['selected'] : 0;
    $b_selected = (is_array($b) && isset($b['selected'])) ? $b['selected'] : 0;

    // If they are both selected, or both not-selected, sort by weight.
    return ($a_selected == $b_selected) ? drupal_sort_weight($a, $b) : ($a_selected > $b_selected) ? -1 : 1;
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
    foreach ($conf['panels'] as $key => $mini_panel) {
      if (empty($mini_panel['selected'])) {
        unset($conf['panels'][$key]);
      }
    }
  }

  /**
   * {@inheritdoc}
   */
  public static function configurationFormElementCallback(array &$form, array &$form_state, array &$conf, array &$commands, array $element) {

  }

}
