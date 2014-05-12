<?php
/**
 * @file
 * basic_shop.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function basic_shop_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'commerce_product|shirt|node_teaser';
  $ds_fieldsetting->entity_type = 'commerce_product';
  $ds_fieldsetting->bundle = 'shirt';
  $ds_fieldsetting->view_mode = 'node_teaser';
  $ds_fieldsetting->settings = array(
    'field_images' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['commerce_product|shirt|node_teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|shirt|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'shirt';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h3',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'field_vote' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'block-column separator-right',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => TRUE,
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => '',
          'fis-at' => '',
          'fis-def-at' => TRUE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => TRUE,
          'fi-odd-even' => TRUE,
        ),
      ),
    ),
    'field_addthis' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'block-column',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => TRUE,
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => '',
          'fis-at' => '',
          'fis-def-at' => TRUE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => TRUE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['node|shirt|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|shirt|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'shirt';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h5',
        'class' => '',
        'ft' => array(),
      ),
    ),
  );
  $export['node|shirt|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'reply|product_reviews|default';
  $ds_fieldsetting->entity_type = 'reply';
  $ds_fieldsetting->bundle = 'product_reviews';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_content_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
    'field_review_vote' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['reply|product_reviews|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function basic_shop_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'commerce_product|shirt|add_to_cart_confirmation_view';
  $ds_layout->entity_type = 'commerce_product';
  $ds_layout->bundle = 'shirt';
  $ds_layout->view_mode = 'add_to_cart_confirmation_view';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'commerce_price',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'commerce_price' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['commerce_product|shirt|add_to_cart_confirmation_view'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'commerce_product|shirt|commerce_line_item_display';
  $ds_layout->entity_type = 'commerce_product';
  $ds_layout->bundle = 'shirt';
  $ds_layout->view_mode = 'commerce_line_item_display';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_images',
        1 => 'title',
        2 => 'commerce_price',
        3 => 'field_color',
        4 => 'field_size',
        5 => 'status',
      ),
    ),
    'fields' => array(
      'field_images' => 'ds_content',
      'title' => 'ds_content',
      'commerce_price' => 'ds_content',
      'field_color' => 'ds_content',
      'field_size' => 'ds_content',
      'status' => 'ds_content',
    ),
    'limit' => array(
      'field_images' => '1',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['commerce_product|shirt|commerce_line_item_display'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'commerce_product|shirt|node_full';
  $ds_layout->entity_type = 'commerce_product';
  $ds_layout->bundle = 'shirt';
  $ds_layout->view_mode = 'node_full';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_images',
      ),
      'right' => array(
        1 => 'title',
        2 => 'sku',
        3 => 'commerce_price',
        4 => 'status',
      ),
    ),
    'fields' => array(
      'field_images' => 'left',
      'title' => 'right',
      'sku' => 'right',
      'commerce_price' => 'right',
      'status' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['commerce_product|shirt|node_full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'commerce_product|shirt|node_teaser';
  $ds_layout->entity_type = 'commerce_product';
  $ds_layout->bundle = 'shirt';
  $ds_layout->view_mode = 'node_teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_images',
        1 => 'title',
        2 => 'commerce_price',
        3 => 'field_color',
        4 => 'field_size',
        5 => 'status',
      ),
    ),
    'fields' => array(
      'field_images' => 'ds_content',
      'title' => 'ds_content',
      'commerce_price' => 'ds_content',
      'field_color' => 'ds_content',
      'field_size' => 'ds_content',
      'status' => 'ds_content',
    ),
    'limit' => array(
      'field_images' => '1',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['commerce_product|shirt|node_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|shirt|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'shirt';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'zf_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'product:field_images',
      ),
      'right' => array(
        1 => 'title',
        2 => 'product:commerce_price',
        3 => 'body',
        4 => 'field_product',
      ),
      'footer' => array(
        5 => 'field_addthis',
        6 => 'field_vote',
        7 => 'field_product_reviews',
      ),
    ),
    'fields' => array(
      'product:field_images' => 'left',
      'title' => 'right',
      'product:commerce_price' => 'right',
      'body' => 'right',
      'field_product' => 'right',
      'field_addthis' => 'footer',
      'field_vote' => 'footer',
      'field_product_reviews' => 'footer',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '1',
    'page_option_title' => '',
  );
  $export['node|shirt|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|shirt|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'shirt';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'product:commerce_price',
        2 => 'product:field_images',
        3 => 'field_product',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'product:commerce_price' => 'ds_content',
      'product:field_images' => 'ds_content',
      'field_product' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|shirt|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'reply|product_reviews|default';
  $ds_layout->entity_type = 'reply';
  $ds_layout->bundle = 'product_reviews';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_content_title',
        1 => 'field_basic_text_text',
        2 => 'field_review_vote',
      ),
    ),
    'fields' => array(
      'field_content_title' => 'ds_content',
      'field_basic_text_text' => 'ds_content',
      'field_review_vote' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['reply|product_reviews|default'] = $ds_layout;

  return $export;
}
