<?php
/**
 * @file
 * Helper for Templatable Region and Pane style plugins.
 */

namespace Styles;

use CTools\Plugins\Styles\StylesInterface;

/**
 * Class Templatable.
 *
 * @package Styles
 */
abstract class Templatable implements StylesInterface {

  /**
   * {@inheritdoc}
   */
  public static function name() {
    return t('Templatable');
  }

  /**
   * {@inheritdoc}
   */
  public static function info() {
    return [];
  }

  /**
   * {@inheritdoc}
   */
  public static function themeVariants() {
    return [
      'question-and-answer' => t('Question and answer'),
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
  public static function configurationForm(array &$form, array &$form_state, array &$conf) {

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
