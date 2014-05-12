<?php
/**
 * @file
 * basic_shop.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function basic_shop_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'delete own product_reviews reply'.
  $permissions['delete own product_reviews reply'] = array(
    'name' => 'delete own product_reviews reply',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'reply',
  );

  // Exported permission: 'edit own product_reviews reply'.
  $permissions['edit own product_reviews reply'] = array(
    'name' => 'edit own product_reviews reply',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'reply',
  );

  // Exported permission: 'post product_reviews reply'.
  $permissions['post product_reviews reply'] = array(
    'name' => 'post product_reviews reply',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'reply',
  );

  // Exported permission: 'rate content'.
  $permissions['rate content'] = array(
    'name' => 'rate content',
    'roles' => array(
      'Blogger' => 'Blogger',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'fivestar',
  );

  // Exported permission: 'view any commerce_product entity'.
  $permissions['view any commerce_product entity'] = array(
    'name' => 'view any commerce_product entity',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view product_reviews reply'.
  $permissions['view product_reviews reply'] = array(
    'name' => 'view product_reviews reply',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'reply',
  );

  return $permissions;
}
