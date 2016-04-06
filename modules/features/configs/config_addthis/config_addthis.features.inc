<?php
/**
 * @file
 * config_addthis.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function config_addthis_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
