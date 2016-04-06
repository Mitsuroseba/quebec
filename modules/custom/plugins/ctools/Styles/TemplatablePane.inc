<?php
/**
 * @file
 * Definition of style plugin for templating pane wrappers.
 */

namespace Styles;

use CTools\Plugins\Styles\StylesPaneInterface;

/**
 * Class TemplatablePane.
 *
 * @package Styles
 */
class TemplatablePane extends Templatable implements StylesPaneInterface {

  /**
   * {@inheritdoc}
   */
  public static function themeVariants() {
    return [];
  }

  /**
   * {@inheritdoc}
   */
  public static function preprocess(\stdClass $content, array &$settings, array &$variables) {

  }

}
