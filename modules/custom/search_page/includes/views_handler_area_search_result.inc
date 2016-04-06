<?php
/**
 * @file
 * Definition of "views_handler_area_search_result" Views plugin.
 */

/**
 * Class views_handler_area_search_result.
 */
// @codingStandardsIgnoreStart
class views_handler_area_search_result extends \views_handler_area {
  // @codingStandardsIgnoreEnd

  /**
   * {@inheritdoc}
   */
  public function render($empty = FALSE) {
    return theme('search_page__views_area__search_result', [
      'view' => $this->view,
    ]);
  }

}
