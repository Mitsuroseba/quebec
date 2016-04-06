<?php
/**
 * @file
 * Definition of the "ApsisSubscription" content type plugin.
 */

namespace ContentTypes;

use CTools\Plugins\ContentTypes\ContentTypesInterface;

/**
 * Class ApsisSubscription.
 *
 * @package ContentTypes
 */
class ApsisSubscription implements ContentTypesInterface {

  /**
   * {@inheritdoc}
   */
  public static function name() {
    return t('Apsis subscription');
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
      $variables['image'] = file_md5_load_file($variables['image']);
    }

    drupal_add_js(drupal_get_path('theme', 'parallel') . '/js/apsisSubscription.js');
  }

  /**
   * {@inheritdoc}
   */
  public static function configurationForm(array &$form, array &$form_state, array &$conf) {
    $form['wrapper'] = [
      '#type' => 'fieldset',
      '#title' => t('Apsis settings'),
    ];

    $form['wrapper']['action'] = [
      '#type' => 'textfield',
      '#title' => t('Action'),
      '#required' => TRUE,
    ];

    $form['wrapper']['image'] = [
      '#type' => 'managed_file',
      '#title' => t('Image'),
      '#styles' => FALSE,
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
