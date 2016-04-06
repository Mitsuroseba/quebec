<?php
/**
 * @file
 * mini_panel_footer.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function mini_panel_footer_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'footer';
  $mini->category = 'Page elements';
  $mini->admin_title = 'Footer';
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
          0 => 'main-row',
          1 => 1,
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
        'children' => array(),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(),
      'center' => array(
        'theme' => 'footer-content',
      ),
      1 => NULL,
      'brands' => array(
        'theme' => 'footer-content',
      ),
    ),
    'style' => 'ctools_api:Styles\\TemplatableRegion',
    'center' => array(
      'style' => 'ctools_api:Styles\\TemplatableRegion',
    ),
    1 => array(
      'style' => 'default',
    ),
    'brands' => array(
      'style' => 'ctools_api:Styles\\TemplatableRegion',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'be523932-e190-4145-b7ab-6c94f25b8f5e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5c4976bd-2ea5-43b5-8c9a-14ec206ff8dd';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Footer text',
      'title' => '',
      'body' => '<p>Golf.dk - En del af Dansk Golf Union</p>
',
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
    $pane->uuid = '5c4976bd-2ea5-43b5-8c9a-14ec206ff8dd';
    $display->content['new-5c4976bd-2ea5-43b5-8c9a-14ec206ff8dd'] = $pane;
    $display->panels['center'][0] = 'new-5c4976bd-2ea5-43b5-8c9a-14ec206ff8dd';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['footer'] = $mini;

  return $export;
}
