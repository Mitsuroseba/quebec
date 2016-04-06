<?php
/**
 * @file
 * page_faq.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function page_faq_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'faq';
  $page->task = 'page';
  $page->admin_title = 'FAQ';
  $page->admin_description = '';
  $page->path = 'faq';
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
  $handler->name = 'page_faq__panel';
  $handler->task = 'page';
  $handler->subtask = 'faq';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
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
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Content',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => array(
        'theme' => 'node-default',
      ),
      'breadcrumbs' => NULL,
      'column_left' => array(
        'theme' => 'default',
        'tag' => 'div',
        'attributes' => array(
          0 => array(
            'attribute' => 'class',
            'value' => 'section--column__left',
          ),
        ),
      ),
      'column_right' => array(
        'theme' => 'default',
        'tag' => 'div',
        'attributes' => array(
          0 => array(
            'attribute' => 'class',
            'value' => 'section--column__right sidebar',
          ),
        ),
      ),
      'region-top' => NULL,
      'region-content' => NULL,
      'region-sidebar' => NULL,
      'region-related' => NULL,
    ),
    'center' => array(
      'style' => 'ctools_api:Styles\\TemplatableRegion',
    ),
    'column_left' => array(
      'style' => 'ctools_api:CTools\\Plugins\\Styles\\CustomizableRegion',
    ),
    'column_right' => array(
      'style' => 'ctools_api:CTools\\Plugins\\Styles\\CustomizableRegion',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f406c206-3a5c-4a34-827d-7ee9ea88ca88';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-46bd4446-48cb-4b57-9942-446290f48ea2';
    $pane->panel = 'region-content';
    $pane->type = 'views';
    $pane->subtype = 'view_questions_and_answers';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => 'faq',
      'display' => 'default',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '46bd4446-48cb-4b57-9942-446290f48ea2';
    $display->content['new-46bd4446-48cb-4b57-9942-446290f48ea2'] = $pane;
    $display->panels['region-content'][0] = 'new-46bd4446-48cb-4b57-9942-446290f48ea2';
    $pane = new stdClass();
    $pane->pid = 'new-8751baeb-1876-4f51-b31b-d42bf2df6b05';
    $pane->panel = 'region-top';
    $pane->type = 'ctools_api';
    $pane->subtype = 'ContentTypes\\Teasers';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'theme' => 'hero-spot',
      'reference' => array(
        'entity_id' => '56',
        'entity_label' => 'Hero spot title',
        'entity_type' => 'node',
        'entity_bundle' => 'hero_spot',
        'entity_uuid' => '78fa5b20-c413-41cd-8f0c-d402eb4d4e48',
      ),
      'category' => 0,
      'link' => 1,
      'override_title' => TRUE,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8751baeb-1876-4f51-b31b-d42bf2df6b05';
    $display->content['new-8751baeb-1876-4f51-b31b-d42bf2df6b05'] = $pane;
    $display->panels['region-top'][0] = 'new-8751baeb-1876-4f51-b31b-d42bf2df6b05';
    $pane = new stdClass();
    $pane->pid = 'new-681266c7-40d6-4263-8f70-3b1dc75bc162';
    $pane->panel = 'region-top';
    $pane->type = 'ctools_api';
    $pane->subtype = 'ContentTypes\\Breadcrumb';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'theme' => 'default',
      'override_title' => TRUE,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '681266c7-40d6-4263-8f70-3b1dc75bc162';
    $display->content['new-681266c7-40d6-4263-8f70-3b1dc75bc162'] = $pane;
    $display->panels['region-top'][1] = 'new-681266c7-40d6-4263-8f70-3b1dc75bc162';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['faq'] = $page;

  return $pages;

}
