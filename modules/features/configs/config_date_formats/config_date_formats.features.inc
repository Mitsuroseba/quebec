<?php
/**
 * @file
 * config_date_formats.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function config_date_formats_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_fe_date_custom_date_formats().
 */
function config_date_formats_fe_date_custom_date_formats() {
  $custom_date_formats = array();
  $custom_date_formats['d/m - Y'] = 'd/m - Y';
  return $custom_date_formats;
}

/**
 * Implements hook_date_format_types().
 */
function config_date_formats_date_format_types() {
  $format_types = array();
  // Exported date format type: dd_mm_yyyy
  $format_types['dd_mm_yyyy'] = 'dd/mm - yyyy';
  return $format_types;
}

/**
 * Implements hook_fe_date_locale_date_format().
 */
function config_date_formats_fe_date_locale_date_format() {
  $locale_date_formats = array();

  // Exported format: dd_mm_yyyy::en
  $locale_date_formats['dd_mm_yyyy::en'] = array(
    'type' => 'dd_mm_yyyy',
    'format' => 'd/m - Y',
    'locales' => array(
      0 => 'en',
    ),
  );
  return $locale_date_formats;
}
