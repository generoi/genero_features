<?php
/**
 * @file
 * basic_shop.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function basic_shop_defaultconfig_features() {
  return array(
    'basic_shop' => array(
      'ds_field_settings_info' => 'ds_field_settings_info',
      'ds_layout_settings_info' => 'ds_layout_settings_info',
      'field_default_fields' => 'field_default_fields',
      'strongarm' => 'strongarm',
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_ds_field_settings_info().
 */
function basic_shop_defaultconfig_ds_field_settings_info() {
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
 * Implements hook_defaultconfig_ds_layout_settings_info().
 */
function basic_shop_defaultconfig_ds_layout_settings_info() {
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

/**
 * Implements hook_defaultconfig_field_default_fields().
 */
function basic_shop_defaultconfig_field_default_fields() {
  $fields = array();

  // Exported field: 'commerce_product-shirt-field_color'.
  $fields['commerce_product-shirt-field_color'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_color',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'color',
            'parent' => 0,
          ),
        ),
      ),
      'translatable' => 0,
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'shirt',
      'commerce_cart_settings' => array(
        'attribute_field' => 1,
        'attribute_widget' => 'commerce_fancy_attributes',
        'attribute_widget_title' => 'Select Color',
      ),
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'add_to_cart_confirmation_view' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 6,
        ),
        'commerce_line_item_display' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(
            'edit' => array(
              'editor' => 'form',
            ),
          ),
          'type' => 'taxonomy_term_reference_link',
          'weight' => 3,
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(
            'edit' => array(
              'editor' => 'form',
            ),
          ),
          'type' => 'taxonomy_term_reference_link',
          'weight' => 1,
        ),
        'line_item' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'node_full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 5,
        ),
        'node_teaser' => array(
          'label' => 'hidden',
          'module' => 'ds',
          'settings' => array(
            'edit' => array(
              'editor' => 'form',
            ),
            'taxonomy_term_reference_view_mode' => 'add_to_cart_form',
          ),
          'type' => 'ds_taxonomy_view_mode',
          'weight' => 3,
        ),
      ),
      'entity_type' => 'commerce_product',
      'exclude_cv' => 0,
      'field_name' => 'field_color',
      'label' => 'Color',
      'product_catalog' => 1,
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
        'weight' => 6,
      ),
    ),
  );

  // Exported field: 'node-shirt-field_product_reviews'.
  $fields['node-shirt-field_product_reviews'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_product_reviews',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => 0,
      'module' => 'reply',
      'settings' => array(
        'access' => -1,
        'allow_reply' => -1,
        'bundle' => 'product_reviews',
        'display' => -1,
        'form' => -1,
      ),
      'translatable' => 0,
      'type' => 'reply',
    ),
    'field_instance' => array(
      'bundle' => 'shirt',
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'reply',
          'settings' => array(
            'edit' => array(
              'editor' => 'form',
            ),
          ),
          'type' => 'reply_default',
          'weight' => 7,
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'reply',
          'settings' => array(
            'edit' => array(
              'editor' => 'form',
            ),
          ),
          'type' => 'reply_default',
          'weight' => 7,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'exclude_cv' => 0,
      'field_name' => 'field_product_reviews',
      'label' => 'Product Reviews',
      'required' => 0,
      'settings' => array(
        'access' => -1,
        'allow_reply' => -1,
        'display' => -1,
        'exclude_cv' => FALSE,
        'form' => -1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'reply',
        'settings' => array(),
        'type' => 'reply',
        'weight' => 8,
      ),
    ),
  );

  // Exported field: 'reply-product_reviews-field_basic_text_text'.
  $fields['reply-product_reviews-field_basic_text_text'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_basic_text_text',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => 0,
      'module' => 'text',
      'settings' => array(),
      'translatable' => 0,
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'product_reviews',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'edit' => array(
              'editor' => 'plain_text',
            ),
          ),
          'type' => 'text_default',
          'weight' => 2,
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'edit' => array(
              'editor' => 'plain_text',
            ),
          ),
          'type' => 'text_default',
          'weight' => 2,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'reply',
      'exclude_cv' => 0,
      'field_name' => 'field_basic_text_text',
      'label' => 'Text',
      'required' => 1,
      'settings' => array(
        'exclude_cv' => FALSE,
        'linkit' => array(
          'button_text' => 'Search',
          'enable' => 0,
          'profile' => '',
        ),
        'text_processing' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => 5,
        ),
        'type' => 'text_textarea',
        'weight' => 3,
      ),
    ),
  );

  // Exported field: 'reply-product_reviews-field_content_title'.
  $fields['reply-product_reviews-field_content_title'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_content_title',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => 0,
      'module' => 'text',
      'settings' => array(
        'max_length' => 255,
      ),
      'translatable' => 0,
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'product_reviews',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'edit' => array(
              'editor' => 'plain_text',
            ),
          ),
          'type' => 'text_default',
          'weight' => 0,
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'edit' => array(
              'editor' => 'plain_text',
            ),
          ),
          'type' => 'text_default',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'reply',
      'exclude_cv' => 0,
      'field_name' => 'field_content_title',
      'label' => 'Title',
      'required' => 1,
      'settings' => array(
        'exclude_cv' => FALSE,
        'linkit' => array(
          'button_text' => 'Search',
          'enable' => 0,
          'profile' => '',
        ),
        'text_processing' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 1,
      ),
    ),
  );

  // Exported field: 'reply-product_reviews-field_review_vote'.
  $fields['reply-product_reviews-field_review_vote'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_review_vote',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => 0,
      'module' => 'fivestar',
      'settings' => array(
        'axis' => 'vote',
      ),
      'translatable' => 0,
      'type' => 'fivestar',
    ),
    'field_instance' => array(
      'bundle' => 'product_reviews',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'fivestar',
          'settings' => array(
            'edit' => array(
              'editor' => 'form',
            ),
            'expose' => TRUE,
            'style' => 'average',
            'text' => 'none',
            'widget' => array(
              'fivestar_widget' => 'sites/all/modules/contrib/fivestar/widgets/oxygen/oxygen.css',
            ),
          ),
          'type' => 'fivestar_formatter_default',
          'weight' => 3,
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'fivestar',
          'settings' => array(
            'edit' => array(
              'editor' => 'form',
            ),
            'expose' => TRUE,
            'style' => 'average',
            'text' => 'none',
            'widget' => array(
              'fivestar_widget' => 'sites/all/modules/contrib/fivestar/widgets/oxygen/oxygen.css',
            ),
          ),
          'type' => 'fivestar_formatter_default',
          'weight' => 3,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'reply',
      'exclude_cv' => 0,
      'field_name' => 'field_review_vote',
      'label' => 'Review Vote',
      'required' => 1,
      'settings' => array(
        'allow_clear' => 0,
        'allow_ownvote' => 0,
        'allow_revote' => 0,
        'exclude_cv' => FALSE,
        'stars' => 5,
        'target' => 'none',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'fivestar',
        'settings' => array(
          'widget' => array(
            'fivestar_widget' => 'sites/all/modules/contrib/fivestar/widgets/oxygen/oxygen.css',
          ),
        ),
        'type' => 'stars',
        'weight' => 2,
      ),
    ),
  );

  // Exported field: 'taxonomy_term-color-field_category_color'.
  $fields['taxonomy_term-color-field_category_color'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_category_color',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => 0,
      'module' => 'text',
      'settings' => array(
        'max_length' => 7,
      ),
      'translatable' => 0,
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'color',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'add_to_cart_form' => array(
          'label' => 'hidden',
          'module' => 'commerce_fancy_attributes',
          'settings' => array(
            'edit' => array(
              'editor' => 'form',
            ),
          ),
          'type' => 'commerce_fancy_attributes_color',
          'weight' => 0,
        ),
        'default' => array(
          'label' => 'hidden',
          'module' => 'commerce_fancy_attributes',
          'settings' => array(
            'edit' => array(
              'editor' => 'form',
            ),
          ),
          'type' => 'commerce_fancy_attributes_color',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'taxonomy_term',
      'exclude_cv' => 0,
      'field_name' => 'field_category_color',
      'label' => 'Color',
      'required' => 1,
      'settings' => array(
        'exclude_cv' => FALSE,
        'linkit' => array(
          'button_text' => 'Search',
          'enable' => 0,
          'profile' => '',
        ),
        'text_processing' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 1,
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Color');
  t('Product Reviews');
  t('Review Vote');
  t('Text');
  t('Title');

  return $fields;
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function basic_shop_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_reply__product_reviews';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'redirect' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_reply__product_reviews'] = $strongarm;

  return $export;
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function basic_shop_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'delete product_reviews reply'.
  $permissions['delete product_reviews reply'] = array(
    'name' => 'delete product_reviews reply',
    'roles' => array(),
    'module' => 'reply',
  );

  // Exported permission: 'edit product_reviews reply'.
  $permissions['edit product_reviews reply'] = array(
    'name' => 'edit product_reviews reply',
    'roles' => array(),
    'module' => 'reply',
  );

  return $permissions;
}
