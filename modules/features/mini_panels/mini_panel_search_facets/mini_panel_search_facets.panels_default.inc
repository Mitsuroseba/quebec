<?php
/**
 * @file
 * mini_panel_search_facets.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function mini_panel_search_facets_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'search_facets';
  $mini->category = 'Page elements';
  $mini->admin_title = 'Search facets';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'flexible';
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
          0 => 1,
          1 => 'main-row',
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
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'top',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'top' => array(
        'type' => 'region',
        'title' => 'Top',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(),
      'center' => array(
        'theme' => 'default',
        'tag' => 'div',
        'attributes' => array(
          0 => array(
            'attribute' => 'class',
            'value' => 'wrapper',
          ),
        ),
      ),
      1 => array(),
      'top' => array(
        'theme' => 'default',
        'tag' => 'header',
        'attributes' => array(
          0 => array(
            'attribute' => '',
            'value' => '',
          ),
        ),
      ),
    ),
    1 => array(
      'style' => 'ctools_api:CTools\\Plugins\\Styles\\CustomizableRegion',
    ),
    'top' => array(
      'style' => 'ctools_api:CTools\\Plugins\\Styles\\CustomizableRegion',
    ),
    'style' => 'ctools_api:CTools\\Plugins\\Styles\\CustomizableRegion',
    'center' => array(
      'style' => 'ctools_api:CTools\\Plugins\\Styles\\CustomizableRegion',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3584f681-a53a-4678-b7d0-290cc9f19dfc';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0e838bb2-10ff-4293-b800-12127b8e5cea';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-zIH8EsYFkvWKeMtTZTGLEm1GrYlAarmk';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '0e838bb2-10ff-4293-b800-12127b8e5cea';
    $display->content['new-0e838bb2-10ff-4293-b800-12127b8e5cea'] = $pane;
    $display->panels['center'][0] = 'new-0e838bb2-10ff-4293-b800-12127b8e5cea';
    $pane = new stdClass();
    $pane->pid = 'new-7610188b-5542-4dad-b341-8f4e0ef8bf67';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<a href="" class="toggle-expand"><h3>Vis filtrering</h3></a>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7610188b-5542-4dad-b341-8f4e0ef8bf67';
    $display->content['new-7610188b-5542-4dad-b341-8f4e0ef8bf67'] = $pane;
    $display->panels['top'][0] = 'new-7610188b-5542-4dad-b341-8f4e0ef8bf67';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['search_facets'] = $mini;

  return $export;
}
