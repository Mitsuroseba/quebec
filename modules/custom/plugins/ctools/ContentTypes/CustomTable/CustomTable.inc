<?php
/**
 * @file
 * Definition of the "CustomTable" content type plugin.
 */

namespace ContentTypes\CustomTable;

use CTools\Plugins\ContentTypes\ContentTypesInterface;
use CTools\Form\Elements\Collection;

/**
 * Class CustomTable.
 *
 * @package ContentTypes\CustomTable
 */
class CustomTable implements ContentTypesInterface {

  /**
   * {@inheritdoc}
   */
  public static function name() {
    return t('Custom table');
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
    return [];
  }

  /**
   * {@inheritdoc}
   */
  public static function preprocess(array &$variables, array &$arguments, \ctools_context $context = NULL) {
    $variables['head'] = $variables['head']['head'];
    $variables['columns'] = $variables['head']['columns'];

    unset($variables['head']['columns']);
  }

  /**
   * {@inheritdoc}
   */
  public static function configurationForm(array &$form, array &$form_state, array &$conf) {
    $columns = drupal_array_get_nested_value($conf, ['head', 'head', 'columns']) ?: 2;

    $form['head'] = [
      '#type' => 'table',
      '#sticky' => FALSE,
      '#attributes' => [
        'class' => ['table-rows'],
      ],
    ];

    for ($column = 0; $column < $columns; $column++) {
      $form['head']['head'][$column]['align'] = [
        '#type' => 'radios',
        '#default_value' => 'left',
        '#options' => [
          'left' => t('Left'),
          'center' => t('Center'),
          'right' => t('Right'),
        ],
      ];

      $form['head']['head'][$column]['head'] = [
        '#type' => 'textfield',
      ];

      $form['head']['#header'][] = t('Column #@number', [
        '@number' => $column + 1,
      ]);
    }

    $form['head']['#header'][] = t('Columns');
    $form['head']['head']['columns'] = [
      '#ajax' => TRUE,
      '#type' => 'select',
      '#options' => drupal_map_assoc([1, 2, 3, 4, 5]),
      '#default_value' => $columns,
    ];

    new Collection(['body'], $form, $form_state, $conf, function () use ($columns) {
      $item = [];

      // @codingStandardsIgnoreStart
      for ($column = 0; $column < $columns; $column++) {
        $item[] = [
          '#type' => 'textfield',
          '#title' => t('Value #@number', [
            '@number' => $column + 1,
          ]),
          '#required' => TRUE,
        ];
      }
      // @codingStandardsIgnoreEnd

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

  }

  /**
   * {@inheritdoc}
   */
  public static function configurationFormElementCallback(array &$form, array &$form_state, array &$conf, array &$commands, array $element) {

  }

}
