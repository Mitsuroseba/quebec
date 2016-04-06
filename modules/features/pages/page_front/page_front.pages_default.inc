<?php
/**
 * @file
 * page_front.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function page_front_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'front';
  $page->task = 'page';
  $page->admin_title = 'Front';
  $page->admin_description = '';
  $page->path = 'front';
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
  $handler->name = 'page_front__panel';
  $handler->task = 'page';
  $handler->subtask = 'front';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
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
          0 => 'left',
          1 => 'right',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'left' => array(
        'type' => 'region',
        'title' => 'Left',
        'width' => '56.04500604500604',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'Right',
        'width' => '43.95499395499396',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      1 => NULL,
      'main_' => array(
        'theme' => 'default',
        'tag' => 'section',
        'attributes' => array(
          0 => array(
            'attribute' => 'class',
            'value' => 'section--main',
          ),
        ),
      ),
      'right' => array(
        'theme' => 'frontpage-right',
      ),
      'center' => array(
        'theme' => 'default',
        'tag' => 'section',
        'attributes' => array(
          0 => array(
            'attribute' => 'role',
            'value' => 'region',
          ),
          1 => array(
            'attribute' => 'class',
            'value' => 'section--main',
          ),
        ),
      ),
      'left' => array(
        'theme' => 'frontpage-left',
      ),
    ),
    'center' => array(
      'style' => 'ctools_api:CTools\\Plugins\\Styles\\CustomizableRegion',
    ),
    1 => array(
      'style' => NULL,
    ),
    'main_' => array(
      'style' => 'ctools_api:CTools\\Plugins\\Styles\\CustomizableRegion',
    ),
    'right' => array(
      'style' => 'ctools_api:Styles\\TemplatableRegion',
    ),
    'left' => array(
      'style' => 'ctools_api:Styles\\TemplatableRegion',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b43e812e-6965-4db2-a091-a049de7bf15e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1a17860d-f8f7-49ca-986b-68e4d9574aa3';
    $pane->panel = 'center';
    $pane->type = 'ctools_api';
    $pane->subtype = 'ContentTypes\\NodeList';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'theme' => 'small_spot',
      'parameters' => array(
        'filter' => array(
          'content_type' => 'article',
          'term_references' => array(
            'field_category' => array(),
          ),
        ),
        'sort' => array(
          'field' => 'nid',
          'direction' => 'asc',
          'sticky_first' => 0,
        ),
        'range' => array(
          'start' => '0',
          'length' => '9',
        ),
        'read_more' => array(
          'link' => array(
            'title' => '',
            'url' => '',
          ),
        ),
        'advertisement' => array(
          'advertisement' => array(
            0 => array(
              'number' => '1',
              'text' => '<!-- Cxense content widget: Copy of Test -->
<div id="cx_1cd32770b29ec9f698db27c90771560d133c1af2" style="display:none"></div>
<script type="text/javascript">
    var cX = cX || {}; cX.callQueue = cX.callQueue || [];
    cX.callQueue.push([\'insertWidget\', {
        widgetId: \'1cd32770b29ec9f698db27c90771560d133c1af2\',
        insertBeforeElementId: \'cx_1cd32770b29ec9f698db27c90771560d133c1af2\',
        width: 323, height: 225, renderTemplateUrl: \'auto\'
    }]);

    // Async load of cx.js
    (function(d,s,e,t){e=d.createElement(s);e.type=\'text/java\'+s;e.async=\'async\';
    e.src=\'http\'+(\'https:\'===location.protocol?\'s://s\':\'://\')+\'cdn.cxense.com/cx.js\';
    t=d.getElementsByTagName(s)[0];t.parentNode.insertBefore(e,t);})(document,\'script\');
</script>
<!-- End of Cxense content widget -->
',
            ),
            1 => array(
              'number' => '2',
              'text' => '<!-- Cxense content widget: Test -->
<div id="cx_b7b187a9705ed0e3fe9139d4051408593a67d898" style="display:none"></div>
<script type="text/javascript">
    var cX = cX || {}; cX.callQueue = cX.callQueue || [];
    cX.callQueue.push([\'insertWidget\', {
        widgetId: \'b7b187a9705ed0e3fe9139d4051408593a67d898\',
        insertBeforeElementId: \'cx_b7b187a9705ed0e3fe9139d4051408593a67d898\',
        width: 323, height: 225, renderTemplateUrl: \'auto\'
    }]);

    // Async load of cx.js
    (function(d,s,e,t){e=d.createElement(s);e.type=\'text/java\'+s;e.async=\'async\';
    e.src=\'http\'+(\'https:\'===location.protocol?\'s://s\':\'://\')+\'cdn.cxense.com/cx.js\';
    t=d.getElementsByTagName(s)[0];t.parentNode.insertBefore(e,t);})(document,\'script\');
</script>
<!-- End of Cxense content widget -->
',
            ),
          ),
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1a17860d-f8f7-49ca-986b-68e4d9574aa3';
    $display->content['new-1a17860d-f8f7-49ca-986b-68e4d9574aa3'] = $pane;
    $display->panels['center'][0] = 'new-1a17860d-f8f7-49ca-986b-68e4d9574aa3';
    $pane = new stdClass();
    $pane->pid = 'new-42c87919-732b-490e-ac76-bc2892e0370b';
    $pane->panel = 'center';
    $pane->type = 'ctools_api';
    $pane->subtype = 'ContentTypes\\Teasers';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'theme' => 'hero-spot',
      'title' => '',
      'message' => '',
      'background' => '',
      'reference' => array(
        'entity_id' => '46',
        'entity_label' => 'Camur Neque Tamen',
        'entity_type' => 'node',
        'entity_bundle' => 'hero_spot',
        'entity_uuid' => '326560ae-6259-4c9e-b981-b400916b8734',
      ),
      'category' => 0,
      'link' => 1,
      'context' => 'empty',
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
    $pane->uuid = '42c87919-732b-490e-ac76-bc2892e0370b';
    $display->content['new-42c87919-732b-490e-ac76-bc2892e0370b'] = $pane;
    $display->panels['center'][1] = 'new-42c87919-732b-490e-ac76-bc2892e0370b';
    $pane = new stdClass();
    $pane->pid = 'new-8e2dac18-c2c2-4ce9-83a4-32bc13e3423d';
    $pane->panel = 'center';
    $pane->type = 'ctools_api';
    $pane->subtype = 'ContentTypes\\NodeList';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'theme' => 'spot',
      'parameters' => array(
        'filter' => array(
          'content_type' => 'article',
          'term_references' => array(
            'field_category' => array(),
          ),
        ),
        'sort' => array(
          'field' => 'nid',
          'direction' => 'asc',
        ),
        'range' => array(
          'start' => '0',
          'length' => '4',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '8e2dac18-c2c2-4ce9-83a4-32bc13e3423d';
    $display->content['new-8e2dac18-c2c2-4ce9-83a4-32bc13e3423d'] = $pane;
    $display->panels['center'][2] = 'new-8e2dac18-c2c2-4ce9-83a4-32bc13e3423d';
    $pane = new stdClass();
    $pane->pid = 'new-01f6e19f-db12-49b1-aa96-2c55fc61625e';
    $pane->panel = 'center';
    $pane->type = 'ctools_api';
    $pane->subtype = 'ContentTypes\\ApsisSubscription';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'theme' => 'default',
      'action' => '/',
      'image' => 0,
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
    $pane->uuid = '01f6e19f-db12-49b1-aa96-2c55fc61625e';
    $display->content['new-01f6e19f-db12-49b1-aa96-2c55fc61625e'] = $pane;
    $display->panels['center'][3] = 'new-01f6e19f-db12-49b1-aa96-2c55fc61625e';
    $pane = new stdClass();
    $pane->pid = 'new-61d1b89f-33e7-4d34-a2f6-221d71faf964';
    $pane->panel = 'center';
    $pane->type = 'ctools_api';
    $pane->subtype = 'ContentTypes\\Tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'theme' => 'default',
      'panels' => array(
        'tab_frontpage_1' => array(
          'selected' => 1,
          'weight' => '-10',
        ),
        'tab_frontpage_2' => array(
          'selected' => 1,
          'weight' => '-10',
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '61d1b89f-33e7-4d34-a2f6-221d71faf964';
    $display->content['new-61d1b89f-33e7-4d34-a2f6-221d71faf964'] = $pane;
    $display->panels['center'][4] = 'new-61d1b89f-33e7-4d34-a2f6-221d71faf964';
    $pane = new stdClass();
    $pane->pid = 'new-99cfa6b7-1177-4cb2-a7bd-dd3663e60bdd';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog-blog_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
      'offset' => '0',
      'override_title' => 1,
      'override_title_text' => 'Test blog',
      'override_title_heading' => 'h1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '99cfa6b7-1177-4cb2-a7bd-dd3663e60bdd';
    $display->content['new-99cfa6b7-1177-4cb2-a7bd-dd3663e60bdd'] = $pane;
    $display->panels['center'][5] = 'new-99cfa6b7-1177-4cb2-a7bd-dd3663e60bdd';
    $pane = new stdClass();
    $pane->pid = 'new-fac6f394-47e2-448f-9c2b-226acffa8585';
    $pane->panel = 'center';
    $pane->type = 'ctools_api';
    $pane->subtype = 'ContentTypes\\NodeList';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'theme' => 'list_most_readable',
      'parameters' => array(
        'filter' => array(
          'content_type' => 'article',
          'term_references' => array(
            'field_category' => array(),
          ),
        ),
        'sort' => array(
          'field' => 'nid',
          'direction' => 'asc',
          'sticky_first' => 0,
        ),
        'range' => array(
          'start' => '0',
          'length' => '12',
        ),
        'read_more' => array(
          'link' => array(
            'title' => 'Se alle nyheder',
            'url' => '<front>',
          ),
        ),
      ),
      'override_title' => TRUE,
      'override_title_text' => 'Top stories on golf.dk',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'fac6f394-47e2-448f-9c2b-226acffa8585';
    $display->content['new-fac6f394-47e2-448f-9c2b-226acffa8585'] = $pane;
    $display->panels['center'][6] = 'new-fac6f394-47e2-448f-9c2b-226acffa8585';
    $pane = new stdClass();
    $pane->pid = 'new-c5bda339-619e-445d-a5c7-506815ae815a';
    $pane->panel = 'center';
    $pane->type = 'ctools_api';
    $pane->subtype = 'ContentTypes\\NodeList';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'theme' => 'video_teaser',
      'parameters' => array(
        'filter' => array(
          'content_type' => 'article',
          'term_references' => array(
            'field_category' => array(),
          ),
        ),
        'sort' => array(
          'field' => 'nid',
          'direction' => 'asc',
          'sticky_first' => 1,
        ),
        'range' => array(
          'start' => '0',
          'length' => '11',
        ),
        'read_more' => array(
          'link' => array(
            'title' => 'Se alle videoer',
            'url' => 'node',
          ),
        ),
      ),
      'override_title' => TRUE,
      'override_title_text' => 'Instruktion',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'c5bda339-619e-445d-a5c7-506815ae815a';
    $display->content['new-c5bda339-619e-445d-a5c7-506815ae815a'] = $pane;
    $display->panels['center'][7] = 'new-c5bda339-619e-445d-a5c7-506815ae815a';
    $pane = new stdClass();
    $pane->pid = 'new-184a26fe-8f90-451c-a44d-27309dffed79';
    $pane->panel = 'left';
    $pane->type = 'ctools_api';
    $pane->subtype = 'ContentTypes\\NodeList';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'theme' => 'big_spot',
      'parameters' => array(
        'filter' => array(
          'content_type' => 'article',
          'term_references' => array(
            'field_category' => array(),
          ),
        ),
        'sort' => array(
          'field' => 'nid',
          'direction' => 'asc',
        ),
        'range' => array(
          'start' => '0',
          'length' => '1',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '184a26fe-8f90-451c-a44d-27309dffed79';
    $display->content['new-184a26fe-8f90-451c-a44d-27309dffed79'] = $pane;
    $display->panels['left'][0] = 'new-184a26fe-8f90-451c-a44d-27309dffed79';
    $pane = new stdClass();
    $pane->pid = 'new-41c98b99-f203-4510-8bfe-6e08c0c0285b';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'user-login';
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
    $pane->uuid = '41c98b99-f203-4510-8bfe-6e08c0c0285b';
    $display->content['new-41c98b99-f203-4510-8bfe-6e08c0c0285b'] = $pane;
    $display->panels['right'][0] = 'new-41c98b99-f203-4510-8bfe-6e08c0c0285b';
    $pane = new stdClass();
    $pane->pid = 'new-2962e802-062c-416c-a2d1-172b6513a89c';
    $pane->panel = 'right';
    $pane->type = 'ctools_api';
    $pane->subtype = 'ContentTypes\\Preview';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'theme' => 'sponsor',
      'info' => array(
        'images' => array(
          'images' => array(
            0 => array(
              'title' => '',
              'image' => array(
                'fid' => '0a1353e9f6b799a51c6490783a896340',
                'style' => '',
              ),
              'link' => 'http://www.danskgolfunion.dk',
            ),
          ),
        ),
        'entity' => array(
          'node_type' => '',
          'node_type_field' => '',
          'image_style' => '',
        ),
      ),
      'context' => 'empty',
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
    $pane->uuid = '2962e802-062c-416c-a2d1-172b6513a89c';
    $display->content['new-2962e802-062c-416c-a2d1-172b6513a89c'] = $pane;
    $display->panels['right'][1] = 'new-2962e802-062c-416c-a2d1-172b6513a89c';
    $pane = new stdClass();
    $pane->pid = 'new-24ea76c8-9f19-45a9-a6d1-391e4ed4128f';
    $pane->panel = 'right';
    $pane->type = 'ctools_api';
    $pane->subtype = 'ContentTypes\\Preview';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'theme' => 'sponsor',
      'info' => array(
        'images' => array(
          'images' => array(
            0 => array(
              'title' => 'DGU Hovedsponsor',
              'image' => array(
                'fid' => 'b06004765c637ec62b38dbc9b8d7276b',
                'style' => '',
              ),
              'link' => 'http://www.santander.com',
            ),
          ),
        ),
        'entity' => array(
          'node_type' => '',
          'node_type_field' => '',
          'image_style' => '',
        ),
      ),
      'context' => 'empty',
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
    $pane->uuid = '24ea76c8-9f19-45a9-a6d1-391e4ed4128f';
    $display->content['new-24ea76c8-9f19-45a9-a6d1-391e4ed4128f'] = $pane;
    $display->panels['right'][2] = 'new-24ea76c8-9f19-45a9-a6d1-391e4ed4128f';
    $pane = new stdClass();
    $pane->pid = 'new-67e97506-8f03-4fe4-94b4-7bbe369ee80b';
    $pane->panel = 'right';
    $pane->type = 'ctools_api';
    $pane->subtype = 'ContentTypes\\Preview';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'theme' => 'sponsor',
      'info' => array(
        'images' => array(
          'images' => array(
            0 => array(
              'title' => '',
              'image' => array(
                'fid' => 'fbde53e79ea218b8eb95cb472c87afab',
                'style' => '',
              ),
              'link' => 'http://www.sosvikar.dk',
            ),
            1 => array(
              'title' => '',
              'image' => array(
                'fid' => 'ccf224c351959dd5c865ffdddc19eb2b',
                'style' => '',
              ),
              'link' => 'http://www.hyundai.dk',
            ),
            2 => array(
              'title' => '',
              'image' => array(
                'fid' => 'aa7461d663375298b4ce07590d64b226',
                'style' => '',
              ),
              'link' => 'http://www.synoptik.dk',
            ),
          ),
        ),
        'entity' => array(
          'node_type' => '',
          'node_type_field' => '',
          'image_style' => '',
        ),
      ),
      'context' => 'empty',
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
    $pane->uuid = '67e97506-8f03-4fe4-94b4-7bbe369ee80b';
    $display->content['new-67e97506-8f03-4fe4-94b4-7bbe369ee80b'] = $pane;
    $display->panels['right'][3] = 'new-67e97506-8f03-4fe4-94b4-7bbe369ee80b';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['front'] = $page;

  return $pages;

}
