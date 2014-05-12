<?php
/**
 * @file
 * basic_shop.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function basic_shop_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_disabled|node|shirt|form';
  $field_group->group_name = 'group_disabled';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'shirt';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Disabled',
    'weight' => '6',
    'children' => array(
      0 => 'field_vote',
      1 => 'field_addthis',
      2 => 'field_product_reviews',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Disabled',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-disabled field-group-div element-invisible',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_disabled|node|shirt|form'] = $field_group;

  return $export;
}
