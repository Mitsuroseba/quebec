<?php
/**
 * @file
 * Definition of style plugin for templating region wrappers.
 */

namespace Styles;

use CTools\Plugins\Styles\StylesRegionInterface;

/**
 * Class TemplatableRegion.
 *
 * @package Styles
 */
class TemplatableRegion extends Templatable implements StylesRegionInterface {

  /**
   * {@inheritdoc}
   */
  public static function themeVariants() {
    return [
      'footer-content' => t('Footer content'),
      'frontpage-left' => t('Left (frontpage)'),
      'frontpage-right' => t('Right (frontpage)'),
      'frontpage-main' => t('Main (frontpage)'),
      'blog' => t('Blog'),
    ];
  }

  /**
   * {@inheritdoc}
   */
  public static function preprocess(\panels_display $display, array &$settings, array &$variables) {

  }

}
