<?php
/**
 * @file
 * mini_panel_skyscraber_banners.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function mini_panel_skyscraber_banners_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'mini_panel_skyscraber_banners';
  $mini->category = '';
  $mini->admin_title = 'Skyscraber banners';
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
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'skyscraber_left',
          1 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Skyscraber right',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 1,
      ),
      'skyscraber_left' => array(
        'type' => 'region',
        'title' => 'Skyscraber left',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 1,
      ),
    ),
  );
  $display->panel_settings = array(
    'skyscraber_left' => array(
      'style' => 'ctools_api:CTools\\Plugins\\Styles\\CustomizableRegion',
    ),
    'style_settings' => array(
      'skyscraber_left' => array(
        'theme' => 'default',
        'tag' => 'div',
        'attributes' => array(
          0 => array(
            'attribute' => 'class',
            'value' => 'container left',
          ),
        ),
      ),
      'default' => NULL,
      'center' => array(
        'theme' => 'default',
        'tag' => 'div',
        'attributes' => array(
          0 => array(
            'attribute' => 'class',
            'value' => 'container right',
          ),
        ),
      ),
    ),
    'center' => array(
      'style' => 'ctools_api:CTools\\Plugins\\Styles\\CustomizableRegion',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '5c67df55-8bda-4587-abd8-49e4c202bbc6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-966d10ea-d9ea-40f4-9378-debda4cec5d9';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<!-- Cxense content widget: Test_artem -->
<div id="cx_e72b4b7e5cd3b6fb6fb3898c34cfa2ca33594544" style="display:none"></div>
<script type="text/javascript">
    var cX = cX || {}; cX.callQueue = cX.callQueue || [];
    cX.callQueue.push([\'insertWidget\', {
        widgetId: \'e72b4b7e5cd3b6fb6fb3898c34cfa2ca33594544\',
        insertBeforeElementId: \'cx_e72b4b7e5cd3b6fb6fb3898c34cfa2ca33594544\',
        width: 323, height: 225, renderTemplateUrl: \'auto\'
    }]);

    // Async load of cx.js
    (function(d,s,e,t){e=d.createElement(s);e.type=\'text/java\'+s;e.async=\'async\';
    e.src=\'http\'+(\'https:\'===location.protocol?\'s://s\':\'://\')+\'cdn.cxense.com/cx.js\';
    t=d.getElementsByTagName(s)[0];t.parentNode.insertBefore(e,t);})(document,\'script\');
</script>
<!-- End of Cxense content widget -->
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
    $pane->uuid = '966d10ea-d9ea-40f4-9378-debda4cec5d9';
    $display->content['new-966d10ea-d9ea-40f4-9378-debda4cec5d9'] = $pane;
    $display->panels['center'][0] = 'new-966d10ea-d9ea-40f4-9378-debda4cec5d9';
    $pane = new stdClass();
    $pane->pid = 'new-6a0a99f9-0927-47a5-9c33-0bc9c397948a';
    $pane->panel = 'skyscraber_left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<!-- Cxense content widget: Test 2 -->
<div id="cx_9a75635697abd8d07072e1799f1ed569f9dac2b2" style="display:none"></div>
<script type="text/javascript">
    var cX = cX || {}; cX.callQueue = cX.callQueue || [];
    cX.callQueue.push([\'insertWidget\', {
        widgetId: \'9a75635697abd8d07072e1799f1ed569f9dac2b2\',
        insertBeforeElementId: \'cx_9a75635697abd8d07072e1799f1ed569f9dac2b2\',
        width: 323, height: 225, renderTemplateUrl: \'auto\'
    }]);

    // Async load of cx.js
    (function(d,s,e,t){e=d.createElement(s);e.type=\'text/java\'+s;e.async=\'async\';
    e.src=\'http\'+(\'https:\'===location.protocol?\'s://s\':\'://\')+\'cdn.cxense.com/cx.js\';
    t=d.getElementsByTagName(s)[0];t.parentNode.insertBefore(e,t);})(document,\'script\');
</script>
<!-- End of Cxense content widget -->
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
    $pane->uuid = '6a0a99f9-0927-47a5-9c33-0bc9c397948a';
    $display->content['new-6a0a99f9-0927-47a5-9c33-0bc9c397948a'] = $pane;
    $display->panels['skyscraber_left'][0] = 'new-6a0a99f9-0927-47a5-9c33-0bc9c397948a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['mini_panel_skyscraber_banners'] = $mini;

  return $export;
}
