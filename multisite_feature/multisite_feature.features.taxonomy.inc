<?php
/**
 * @file
 * multisite_feature.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function multisite_feature_taxonomy_default_vocabularies() {
  return array(
    'blog_category' => array(
      'name' => 'Blog category',
      'machine_name' => 'blog_category',
      'description' => 'Category of a blog multisite instance',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
