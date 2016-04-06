<?php
/**
 * @file
 * config_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function config_permissions_user_default_roles() {
  $roles = array();

  // Exported role: Administrator.
  $roles['Administrator'] = array(
    'name' => 'Administrator',
    'weight' => 4,
  );

  // Exported role: Content Administrator.
  $roles['Content Administrator'] = array(
    'name' => 'Content Administrator',
    'weight' => 5,
  );

  // Exported role: Content Editor.
  $roles['Content Editor'] = array(
    'name' => 'Content Editor',
    'weight' => 6,
  );

  return $roles;
}
