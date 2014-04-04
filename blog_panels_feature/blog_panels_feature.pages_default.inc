<?php
/**
 * @file
 * blog_panels_feature.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function blog_panels_feature_default_page_manager_handlers() {
  $export = array();

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

/**
 * Implements hook_default_page_manager_pages().
 */
function blog_panels_feature_default_page_manager_pages() {
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
    $pane->pid = 'new-f88c946f-d6d5-482d-a4ad-b0244b785cec';
    $pane->panel = 'left';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f88c946f-d6d5-482d-a4ad-b0244b785cec';
    $display->content['new-f88c946f-d6d5-482d-a4ad-b0244b785cec'] = $pane;
    $display->panels['left'][0] = 'new-f88c946f-d6d5-482d-a4ad-b0244b785cec';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '45d16841-337e-477c-a46f-e888c175a99a';
    $display->content['new-45d16841-337e-477c-a46f-e888c175a99a'] = $pane;
    $display->panels['left'][1] = 'new-45d16841-337e-477c-a46f-e888c175a99a';
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
    $pane->pid = 'new-f42e5c72-8bc6-4605-8b7c-d09fbf6dba7f';
    $pane->panel = 'middle';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f42e5c72-8bc6-4605-8b7c-d09fbf6dba7f';
    $display->content['new-f42e5c72-8bc6-4605-8b7c-d09fbf6dba7f'] = $pane;
    $display->panels['middle'][1] = 'new-f42e5c72-8bc6-4605-8b7c-d09fbf6dba7f';
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
    $pane = new stdClass();
    $pane->pid = 'new-47f50e91-801b-403b-ac99-e398dc03d03d';
    $pane->panel = 'top';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '47f50e91-801b-403b-ac99-e398dc03d03d';
    $display->content['new-47f50e91-801b-403b-ac99-e398dc03d03d'] = $pane;
    $display->panels['top'][0] = 'new-47f50e91-801b-403b-ac99-e398dc03d03d';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['front_page'] = $page;

  return $pages;

}
