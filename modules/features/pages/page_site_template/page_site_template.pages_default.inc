<?php
/**
 * @file
 * page_site_template.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function page_site_template_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__front-page-site-template';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Front page site template',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'front-page-site-template',
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
  );
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
          0 => 4,
          1 => 3,
          2 => 1,
          3 => 'main-row',
          4 => 2,
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
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'header',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'footer',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'header' => array(
        'type' => 'region',
        'title' => 'Header',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'footer' => array(
        'type' => 'region',
        'title' => 'Footer',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'benners',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'benners' => array(
        'type' => 'region',
        'title' => 'Banner section',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'skyscraber_banners_section',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 1,
      ),
      'skyscraber_banners_section' => array(
        'type' => 'region',
        'title' => 'Skyscraber banners section',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 1,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(
        'theme' => 'default',
        'tag' => 'section',
        'attributes' => array(
          0 => array(
            'attribute' => 'role',
            'value' => 'region',
          ),
        ),
      ),
      'center' => array(
        'theme' => 'default',
        'tag' => 'main',
        'attributes' => array(
          0 => array(
            'attribute' => 'role',
            'value' => 'main',
          ),
          1 => array(
            'attribute' => 'class',
            'value' => 'layout--home',
          ),
        ),
      ),
      'header' => array(
        'theme' => 'default',
        'tag' => 'header',
        'attributes' => array(
          0 => array(
            'attribute' => 'class',
            'value' => 'block--nav',
          ),
          1 => array(
            'attribute' => 'id',
            'value' => 'header',
          ),
        ),
      ),
      'main' => NULL,
      'footer' => array(
        'theme' => 'default',
        'tag' => 'footer',
        'attributes' => array(
          0 => array(
            'attribute' => 'role',
            'value' => 'contentinfo',
          ),
          1 => array(
            'attribute' => 'class',
            'value' => 'module--footer',
          ),
        ),
      ),
      1 => NULL,
      2 => NULL,
      3 => array(
        'theme' => 'default',
        'tag' => 'section',
        'attributes' => array(
          0 => array(
            'attribute' => 'role',
            'value' => 'region',
          ),
        ),
      ),
      'benners' => array(
        'theme' => 'default',
        'tag' => 'section',
        'attributes' => array(
          0 => array(
            'attribute' => 'class',
            'value' => 'block--topbanner header',
          ),
          1 => array(
            'attribute' => 'id',
            'value' => 'topbanner',
          ),
        ),
      ),
      4 => array(
        'theme' => 'default',
        'tag' => 'section',
        'attributes' => array(
          0 => array(
            'attribute' => 'role',
            'value' => 'region',
          ),
        ),
      ),
      'skyscraber_banners_section' => array(
        'theme' => 'default',
        'tag' => 'section',
        'attributes' => array(
          0 => array(
            'attribute' => 'class',
            'value' => 'block--skyscraber',
          ),
        ),
      ),
    ),
    'center' => array(
      'style' => 'ctools_api:CTools\\Plugins\\Styles\\CustomizableRegion',
    ),
    1 => array(
      'style' => NULL,
    ),
    2 => array(
      'style' => NULL,
    ),
    'header' => array(
      'style' => 'ctools_api:CTools\\Plugins\\Styles\\CustomizableRegion',
    ),
    'footer' => array(
      'style' => 'ctools_api:CTools\\Plugins\\Styles\\CustomizableRegion',
    ),
    'style' => 'ctools_api:CTools\\Plugins\\Styles\\CustomizableRegion',
    3 => array(
      'style' => 'ctools_api:CTools\\Plugins\\Styles\\CustomizableRegion',
    ),
    'benners' => array(
      'style' => 'ctools_api:CTools\\Plugins\\Styles\\CustomizableRegion',
    ),
    4 => array(
      'style' => 'ctools_api:CTools\\Plugins\\Styles\\CustomizableRegion',
    ),
    'skyscraber_banners_section' => array(
      'style' => 'ctools_api:CTools\\Plugins\\Styles\\CustomizableRegion',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4b1b3640-190c-4731-8dfb-d1af9eb4119e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d345aeaf-7132-4e10-ba36-614c7f205e47';
    $pane->panel = 'center';
    $pane->type = 'page_messages';
    $pane->subtype = 'page_messages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'theme' => 'default',
        'info' => array(
          'wrapper' => array(
            'tag' => '',
            'attributes' => array(
              0 => array(
                'attribute' => '',
                'value' => '',
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
    $pane->uuid = 'd345aeaf-7132-4e10-ba36-614c7f205e47';
    $display->content['new-d345aeaf-7132-4e10-ba36-614c7f205e47'] = $pane;
    $display->panels['center'][0] = 'new-d345aeaf-7132-4e10-ba36-614c7f205e47';
    $pane = new stdClass();
    $pane->pid = 'new-2ccb19f7-7f49-4394-be16-49e472b78157';
    $pane->panel = 'center';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '0',
            'paths' => 'user',
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'type' => 'both',
      'id' => 'tabs',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'theme' => 'default',
        'info' => array(
          'wrapper' => array(
            'tag' => 'section',
            'attributes' => array(
              0 => array(
                'attribute' => 'role',
                'value' => 'region',
              ),
              1 => array(
                'attribute' => 'class',
                'value' => 'clearfix',
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2ccb19f7-7f49-4394-be16-49e472b78157';
    $display->content['new-2ccb19f7-7f49-4394-be16-49e472b78157'] = $pane;
    $display->panels['center'][1] = 'new-2ccb19f7-7f49-4394-be16-49e472b78157';
    $pane = new stdClass();
    $pane->pid = 'new-b77c5586-fb5a-461c-8e29-b33ed890159d';
    $pane->panel = 'center';
    $pane->type = 'page_content';
    $pane->subtype = 'page_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_page_content_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'ctools_api:CTools\\Plugins\\Styles\\CustomizablePane',
      'settings' => array(
        'theme' => 'default',
        'info' => array(
          'wrapper' => array(
            'tag' => '',
            'attributes' => array(
              0 => array(
                'attribute' => '',
                'value' => '',
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
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'b77c5586-fb5a-461c-8e29-b33ed890159d';
    $display->content['new-b77c5586-fb5a-461c-8e29-b33ed890159d'] = $pane;
    $display->panels['center'][2] = 'new-b77c5586-fb5a-461c-8e29-b33ed890159d';
    $pane = new stdClass();
    $pane->pid = 'new-f3fb0566-242e-4045-a26a-a2f4dd1418a4';
    $pane->panel = 'footer';
    $pane->type = 'panels_mini';
    $pane->subtype = 'footer';
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
                'value' => 'grid',
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
    $pane->uuid = 'f3fb0566-242e-4045-a26a-a2f4dd1418a4';
    $display->content['new-f3fb0566-242e-4045-a26a-a2f4dd1418a4'] = $pane;
    $display->panels['footer'][0] = 'new-f3fb0566-242e-4045-a26a-a2f4dd1418a4';
    $pane = new stdClass();
    $pane->pid = 'new-640388ff-1c07-4fc1-b160-c7901d7f25a9';
    $pane->panel = 'header';
    $pane->type = 'panels_mini';
    $pane->subtype = 'header';
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
            'tag' => '',
            'attributes' => array(
              0 => array(
                'attribute' => '',
                'value' => '',
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
    $pane->uuid = '640388ff-1c07-4fc1-b160-c7901d7f25a9';
    $display->content['new-640388ff-1c07-4fc1-b160-c7901d7f25a9'] = $pane;
    $display->panels['header'][0] = 'new-640388ff-1c07-4fc1-b160-c7901d7f25a9';
    $pane = new stdClass();
    $pane->pid = 'new-7e7ebee7-1de4-49c0-b4aa-83ebda239d64';
    $pane->panel = 'skyscraber_banners_section';
    $pane->type = 'panels_mini';
    $pane->subtype = 'mini_panel_skyscraber_banners';
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
    $pane->uuid = '7e7ebee7-1de4-49c0-b4aa-83ebda239d64';
    $display->content['new-7e7ebee7-1de4-49c0-b4aa-83ebda239d64'] = $pane;
    $display->panels['skyscraber_banners_section'][0] = 'new-7e7ebee7-1de4-49c0-b4aa-83ebda239d64';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['site_template__front-page-site-template'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__panel_context_aad6a33b-68da-460f-adaa-a0eb394fdda2';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Default page site template',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'front',
          'settings' => NULL,
          'not' => TRUE,
        ),
      ),
      'logic' => 'and',
    ),
  );
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
          0 => 3,
          1 => 1,
          2 => 'main-row',
          3 => 2,
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
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'header',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'footer',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'header' => array(
        'type' => 'region',
        'title' => 'Header',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'footer' => array(
        'type' => 'region',
        'title' => 'Footer',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'banner_section',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'banner_section' => array(
        'type' => 'region',
        'title' => 'Banner section',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(
        'theme' => 'default',
        'tag' => 'section',
        'attributes' => array(
          0 => array(
            'attribute' => 'role',
            'value' => 'region',
          ),
        ),
      ),
      'center' => array(
        'theme' => 'default',
        'tag' => 'div',
        'attributes' => array(
          0 => array(
            'attribute' => 'class',
            'value' => 'layout--column',
          ),
        ),
      ),
      'header' => array(
        'theme' => 'default',
        'tag' => 'header',
        'attributes' => array(
          0 => array(
            'attribute' => 'class',
            'value' => 'block--nav',
          ),
          1 => array(
            'attribute' => 'id',
            'value' => 'header',
          ),
        ),
      ),
      'main' => NULL,
      1 => NULL,
      2 => NULL,
      3 => array(
        'theme' => 'default',
        'tag' => 'section',
        'attributes' => array(
          0 => array(
            'attribute' => 'role',
            'value' => 'region',
          ),
        ),
      ),
      'banner_section' => array(
        'theme' => 'default',
        'tag' => 'div',
        'attributes' => array(
          0 => array(
            'attribute' => 'class',
            'value' => 'block--topbanner header',
          ),
          1 => array(
            'attribute' => 'id',
            'value' => 'topbanner',
          ),
        ),
      ),
      'footer' => NULL,
    ),
    'center' => array(
      'style' => 'ctools_api:CTools\\Plugins\\Styles\\CustomizableRegion',
    ),
    1 => array(
      'style' => NULL,
    ),
    2 => array(
      'style' => NULL,
    ),
    'header' => array(
      'style' => 'ctools_api:CTools\\Plugins\\Styles\\CustomizableRegion',
    ),
    'footer' => array(
      'style' => 'default',
    ),
    'style' => 'ctools_api:CTools\\Plugins\\Styles\\CustomizableRegion',
    3 => array(
      'style' => 'ctools_api:CTools\\Plugins\\Styles\\CustomizableRegion',
    ),
    'banner_section' => array(
      'style' => 'ctools_api:CTools\\Plugins\\Styles\\CustomizableRegion',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4b1b3640-190c-4731-8dfb-d1af9eb4119e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d345aeaf-7132-4e10-ba36-614c7f205e47';
    $pane->panel = 'center';
    $pane->type = 'page_messages';
    $pane->subtype = 'page_messages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'theme' => 'default',
        'info' => array(
          'wrapper' => array(
            'tag' => '',
            'attributes' => array(
              0 => array(
                'attribute' => '',
                'value' => '',
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
    $pane->uuid = 'd345aeaf-7132-4e10-ba36-614c7f205e47';
    $display->content['new-d345aeaf-7132-4e10-ba36-614c7f205e47'] = $pane;
    $display->panels['center'][0] = 'new-d345aeaf-7132-4e10-ba36-614c7f205e47';
    $pane = new stdClass();
    $pane->pid = 'new-2ccb19f7-7f49-4394-be16-49e472b78157';
    $pane->panel = 'center';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '0',
            'paths' => 'user',
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'type' => 'both',
      'id' => 'tabs',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'theme' => 'default',
        'info' => array(
          'wrapper' => array(
            'tag' => 'section',
            'attributes' => array(
              0 => array(
                'attribute' => 'role',
                'value' => 'region',
              ),
              1 => array(
                'attribute' => 'class',
                'value' => 'clearfix',
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2ccb19f7-7f49-4394-be16-49e472b78157';
    $display->content['new-2ccb19f7-7f49-4394-be16-49e472b78157'] = $pane;
    $display->panels['center'][1] = 'new-2ccb19f7-7f49-4394-be16-49e472b78157';
    $pane = new stdClass();
    $pane->pid = 'new-b77c5586-fb5a-461c-8e29-b33ed890159d';
    $pane->panel = 'center';
    $pane->type = 'page_content';
    $pane->subtype = 'page_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_page_content_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'ctools_api:CTools\\Plugins\\Styles\\CustomizablePane',
      'settings' => array(
        'theme' => 'default',
        'info' => array(
          'wrapper' => array(
            'tag' => '',
            'attributes' => array(
              0 => array(
                'attribute' => '',
                'value' => '',
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
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'b77c5586-fb5a-461c-8e29-b33ed890159d';
    $display->content['new-b77c5586-fb5a-461c-8e29-b33ed890159d'] = $pane;
    $display->panels['center'][2] = 'new-b77c5586-fb5a-461c-8e29-b33ed890159d';
    $pane = new stdClass();
    $pane->pid = 'new-f3fb0566-242e-4045-a26a-a2f4dd1418a4';
    $pane->panel = 'footer';
    $pane->type = 'panels_mini';
    $pane->subtype = 'footer';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f3fb0566-242e-4045-a26a-a2f4dd1418a4';
    $display->content['new-f3fb0566-242e-4045-a26a-a2f4dd1418a4'] = $pane;
    $display->panels['footer'][0] = 'new-f3fb0566-242e-4045-a26a-a2f4dd1418a4';
    $pane = new stdClass();
    $pane->pid = 'new-640388ff-1c07-4fc1-b160-c7901d7f25a9';
    $pane->panel = 'header';
    $pane->type = 'panels_mini';
    $pane->subtype = 'header';
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
            'tag' => '',
            'attributes' => array(
              0 => array(
                'attribute' => '',
                'value' => '',
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
    $pane->uuid = '640388ff-1c07-4fc1-b160-c7901d7f25a9';
    $display->content['new-640388ff-1c07-4fc1-b160-c7901d7f25a9'] = $pane;
    $display->panels['header'][0] = 'new-640388ff-1c07-4fc1-b160-c7901d7f25a9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['site_template__panel_context_aad6a33b-68da-460f-adaa-a0eb394fdda2'] = $handler;

  return $export;
}
