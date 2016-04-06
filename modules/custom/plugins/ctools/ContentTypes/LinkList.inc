<?php
/**
 * @file
 * Definition of the "LinkList" plugin.
 */

namespace ContentTypes;

use CTools\Plugins\ContentTypes\ContentTypesInterface;

/**
 * Class LinkList.
 *
 * @package ContentTypes
 */
class LinkList implements ContentTypesInterface {

  /**
   * {@inheritdoc}
   */
  public static function name() {
    return t('Link list');
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
      'simple' => t('Simple'),
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
    $display = $variables['theme'] . '_link_list';
    $view = views_get_view('link');
    $variables['result'] = [];

    if (!empty($view) && $view->access($display)) {
      $view->set_display($display);
      $filters = $view->display_handler->get_option('filters');

      if (!empty($filters['nid'])) {
        $filters['nid']['value']['value'] = $variables['reference']['entity_id'];
        $view->display_handler->override_option('filters', $filters);
      }

      $view->pre_execute();
      $view->execute();

      $variables['result'] = $view->preview($display);
    }

    // For all theme variant of the same type of output.
    $variables['theme'] = 'default';
  }

  /**
   * {@inheritdoc}
   */
  public static function configurationForm(array &$form, array &$form_state, array &$conf) {
    $form['reference'] = [
      '#type' => 'entityreference',
      '#title' => t('Node'),
      '#required' => TRUE,
      '#era_bundles' => ['link'],
      '#era_entity_type' => 'node',
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
