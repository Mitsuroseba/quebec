<?php
/**
 * @file
 * Definition of the "Social" content type plugin.
 */

namespace ContentTypes\Social;

use CTools\Plugins\ContentTypes\ContentTypesInterface;

/**
 * Class Social.
 *
 * @package ContentTypes\Social
 */
class Social implements ContentTypesInterface {

  /**
   * {@inheritdoc}
   */
  public static function name() {
    return t('Social');
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
    $result = [];

    foreach ($variables['social'] as $name => $account) {
      if (!empty($account['account'])) {
        $result[$name] = self::socialServices($name)  . '/' . $account['account'];
      }
    }

    $variables['items'] = $result;
  }

  /**
   * {@inheritdoc}
   */
  public static function configurationForm(array &$form, array &$form_state, array &$conf) {
    $form['social'] = [
      '#type' => 'horizontal_tabs',
    ];

    foreach (self::socialServices() as $name => $url) {
      $form['social'][$name] = [
        '#type' => 'horizontal_tab',
        '#title' => t('@social account', ['@social' => ucfirst($name)]),
      ];

      $form['social'][$name]['title'] = [
        '#type' => 'html_tag',
        '#tag' => 'p',
        '#value' => "$url/",
      ];

      $form['social'][$name]['account'] = [
        '#type' => 'textfield',
        '#title' => ucfirst($name),
        '#title_display' => 'invisible',
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

  /**
   * Get social services url.
   *
   * @param string $name
   *   Service name.
   *
   * @return array|string
   *   Return services list or single service.
   */
  private static function socialServices($name = '') {
    $services = [
      'facebook' => 'https://facebook.com',
      'twitter' => 'https://twitter.com',
      'instagram' => 'https://instagram.com',
      'youtube' => 'https://youtube.com/channel',
    ];

    return empty($name) ? $services : (empty($services[$name]) ? '' : $services[$name]);
  }

}
