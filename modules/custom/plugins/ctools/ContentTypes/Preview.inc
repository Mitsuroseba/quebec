<?php
/**
 * @file
 * Definition of the "Preview" plugin.
 */

namespace ContentTypes;

use CTools\Plugins\ContentTypes\ContentTypesInterface;
use CTools\Form;

class Preview implements ContentTypesInterface {

  /**
   * {@inheritdoc}
   */
  public static function name() {
    return t('Preview');
  }

  /**
   * {@inheritdoc}
   */
  public static function info() {
    return [
      'category' => t('Page parts'),
      'required context' => new \ctools_context_optional(t('Context'), 'node'),
    ];
  }

  /**
   * {@inheritdoc}
   */
  public static function themeVariants() {
    return [
      'logo' => t('Logotype'),
      'error' => t('Error'),
      'sponsor' => t('Sponsor'),
    ];
  }

  /**
   * {@inheritdoc}
   */
  public static function dependencies() {
    return ['image'];
  }

  /**
   * {@inheritdoc}
   */
  public static function preprocess(array &$variables, array &$arguments, \ctools_context $context = NULL) {
    $entity_info = array_filter($variables['info']['entity']);
    $result = [];

    if ('empty' === $variables['context'] && empty($entity_info)) {
      foreach ($variables['info']['images']['images'] as $data) {
        $result[] = self::loadImage($data);
      }
    }
    elseif (!empty($context)) {
      /* @var \stdClass $node */
      $node = $context->data;
      $default_image = field_default_image($entity_info['node_type_field']);

      foreach ((array) field_get_items('node', $node, $entity_info['node_type_field']) as $image) {
        $data = new \stdClass();
        $file = $image ?: $default_image;

        $data->title = $node->title;
        $data->image = media_file($file, [
          'image_style' => $entity_info['image_style'],
        ]);
        $data->file = $file;

        $result[] = $data;
      }
    }

    if (1 < count($result)) {
      libraries_load('swiper');
      $variables['multiple_item'] = TRUE;
    }

    $variables['items'] = $result;
  }

  /**
   * {@inheritdoc}
   */
  public static function configurationForm(array &$form, array &$form_state, array &$conf) {
    $node_type = drupal_array_get_nested_value($conf, ['info', 'entity', 'node_type']);
    $node_type_selected = !empty($node_type);
    $context_selected = isset($conf['context']) && 'empty' !== $conf['context'];
    $sponsor_variant = 'sponsor' === $conf['theme'];

    foreach (['node_types', 'node_type_fields'] as $key) {
      if (!isset($form_state[$key])) {
        $form_state[$key] = [];
      }
    }

    if (empty($form_state['node_types'])) {
      foreach (node_type_get_types() as $content_type => $info) {
        $form_state['node_types'][$content_type] = $info->name;
      }
    }

    if ($node_type_selected && empty($form_state['node_type_fields'])) {
      foreach (field_info_instances('node', $node_type) as $field_name => $info) {
        if ('image' === $info['display']['default']['module']) {
          $form_state['node_type_fields'][$field_name] = $info['label'];
        }
      }
    }

    $form['info'] = [
      '#type' => 'horizontal_tabs',
    ];

    $form['info']['images'] = [
      '#type' => 'horizontal_tab',
      '#title' => t('Images'),
      '#access' => !$context_selected,
    ];

    new Form\Elements\Collection(['info', 'images', 'images'], $form, $form_state, $conf, function () use ($sponsor_variant) {
      $item = [
        '#type' => 'fieldset',
      ];

      $item['title'] = [
        '#type' => 'textfield',
        '#title' => t('Title'),
      ];

      $item['image'] = [
        '#type' => 'managed_file',
        '#title' => t('Image'),
        '#styles' => TRUE,
        '#widget' => 'imce',
        '#upload_validators' => [
          'file_validate_extensions' => ['gif png jpg jpeg svg'],
        ],
      ];

      $item['link'] = [
        '#type' => 'textfield',
        '#title' => t('Link'),
        '#access' => $sponsor_variant,
      ];

      return $item;
    });

    $form['info']['entity'] = [
      '#type' => 'horizontal_tab',
      '#title' => t('Context parameters'),
      '#access' => $context_selected,
    ];

    $form['info']['entity']['node_type'] = [
      '#ajax' => TRUE,
      '#type' => 'select',
      '#title' => t('Content type'),
      '#options' => $form_state['node_types'],
      '#required' => TRUE,
    ];

    $form['info']['entity']['node_type_field'] = [
      '#type' => 'select',
      '#title' => t('Field'),
      '#access' => $node_type_selected,
      '#options' => $form_state['node_type_fields'],
      '#required' => TRUE,
    ];

    $form['info']['entity']['image_style'] = [
      '#type' => 'select',
      '#title' => t('Image style'),
      '#access' => $node_type_selected,
      '#options' => image_style_options(),
      '#required' => TRUE,
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
    $form['info']['entity']['#access'] = !$form['info']['images']['#access'] = 'empty' === $conf['context'];
  }

  /**
   * Load image.
   *
   * @param array $data
   *   Image properties.
   *
   * @return array|object
   *   Return image properties.
   */
  protected static function loadImage(array $data) {
    $data = (object) $data;
    $file = file_md5_load_file($data->image['fid']);

    $data->image = media_file($file, [
      'image_style' => $data->image['style'],
    ]);

    $data->file = $file;

    return $data;
  }

}
