<?php
/**
 * @file
 * page_blog.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function page_blog_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'page_blog';
  $page->task = 'page';
  $page->admin_title = 'Blog';
  $page->admin_description = '';
  $page->path = 'blog';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_page_blog__panel';
  $handler->task = 'page';
  $handler->subtask = 'page_blog';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => FALSE,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'one-column-with-sidebar';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'region-top' => NULL,
      'region-content' => NULL,
      'region-sidebar' => NULL,
      'region-related' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a9402b0c-061d-499c-aaf8-a0c047e5576f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c45eb24f-5b65-47b0-978b-c7bef3dd1869';
    $pane->panel = 'region-content';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog-blog_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c45eb24f-5b65-47b0-978b-c7bef3dd1869';
    $display->content['new-c45eb24f-5b65-47b0-978b-c7bef3dd1869'] = $pane;
    $display->panels['region-content'][0] = 'new-c45eb24f-5b65-47b0-978b-c7bef3dd1869';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['page_blog'] = $page;

  return $pages;

}
