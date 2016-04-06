<?php
/**
 * @file
 * config_entity_view_modes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function config_entity_view_modes_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
