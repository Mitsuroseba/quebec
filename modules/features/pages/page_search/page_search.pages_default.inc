<?php
/**
 * @file
 * page_search.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function page_search_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'search';
  $page->task = 'page';
  $page->admin_title = 'Search';
  $page->admin_description = '';
  $page->path = 'search';
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
  $handler->name = 'page_search__panel';
  $handler->task = 'page';
  $handler->subtask = 'search';
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
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => array(
        'theme' => 'default',
      ),
      1 => NULL,
      'breadcrumbs' => NULL,
      2 => NULL,
      3 => NULL,
      4 => NULL,
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
    ),
    'center' => array(
      'style' => 'ctools_api:Styles\\TemplatableRegion',
    ),
    1 => array(
      'style' => NULL,
    ),
    'breadcrumbs' => array(
      'style' => NULL,
    ),
    2 => array(
      'style' => NULL,
    ),
    3 => array(
      'style' => NULL,
    ),
    4 => array(
      'style' => NULL,
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
  $display->uuid = 'e0e7ba8e-ed9d-49e1-aacf-715f77fcc568';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f8edabc8-3386-46e9-a2ff-a5db79713375';
    $pane->panel = 'region-content';
    $pane->type = 'views_panes';
    $pane->subtype = 'search_results-search_results_pane';
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
    $pane->uuid = 'f8edabc8-3386-46e9-a2ff-a5db79713375';
    $display->content['new-f8edabc8-3386-46e9-a2ff-a5db79713375'] = $pane;
    $display->panels['region-content'][0] = 'new-f8edabc8-3386-46e9-a2ff-a5db79713375';
    $pane = new stdClass();
    $pane->pid = 'new-b5166e57-9d32-4a2c-9f97-13f89030dd19';
    $pane->panel = 'region-sidebar';
    $pane->type = 'panels_mini';
    $pane->subtype = 'search_facets';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'theme' => 'default',
        'info' => array(
          'wrapper' => array(
            'tag' => 'div',
            'attributes' => array(
              0 => array(
                'attribute' => 'class',
                'value' => 'block--filtering',
              ),
            ),
          ),
          'title' => array(
            'tag' => '',
            'attributes' => array(
              0 => array(
                'attribute' => '',
                'value' => '',
              ),
            ),
          ),
          'content' => array(
            'tag' => '',
            'attributes' => array(
              0 => array(
                'attribute' => '',
                'value' => '',
              ),
            ),
          ),
        ),
      ),
      'style' => 'ctools_api:CTools\\Plugins\\Styles\\CustomizablePane',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b5166e57-9d32-4a2c-9f97-13f89030dd19';
    $display->content['new-b5166e57-9d32-4a2c-9f97-13f89030dd19'] = $pane;
    $display->panels['region-sidebar'][0] = 'new-b5166e57-9d32-4a2c-9f97-13f89030dd19';
    $pane = new stdClass();
    $pane->pid = 'new-51dd348b-fe3e-4090-800e-6e778ab08a75';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '51dd348b-fe3e-4090-800e-6e778ab08a75';
    $display->content['new-51dd348b-fe3e-4090-800e-6e778ab08a75'] = $pane;
    $display->panels['region-top'][0] = 'new-51dd348b-fe3e-4090-800e-6e778ab08a75';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['search'] = $page;

  return $pages;

}
