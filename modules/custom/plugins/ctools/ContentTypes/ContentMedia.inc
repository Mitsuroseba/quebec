<?php
/**
 * @file
 * Definition of the "ContentMedia" plugin.
 */

namespace ContentTypes;

use CTools\Plugins\ContentTypes\ContentTypesInterface;
use CTools\Form;

class ContentMedia implements ContentTypesInterface {

  /**
   * {@inheritdoc}
   */
  public static function name() {
    return t('Content media');
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
      'content-video' => t('Content video'),
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
  public static function preprocess(array &$variables, array &$arguments, \ctools_context $context = NULL) {
    $result = [];

    if ('default' === $variables['theme']) {
      foreach ($variables['items'] as $data) {
        $data = (object) $data;
        $file = file_md5_load_file($data->image);

        $data->image = media_file($file);
        $data->file = $file;

        $result[] = $data;
      }
    }
    elseif ('content-video' === $variables['theme']) {
      foreach ($variables['items'] as $data) {
        $data = (object) $data;

        if (!empty($data->video)) {
          $video = media_oembed_get_data($data->video);

          if (!empty($video)) {
            $data->video = $video;
            $result[] = $data;
          }
        }
      }
    }

    $variables['items'] = $result;
  }

  /**
   * {@inheritdoc}
   */
  public static function configurationForm(array &$form, array &$form_state, array &$conf) {
    $variant_default = 'default' === $conf['theme'];

    new Form\Elements\Collection(['items'], $form, $form_state, $conf, function () use (&$form_state, $variant_default) {
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
        '#widget' => 'imce',
        '#upload_validators' => [
          'file_validate_extensions' => ['gif png jpg jpeg svg'],
        ],
        '#access' => $variant_default,
      ];

      $item['video'] = [
        '#type' => 'textfield',
        '#title' => t('Video'),
        '#access' => !$variant_default,
      ];

      return $item;
    });
  }

  /**
   * {@inheritdoc}
   */
  public static function configurationFormValidate(array &$form, array &$form_state, array &$values) {
    if ('content-video' === $values['theme']) {
      foreach ($values['items'] as $index => $item) {
        if (!empty($item['video']) && empty(media_oembed_get_data($item['video']))) {
          form_error($form['items'][$index]['video'], t('Link to video is not valid.'));
        }
      }
    }
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
