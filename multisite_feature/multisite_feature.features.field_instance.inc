<?php
/**
 * @file
 * multisite_feature.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function multisite_feature_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'multisite-multisite-field_blog_category'
  $field_instances['multisite-multisite-field_blog_category'] = array(
    'bundle' => 'multisite',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'edit' => array(
            'editor' => 'form',
          ),
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'multisite',
    'exclude_cv' => 0,
    'field_name' => 'field_blog_category',
    'label' => 'Blog category',
    'required' => 0,
    'settings' => array(
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 31,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Blog category');

  return $field_instances;
}
