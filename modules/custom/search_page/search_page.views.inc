<?php
/**
 * @file
 * Views related functionality.
 */

/**
 * Implements hook_views_data().
 */
function search_page_views_data() {
  $data = [];

  $data['views']['search_result'] = [
    'title' => t('Search result'),
    'help' => t('Search result information'),
    'area' => [
      'handler' => 'views_handler_area_search_result',
    ],
  ];

  return $data;
}
