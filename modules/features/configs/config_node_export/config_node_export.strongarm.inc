<?php
/**
 * @file
 * config_node_export.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function config_node_export_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_format';
  $strongarm->value = array(
    'json' => 'json',
    'drupal' => 0,
    'serialize' => 0,
    'xml' => 0,
    'dsv' => 0,
  );
  $export['node_export_format'] = $strongarm;

  return $export;
}
