<?php
/**
 * @file
 * Definition of the "Spot" content type plugin.
 */

namespace ContentTypes;

use CTools\Plugins\ContentTypes\ContentTypesInterface;

/**
 * Class Spot.
 *
 * @package ContentTypes
 */
class Spot implements ContentTypesInterface {

  /**
   * {@inheritdoc}
   */
  public static function name() {
    return t('Spot');
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
    if (!empty($variables['image'])) {
      $file = file_md5_load_file($variables['image']['fid']);

      $variables['image'] = media_file($file, [
        'image_style' => $variables['image']['style'],
      ]);

    }
  }

  /**
   * {@inheritdoc}
   */
  public static function configurationForm(array &$form, array &$form_state, array &$conf) {
    $form['wrapper'] = [
      '#type' => 'fieldset',
      '#title' => t('Spot settings'),
    ];

    $form['wrapper']['title'] = [
      '#type' => 'textfield',
      '#title' => t('Title'),
      '#required' => TRUE,
    ];

    $form['wrapper']['text'] = [
      '#type' => 'textarea',
      '#title' => t('Text'),
      '#required' => TRUE,
    ];

    $form['wrapper']['link'] = [
      '#type' => 'textfield',
      '#title' => t('Link address'),
      '#required' => TRUE,
    ];

    $form['wrapper']['image'] = [
      '#type' => 'managed_file',
      '#title' => t('Image'),
      '#styles' => TRUE,
      '#widget' => 'imce',
      '#upload_validators' => [
        'file_validate_extensions' => ['gif png jpg jpeg svg'],
      ],
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
