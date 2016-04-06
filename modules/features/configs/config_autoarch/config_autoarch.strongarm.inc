<?php
/**
 * @file
 * config_autoarch.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function config_autoarch_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autoarch_date_granularity';
  $strongarm->value = 'Y-m';
  $export['autoarch_date_granularity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autoarch_node_types';
  $strongarm->value = array(
    'news' => 'news',
    'article' => 0,
    'hero_spot' => 0,
    'questions_and_answers' => 0,
    'section_page' => 0,
    'text_block' => 0,
  );
  $export['autoarch_node_types'] = $strongarm;

  return $export;
}
