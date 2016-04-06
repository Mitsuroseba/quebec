<?php
/**
 * @file
 * Definition of the plugin.
 */

namespace ContentTypes;

use CTools\Plugins\ContentTypes\ContentTypesInterface;

class MainMenu implements ContentTypesInterface {

  const IMAGE_FIELD_NAME = 'field_image';

  /**
   * {@inheritdoc}
   */
  public static function name() {
    return t('Menu');
  }

  /**
   * {@inheritdoc}
   */
  public static function info() {
    return [
      'category' => t('Page parts'),
    ];
  }

  /**
   * {@inheritdoc}
   */
  public static function themeVariants() {
    return [
      'mobile' => t('Mobile'),
    ];
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
  private static function processMenu(array $items, array $variables) {
    $result = [];

    foreach ($items as $item) {
      if (!empty($item['link']['hidden'])) {
        continue;
      }

      $data = [
        'node' => NULL,
        'image' => NULL,
        'subtree' => [],
      ];

      foreach (['title', 'href', 'options'] as $prop) {
        $data[$prop] = $item['link'][$prop];
      }

      $data['href'] = url($data['href']);

      // Load nodes.
      if ('node/%' === $item['link']['router_path']) {
        $map = explode('/', $item['link']['link_path']);

        _menu_load_objects($item['link'], $map);
        list($entity_type, $entity) = $map;

        $image = (array) field_get_items($entity_type, $entity, self::IMAGE_FIELD_NAME, LANGUAGE_NONE);
        $image = reset($image) ?: $variables['default_image'];

        $data['image'] = media_file($image, $variables);

        $data[$entity_type] = $entity;
      }
      elseif (!empty($item['link']['options']['menu_image'])) {
        $image = $item['link']['options']['menu_image'];

        $data['image'] = media_file($image['fid'], [
          'image_style' => $image['style'],
        ]);
      }

      // R-r-recursive.
      if ($item['link']['depth'] < $variables['nesting_level']) {
        $data['subtree'] = call_user_func(__METHOD__, $item['below'], $variables);
      }

      $result[] = $data;
    }

    return $result;
  }

  /**
   * {@inheritdoc}
   */
  public static function preprocess(array &$variables, array &$arguments, \ctools_context $context = NULL) {
    $variables['default_image'] = field_default_image(self::IMAGE_FIELD_NAME);
    $variables['menu'] = self::processMenu(menu_tree_all_data($variables['menu_name']), $variables);
  }

  /**
   * {@inheritdoc}
   */
  public static function configurationForm(array &$form, array &$form_state, array &$conf) {
    $form['menu_name'] = [
      '#type' => 'select',
      '#title' => t('Menu'),
      '#options' => menu_get_menus(),
    ];

    // @todo Add recursivity.
    $form['nesting_level'] = [
      '#type' => 'radios',
      '#title' => t('Nesting level'),
      '#options' => drupal_map_assoc([1, 2]),
    ];

    $form['image_style'] = [
      '#type' => 'select',
      '#title' => t('Image style'),
      '#options' => image_style_options(),
      '#description' => t('Menu item, which point to node that has the %field field, could output an image using different styles.', [
        '%field' => self::IMAGE_FIELD_NAME,
      ]),
    ];
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
