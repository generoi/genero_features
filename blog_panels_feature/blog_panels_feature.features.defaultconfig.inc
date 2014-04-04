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
      'default_page_manager_pages' => 'default_page_manager_pages',
    ),
  );
}

/**
 * Implements hook_defaultconfig_default_page_manager_pages().
 */
function blog_panels_feature_defaultconfig_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'front_page';
  $page->task = 'page';
  $page->admin_title = 'Front Page';
  $page->admin_description = 'The front page';
  $page->path = 'front';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Home',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_front_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'front_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'threecol_25_50_25_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '298c0547-0599-42cd-afdb-c1e974b843e8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-45d16841-337e-477c-a46f-e888c175a99a';
    $pane->panel = 'left';
    $pane->type = 'menu_tree';
    $pane->subtype = 'main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'main-menu',
      'parent_mlid' => 0,
      'parent' => 'main-menu:0',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '1',
      'follow' => 0,
      'depth' => 0,
      'expanded' => 0,
      'sort' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '45d16841-337e-477c-a46f-e888c175a99a';
    $display->content['new-45d16841-337e-477c-a46f-e888c175a99a'] = $pane;
    $display->panels['left'][0] = 'new-45d16841-337e-477c-a46f-e888c175a99a';
    $pane = new stdClass();
    $pane->pid = 'new-49c2cb5e-edfa-4ef4-8d72-9cd3b211aa2b';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'panopoly_widgets_general_content-list_of_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '5',
      'fields_override' => array(
        'field_featured_image' => 1,
        'title' => 1,
        'created' => 1,
        'name' => 1,
      ),
      'exposed' => array(
        'type' => 'blog',
        'sort_order' => 'DESC',
        'sort_by' => 'created',
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_settings' => 'nodes',
      'header_type' => 'none',
      'view_mode' => 'teaser',
      'widget_title' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '49c2cb5e-edfa-4ef4-8d72-9cd3b211aa2b';
    $display->content['new-49c2cb5e-edfa-4ef4-8d72-9cd3b211aa2b'] = $pane;
    $display->panels['middle'][0] = 'new-49c2cb5e-edfa-4ef4-8d72-9cd3b211aa2b';
    $pane = new stdClass();
    $pane->pid = 'new-c60515f8-d68a-4b1c-98b7-c5645a64ad59';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'comment-recent';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c60515f8-d68a-4b1c-98b7-c5645a64ad59';
    $display->content['new-c60515f8-d68a-4b1c-98b7-c5645a64ad59'] = $pane;
    $display->panels['right'][0] = 'new-c60515f8-d68a-4b1c-98b7-c5645a64ad59';
    $pane = new stdClass();
    $pane->pid = 'new-cc4ba1f1-61b1-4161-8cb5-1cdafd05f2e1';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'user-online';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'cc4ba1f1-61b1-4161-8cb5-1cdafd05f2e1';
    $display->content['new-cc4ba1f1-61b1-4161-8cb5-1cdafd05f2e1'] = $pane;
    $display->panels['right'][1] = 'new-cc4ba1f1-61b1-4161-8cb5-1cdafd05f2e1';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['front_page'] = $page;

  return $pages;

}
