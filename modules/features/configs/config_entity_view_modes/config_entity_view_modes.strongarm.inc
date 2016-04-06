<?php
/**
 * @file
 * config_entity_view_modes.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function config_entity_view_modes_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_view_modes';
  $strongarm->value = array(
    'node' => array(
      'small_spot' => array(
        'label' => 'Small Spot',
        'custom settings' => 1,
      ),
      'list_latest_news' => array(
        'label' => 'Latest news list',
        'custom settings' => 1,
      ),
      'list_most_readable' => array(
        'label' => 'Most readable list',
        'custom settings' => 1,
      ),
      'spot' => array(
        'label' => 'Spot',
        'custom settings' => 1,
      ),
      'list_most_readable_image' => array(
        'label' => 'Most readable list (image)',
        'custom settings' => 1,
      ),
      'list_latest_news_image' => array(
        'label' => 'Latest news list (image)',
        'custom settings' => 1,
      ),
      'video_teaser' => array(
        'label' => 'Video teaser',
        'custom settings' => 1,
      ),
      'big_spot' => array(
        'label' => 'Big Spot',
        'custom settings' => 1,
      ),
      'list_columns' => array(
        'label' => 'Columns list',
        'custom settings' => 1,
      ),
      'blog' => array(
        'label' => 'Blog',
        'custom settings' => 1,
      ),
    ),
  );
  $export['entity_view_modes'] = $strongarm;

  return $export;
}
