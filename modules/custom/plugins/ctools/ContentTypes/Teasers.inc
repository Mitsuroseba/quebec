<?php
/**
 * @file
 * Definition of the "Teasers" content type plugin.
 */

namespace ContentTypes;

use CTools\Plugins\ContentTypes\ContentTypesInterface;

/**
 * Class Teasers.
 *
 * @package ContentTypes
 */
class Teasers implements ContentTypesInterface {

  /**
   * {@inheritdoc}
   */
  public static function name() {
    return t('Teasers');
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
      'text-block' => t('Text block'),
      'hero-spot' => t('Hero spot'),
    ];
  }

  /**
   * {@inheritdoc}
   */
  public static function dependencies() {
    return ['uuid'];
  }

  /**
   * {@inheritdoc}
   */
  public static function preprocess(array &$variables, array &$arguments, \ctools_context $context = NULL) {
    $fields = [];
    $reference = [];
    $attributes = '';
    $entity_type = '';

    if ('default' !== $variables['theme']) {
      if ('empty' === $variables['context'] && !empty($variables['reference'])) {
        $entity_type = $variables['reference']['entity_type'];

        $entity = entity_get_id_by_uuid($variables['reference']['entity_type'], [$variables['reference']['entity_uuid']]);
        $entity = empty($entity) ? [] : node_load(reset($entity));
      }
      elseif (!empty($context) && !empty($context->data)) {
        $field_name = 'field_' . str_replace('-', '_', $variables['theme']);

        if (!empty($context->data->{$field_name})) {
          // @see ctools_context_create_entity().
          // The last element of the array always stores entity type.
          $entity_type = end($context->type);

          $entity = field_get_items($entity_type, $context->data, $field_name);
          $entity = $entity[0]['entity'];
        }
      }

      if (!empty($entity)) {
        $reference['title'] = $entity->title;

        /* @var \EntityValueWrapper $data */
        foreach (entity_metadata_wrapper($entity_type, $entity) as $item => $data) {
          $fields[str_replace('field_', '', $item)] = $data->value();
        }

        switch ($variables['theme']) {
          case 'hero-spot':
            $reference['subheader'] = $fields['subheader']['value'];

            if (!empty($fields['image'])) {
              $file = file_md5_load_file($fields['image']['fid']);

              $reference['image'] = media_file($file);
              $reference['file'] = $file;
            }

            if (!empty($variables['link'] && !empty($fields['link']))) {
              $reference['link'] = $fields['link']['url'];

              foreach ($fields['link']['attributes'] as $name => $value) {
                $attributes .= empty($value) ? '' : $name . '="' . $value . '" ';
              }

              $reference['link_attributes'] = $attributes;
            }

            if (!empty($variables['category']) && !empty($fields['category'])) {
              $category_color = field_get_items('taxonomy_term', $fields['category'], 'field_category_color');

              if (!empty($category_color)) {
                $reference['category_color'] = $category_color[0]['value'];
              }

              $reference['category'] = $fields['category']->name;
            }
            break;

          case 'text-block':
            $reference['content'] = $fields['body']['value'];

            if (!empty($fields['preview'])) {
              foreach ($fields['preview'] as $item) {
                $file = file_md5_load_file($item['fid']);

                $reference['images'][] = [
                  'image' => media_file($file, [
                    'image_style' => '500x300',
                  ]),
                  'file' => $file,
                ];
              }
            }

            libraries_load('swiper');
            break;
        }
      }
    }

    $variables['reference'] = $reference;
  }

  /**
   * {@inheritdoc}
   */
  public static function configurationForm(array &$form, array &$form_state, array &$conf) {
    $context_selected = isset($conf['context']) && 'empty' !== $conf['context'];
    $hero_spot_variant = 'hero-spot' === $conf['theme'];
    $default_variant = 'default' === $conf['theme'];
    $content_type = node_type_get_type(str_replace('-', '_', $conf['theme']));

    $form['title'] = [
      '#type' => 'textfield',
      '#title' => t('Title'),
      '#required' => TRUE,
      '#access' => $default_variant && !$context_selected,
    ];

    $form['message'] = [
      '#type' => 'textarea',
      '#title' => t('Message'),
      '#required' => TRUE,
      '#access' => $default_variant && !$context_selected,
    ];

    $form['background'] = [
      '#type' => 'jquery_colorpicker',
      '#title' => t('Background'),
      '#description' => t('Background color under the image.'),
      '#access' => $default_variant && !$context_selected,
    ];

    if (!empty($content_type)) {
      $form['reference'] = [
        '#type' => 'entityreference',
        '#title' => t('Node'),
        '#required' => TRUE,
        '#era_bundles' => [$content_type->type],
        '#access' => !$context_selected,
        '#era_entity_type' => 'node',
      ];

      $form['image_align'] = [
        '#type' => 'radios',
        '#title' => t('Image align'),
        '#options' => [
          'left' => t('Left'),
          'right' => t('Right'),
        ],
        '#required' => TRUE,
        '#access' => !$hero_spot_variant,
      ];

      $form['category'] = [
        '#type' => 'checkbox',
        '#title' => t('Display category'),
        '#access' => $hero_spot_variant,
      ];

      $form['link'] = [
        '#type' => 'checkbox',
        '#title' => t('Show link'),
        '#access' => $hero_spot_variant,
      ];
    }

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
