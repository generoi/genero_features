<?php
/**
 * @file
 * multisite_aggregate_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function multisite_aggregate_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer multisite aggregate types'.
  $permissions['administer multisite aggregate types'] = array(
    'name' => 'administer multisite aggregate types',
    'roles' => array(),
    'module' => 'multisite_aggregate',
  );

  // Exported permission: 'administer multisite aggregates'.
  $permissions['administer multisite aggregates'] = array(
    'name' => 'administer multisite aggregates',
    'roles' => array(),
    'module' => 'multisite_aggregate',
  );

  // Exported permission: 'view any blog multisite aggregate'.
  $permissions['view any blog multisite aggregate'] = array(
    'name' => 'view any blog multisite aggregate',
    'roles' => array(
      'Blogger' => 'Blogger',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'multisite_aggregate',
  );

  return $permissions;
}
