<?php
/**
 * @file
 * Views integration.
 */

/**
 * Implements hook_views_data().
 */
function plugins_views_data() {
  $data = [];

  return $data;
}

/**
 * Implements hook_views_data_alter().
 */
function plugins_views_data_alter(array &$data) {
  $data['node']['type']['filter']['handler'] = 'Handlers\Filters\NodeTypeTerms';
}
