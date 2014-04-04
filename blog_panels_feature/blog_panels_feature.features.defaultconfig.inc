<?php
/**
 * @file
 * blog_panels_feature.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function blog_panels_feature_defaultconfig_features() {
  return array(
    'blog_panels_feature' => array(
      'default_page_manager_handlers' => 'default_page_manager_handlers',
    ),
  );
}

/**
 * Implements hook_defaultconfig_default_page_manager_handlers().
 */
function blog_panels_feature_defaultconfig_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -99;
  $handler->conf = array(
    'title' => 'Blog entries',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_bundle:node',
          'settings' => array(
            'type' => array(
              'blog' => 'blog',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'foundation_3col_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '33ef2b98-af9f-4110-bcd8-58ba0d9bb2e9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9356fa83-fde7-42f0-955e-858570f91762';
    $pane->panel = 'middle';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 1,
      'no_extras' => 1,
      'override_title' => 1,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 1,
      'build_mode' => 'full',
      'context' => array(),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9356fa83-fde7-42f0-955e-858570f91762';
    $display->content['new-9356fa83-fde7-42f0-955e-858570f91762'] = $pane;
    $display->panels['middle'][0] = 'new-9356fa83-fde7-42f0-955e-858570f91762';
    $pane = new stdClass();
    $pane->pid = 'new-ba68082d-ea9b-45ab-bdf9-d882bf7022f1';
    $pane->panel = 'middle';
    $pane->type = 'node_terms';
    $pane->subtype = 'node_terms';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'vid' => '0',
      'term_format' => 'term-links',
      'link' => 1,
      'term_delimiter' => ', ',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Categories',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ba68082d-ea9b-45ab-bdf9-d882bf7022f1';
    $display->content['new-ba68082d-ea9b-45ab-bdf9-d882bf7022f1'] = $pane;
    $display->panels['middle'][1] = 'new-ba68082d-ea9b-45ab-bdf9-d882bf7022f1';
    $pane = new stdClass();
    $pane->pid = 'new-f069c857-fa13-4fae-9287-dcce3ad03231';
    $pane->panel = 'middle';
    $pane->type = 'node_comment_form';
    $pane->subtype = 'node_comment_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'anon_links' => 0,
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'f069c857-fa13-4fae-9287-dcce3ad03231';
    $display->content['new-f069c857-fa13-4fae-9287-dcce3ad03231'] = $pane;
    $display->panels['middle'][2] = 'new-f069c857-fa13-4fae-9287-dcce3ad03231';
    $pane = new stdClass();
    $pane->pid = 'new-a02ecfbc-c885-4d38-af26-aad6e70cef7c';
    $pane->panel = 'middle';
    $pane->type = 'node_comments';
    $pane->subtype = 'node_comments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '1',
      'comments_per_page' => '50',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'a02ecfbc-c885-4d38-af26-aad6e70cef7c';
    $display->content['new-a02ecfbc-c885-4d38-af26-aad6e70cef7c'] = $pane;
    $display->panels['middle'][3] = 'new-a02ecfbc-c885-4d38-af26-aad6e70cef7c';
    $pane = new stdClass();
    $pane->pid = 'new-3fef727e-5d71-4f8a-9f4d-951644bc6ac9';
    $pane->panel = 'top';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'markup' => 'h1',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3fef727e-5d71-4f8a-9f4d-951644bc6ac9';
    $display->content['new-3fef727e-5d71-4f8a-9f4d-951644bc6ac9'] = $pane;
    $display->panels['top'][0] = 'new-3fef727e-5d71-4f8a-9f4d-951644bc6ac9';
    $pane = new stdClass();
    $pane->pid = 'new-14d88fab-48fd-4567-9f5f-da75c3c0a21c';
    $pane->panel = 'top';
    $pane->type = 'node_author';
    $pane->subtype = 'node_author';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '14d88fab-48fd-4567-9f5f-da75c3c0a21c';
    $display->content['new-14d88fab-48fd-4567-9f5f-da75c3c0a21c'] = $pane;
    $display->panels['top'][1] = 'new-14d88fab-48fd-4567-9f5f-da75c3c0a21c';
    $pane = new stdClass();
    $pane->pid = 'new-e42476f9-5910-47ca-b844-398f371d1ead';
    $pane->panel = 'top';
    $pane->type = 'node_created';
    $pane->subtype = 'node_created';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'long',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'e42476f9-5910-47ca-b844-398f371d1ead';
    $display->content['new-e42476f9-5910-47ca-b844-398f371d1ead'] = $pane;
    $display->panels['top'][2] = 'new-e42476f9-5910-47ca-b844-398f371d1ead';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panelizer';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panelizer_node';
  $handler->weight = -100;
  $handler->conf = array(
    'title' => 'Node panelizer',
    'context' => 'argument_entity_id:node_1',
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
  );
  $export['node_view_panelizer'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Category Page',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'foundation_1col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%term:name';
  $display->uuid = '9be66810-cdb2-4e96-ac9c-17cfe4c2e875';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2b8af0ec-6804-4cb2-b895-b5ddd98ebe43';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'taxonomy_terms-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
      'view_settings' => 'nodes',
      'header_type' => 'none',
      'view_mode' => 'teaser',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2b8af0ec-6804-4cb2-b895-b5ddd98ebe43';
    $display->content['new-2b8af0ec-6804-4cb2-b895-b5ddd98ebe43'] = $pane;
    $display->panels['middle'][0] = 'new-2b8af0ec-6804-4cb2-b895-b5ddd98ebe43';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context'] = $handler;

  return $export;
}
