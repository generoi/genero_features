<?php
/**
 * @file
 * blog_feature.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function blog_feature_user_default_roles() {
  $roles = array();

  // Exported role: Blogger.
  $roles['Blogger'] = array(
    'name' => 'Blogger',
    'weight' => 2,
    'machine_name' => 'blogger',
  );

  return $roles;
}
