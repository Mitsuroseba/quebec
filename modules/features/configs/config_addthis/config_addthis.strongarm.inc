<?php
/**
 * @file
 * config_addthis.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function config_addthis_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_block_widget_settings';
  $strongarm->value = array(
    'share_services' => 'facebook,twitter',
    'buttons_size' => 'addthis_32x32_style',
    'counter_orientation' => 'horizontal',
    'extra_css' => '',
  );
  $export['addthis_block_widget_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_block_widget_type';
  $strongarm->value = 'addthis_basic_toolbox';
  $export['addthis_block_widget_type'] = $strongarm;

  return $export;
}
