<?php
/**
 * @file
 * config_user.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function config_user_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
