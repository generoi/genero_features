<?php
/**
 * @file
 * multisite_aggregate_feature.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function multisite_aggregate_feature_taxonomy_default_vocabularies() {
  return array(
    'blog_entry_category' => array(
      'name' => 'Blog entry category',
      'machine_name' => 'blog_entry_category',
      'description' => 'Category to be used by blog users',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
