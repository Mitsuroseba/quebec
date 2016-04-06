<?php
/**
 * @file
 * config_uuid_features.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function config_uuid_features_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_features_entity_node';
  $strongarm->value = array(
    'article' => 0,
    'equipment' => 0,
    'gallery' => 0,
    'hero_spot' => 0,
    'instruction' => 0,
    'news' => 0,
    'questions_and_answers' => 0,
    'rules' => 0,
    'section_page' => 0,
    'text_block' => 0,
    'tournaments' => 0,
    'travel' => 0,
    'video' => 0,
    'webform' => 0,
  );
  $export['uuid_features_entity_node'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_features_entity_taxonomy_term';
  $strongarm->value = array(
    'category' => 'category',
    'course' => 'course',
    'tournament' => 'tournament',
    'player' => 'player',
    'tags' => 'tags',
    'equipment_category' => 'equipment_category',
    'equipment_type' => 'equipment_type',
    'equipment_brand' => 'equipment_brand',
    'tournament_region' => 'tournament_region',
    'tournament_type' => 'tournament_type',
    'ranking' => 'ranking',
    'handicap' => 'handicap',
    'age' => 'age',
    'gender' => 'gender',
    'district' => 'district',
    'country' => 'country',
  );
  $export['uuid_features_entity_taxonomy_term'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_features_file_assets_path';
  $strongarm->value = '';
  $export['uuid_features_file_assets_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_features_file_mode';
  $strongarm->value = 'inline';
  $export['uuid_features_file_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_features_file_node';
  $strongarm->value = array(
    'article' => 0,
    'equipment' => 0,
    'gallery' => 0,
    'hero_spot' => 0,
    'instruction' => 0,
    'news' => 0,
    'questions_and_answers' => 0,
    'rules' => 0,
    'section_page' => 0,
    'text_block' => 0,
    'tournaments' => 0,
    'travel' => 0,
    'video' => 0,
    'webform' => 0,
  );
  $export['uuid_features_file_node'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_features_file_supported_fields';
  $strongarm->value = 'file, image';
  $export['uuid_features_file_supported_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_features_file_taxonomy_term';
  $strongarm->value = array(
    'category' => 0,
    'course' => 0,
    'tournament' => 0,
    'player' => 0,
    'tags' => 0,
    'equipment_category' => 0,
    'equipment_type' => 0,
    'equipment_brand' => 0,
    'tournament_region' => 0,
    'tournament_type' => 0,
    'ranking' => 0,
    'handicap' => 0,
    'age' => 0,
    'gender' => 0,
    'district' => 0,
    'country' => 0,
  );
  $export['uuid_features_file_taxonomy_term'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_features_vocabulary_terms';
  $strongarm->value = 0;
  $export['uuid_features_vocabulary_terms'] = $strongarm;

  return $export;
}
