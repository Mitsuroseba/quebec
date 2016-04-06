<?php
/**
 * @file
 * mini_panel_header.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function mini_panel_header_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'header';
  $mini->category = 'Page elements';
  $mini->admin_title = 'Header';
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
        'children' => array(),
        'parent' => 'main',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'font_zoom',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'font_zoom' => array(
        'type' => 'region',
        'title' => 'Font zoom',
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
      'default' => array(
        'test' => 1,
      ),
      'center' => array(
        'theme' => 'default',
        'tag' => 'section',
        'attributes' => array(
          0 => array(
            'attribute' => 'role',
            'value' => 'region',
          ),
        ),
      ),
      1 => array(),
      'font_zoom' => array(
        'theme' => 'default',
        'tag' => '',
        'attributes' => array(
          0 => array(
            'attribute' => 'hgj',
            'value' => 'ghj',
          ),
        ),
      ),
    ),
    'style' => 'ctools_api:CTools\\Plugins\\Styles\\CustomizableRegion',
    'center' => array(
      'style' => 'ctools_api:CTools\\Plugins\\Styles\\CustomizableRegion',
    ),
    1 => array(
      'style' => 'ctools_api:CTools\\Plugins\\Styles\\CustomizableRegion',
    ),
    'font_zoom' => array(
      'style' => 'ctools_api:CTools\\Plugins\\Styles\\CustomizableRegion',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e3ce3e86-51a4-437f-a362-a03ae5a2f7ca';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-71398507-4788-4670-8a35-26aa357f522c';
    $pane->panel = 'font_zoom';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '	<div class="menu-btn" id="menu-btn">
		<div>
			<span></span>
			<span></span>
			<span></span>
		</div>
	</div>
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
    $pane->uuid = '71398507-4788-4670-8a35-26aa357f522c';
    $display->content['new-71398507-4788-4670-8a35-26aa357f522c'] = $pane;
    $display->panels['font_zoom'][0] = 'new-71398507-4788-4670-8a35-26aa357f522c';
    $pane = new stdClass();
    $pane->pid = 'new-f1583a0d-d710-485d-a2bd-606c388de5e3';
    $pane->panel = 'font_zoom';
    $pane->type = 'ctools_api';
    $pane->subtype = 'ContentTypes\\Preview';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'theme' => 'logo',
      'info' => array(
        'images' => array(
          'images' => array(
            0 => array(
              'title' => '',
              'image' => array(
                'fid' => 'c60898f51d9c2fb5a12bb67cf729fd83',
                'style' => '',
              ),
              'background' => '',
            ),
          ),
        ),
        'entity' => array(
          'node_type' => '',
          'node_type_field' => '',
          'background' => '',
        ),
        'message' => array(
          'message' => array(
            'value' => '',
            'format' => 'full_html',
          ),
        ),
      ),
      'context' => 'empty',
      'override_title' => TRUE,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
      'image' => array(
        'fid' => 'c60898f51d9c2fb5a12bb67cf729fd83',
        'style' => '',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f1583a0d-d710-485d-a2bd-606c388de5e3';
    $display->content['new-f1583a0d-d710-485d-a2bd-606c388de5e3'] = $pane;
    $display->panels['font_zoom'][1] = 'new-f1583a0d-d710-485d-a2bd-606c388de5e3';
    $pane = new stdClass();
    $pane->pid = 'new-82ed75eb-583e-40d0-a491-d3d3f987fa80';
    $pane->panel = 'font_zoom';
    $pane->type = 'ctools_api';
    $pane->subtype = 'ContentTypes\\MainMenu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'theme' => 'default',
      'menu_name' => 'main-menu',
      'nesting_level' => '2',
      'image_style' => '',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '82ed75eb-583e-40d0-a491-d3d3f987fa80';
    $display->content['new-82ed75eb-583e-40d0-a491-d3d3f987fa80'] = $pane;
    $display->panels['font_zoom'][2] = 'new-82ed75eb-583e-40d0-a491-d3d3f987fa80';
    $pane = new stdClass();
    $pane->pid = 'new-e743721b-a678-4ae6-b2a3-00d2672d8ec0';
    $pane->panel = 'font_zoom';
    $pane->type = 'ctools_api';
    $pane->subtype = 'ContentTypes\\Social\\Social';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'theme' => 'default',
      'social' => array(
        'facebook' => array(
          'account' => 'Dansk-Golf-Union-154003284639415',
        ),
        'twitter' => array(
          'account' => 'golfdkdgu',
        ),
        'instagram' => array(
          'account' => 'danskgolfunion',
        ),
        'youtube' => array(
          'account' => 'UCPlkdzJCLFXERAbD1kc_WGQ',
        ),
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'e743721b-a678-4ae6-b2a3-00d2672d8ec0';
    $display->content['new-e743721b-a678-4ae6-b2a3-00d2672d8ec0'] = $pane;
    $display->panels['font_zoom'][3] = 'new-e743721b-a678-4ae6-b2a3-00d2672d8ec0';
    $pane = new stdClass();
    $pane->pid = 'new-e882c856-9e00-4660-80df-84ee6b425552';
    $pane->panel = 'font_zoom';
    $pane->type = 'block';
    $pane->subtype = 'views-a8f68d4dde938b83bf7656900d06a5bc';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'inherit_path' => 0,
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'e882c856-9e00-4660-80df-84ee6b425552';
    $display->content['new-e882c856-9e00-4660-80df-84ee6b425552'] = $pane;
    $display->panels['font_zoom'][4] = 'new-e882c856-9e00-4660-80df-84ee6b425552';
    $pane = new stdClass();
    $pane->pid = 'new-97fa442c-027a-4f59-a4bb-5748e3f0c98e';
    $pane->panel = 'font_zoom';
    $pane->type = 'ctools_api';
    $pane->subtype = 'ContentTypes\\MainMenu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'theme' => 'mobile',
      'menu_name' => 'main-menu',
      'nesting_level' => '2',
      'image_style' => '',
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '97fa442c-027a-4f59-a4bb-5748e3f0c98e';
    $display->content['new-97fa442c-027a-4f59-a4bb-5748e3f0c98e'] = $pane;
    $display->panels['font_zoom'][5] = 'new-97fa442c-027a-4f59-a4bb-5748e3f0c98e';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['header'] = $mini;

  return $export;
}
