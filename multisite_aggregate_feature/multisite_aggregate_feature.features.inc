<?php
/**
 * @file
 * multisite_aggregate_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function multisite_aggregate_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_multisite_aggregate_type().
 */
function multisite_aggregate_feature_default_multisite_aggregate_type() {
  $items = array();
  $items['blog'] = entity_import('multisite_aggregate_type', '{
    "type" : "blog",
    "label" : "Blog",
    "weight" : "0",
    "source_type" : "node",
    "source_bundle" : "blog",
    "source_fields" : {
      "field_aggregate_body" : "body",
      "field_aggregate_image" : "field_image"
    }
  }');
  return $items;
}
