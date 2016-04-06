<?php
/**
 * @file
 * config_jquery_version.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function config_jquery_version_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
