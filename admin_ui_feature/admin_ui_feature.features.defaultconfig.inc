<?php
/**
 * @file
 * admin_ui_feature.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function admin_ui_feature_defaultconfig_features() {
  return array(
    'admin_ui_feature' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function admin_ui_feature_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access overlay'.
  $permissions['access overlay'] = array(
    'name' => 'access overlay',
    'roles' => array(
      'Blogger' => 'Blogger',
      'administrator' => 'administrator',
    ),
    'module' => 'overlay',
  );

  return $permissions;
}
