<?php
/**
 * @file
 * mini_panel_tabs.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function mini_panel_tabs_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'tab_frontpage_1';
  $mini->category = '';
  $mini->admin_title = 'Udvalgte turneringer';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7e61f988-0c78-40d4-9908-7375b96ca8ca';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e1b41e52-15f1-4295-b337-afb07fdd63cd';
    $pane->panel = 'center';
    $pane->type = 'ctools_api';
    $pane->subtype = 'ContentTypes\\LinkList';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'theme' => 'default',
      'reference' => array(
        'entity_id' => '85',
        'entity_label' => 'Diam Feugiat Occuro Os',
        'entity_type' => 'node',
        'entity_bundle' => 'link',
        'entity_uuid' => '6b5bfe6d-6d1b-4345-9cc4-b4ce0bbdd7cd',
      ),
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
    $pane->uuid = 'e1b41e52-15f1-4295-b337-afb07fdd63cd';
    $display->content['new-e1b41e52-15f1-4295-b337-afb07fdd63cd'] = $pane;
    $display->panels['center'][0] = 'new-e1b41e52-15f1-4295-b337-afb07fdd63cd';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['tab_frontpage_1'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'tab_frontpage_2';
  $mini->category = '';
  $mini->admin_title = 'Ranglister';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ca928b1a-9cfa-45e3-a369-f271e43f1fc3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d33875f5-83ee-438e-b4e0-4ceb2873c8ab';
    $pane->panel = 'center';
    $pane->type = 'ctools_api';
    $pane->subtype = 'ContentTypes\\LinkList';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'theme' => 'simple',
      'reference' => array(
        'entity_id' => '85',
        'entity_label' => 'Diam Feugiat Occuro Os',
        'entity_type' => 'node',
        'entity_bundle' => 'link',
        'entity_uuid' => '6b5bfe6d-6d1b-4345-9cc4-b4ce0bbdd7cd',
      ),
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
    $pane->uuid = 'd33875f5-83ee-438e-b4e0-4ceb2873c8ab';
    $display->content['new-d33875f5-83ee-438e-b4e0-4ceb2873c8ab'] = $pane;
    $display->panels['center'][0] = 'new-d33875f5-83ee-438e-b4e0-4ceb2873c8ab';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['tab_frontpage_2'] = $mini;

  return $export;
}
