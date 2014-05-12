<?php
/**
 * @file
 * basic_shop.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function basic_shop_taxonomy_default_vocabularies() {
  return array(
    'color' => array(
      'name' => 'Color',
      'machine_name' => 'color',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'shirt_size' => array(
      'name' => 'Shirt size',
      'machine_name' => 'shirt_size',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
