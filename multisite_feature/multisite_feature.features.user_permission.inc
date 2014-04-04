<?php
/**
 * @file
 * multisite_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function multisite_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer multisite'.
  $permissions['administer multisite'] = array(
    'name' => 'administer multisite',
    'roles' => array(),
    'module' => 'multisite',
  );

  // Exported permission: 'administer multisite entities'.
  $permissions['administer multisite entities'] = array(
    'name' => 'administer multisite entities',
    'roles' => array(),
    'module' => 'multisite',
  );

  // Exported permission: 'delete own multisite entities'.
  $permissions['delete own multisite entities'] = array(
    'name' => 'delete own multisite entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'multisite',
  );

  // Exported permission: 'edit own multisite entities'.
  $permissions['edit own multisite entities'] = array(
    'name' => 'edit own multisite entities',
    'roles' => array(
      'Blogger' => 'Blogger',
      'administrator' => 'administrator',
    ),
    'module' => 'multisite',
  );

  // Exported permission: 'view multisite entities'.
  $permissions['view multisite entities'] = array(
    'name' => 'view multisite entities',
    'roles' => array(
      'Blogger' => 'Blogger',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'multisite',
  );

  // Exported permission: 'view own multisite entities'.
  $permissions['view own multisite entities'] = array(
    'name' => 'view own multisite entities',
    'roles' => array(
      'Blogger' => 'Blogger',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'multisite',
  );

  return $permissions;
}
