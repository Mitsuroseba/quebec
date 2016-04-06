<?php
/**
 * @file
 * config_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function config_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
      'Content Editor' => 'Content Editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
      'Content Editor' => 'Content Editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access advanced_link autocomplete'.
  $permissions['access advanced_link autocomplete'] = array(
    'name' => 'access advanced_link autocomplete',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'advanced_link',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access all webform results'.
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(),
    'module' => 'webform',
  );

  // Exported permission: 'access coffee'.
  $permissions['access coffee'] = array(
    'name' => 'access coffee',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'coffee',
  );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'Administrator' => 'Administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access devel information'.
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'access domain settings form'.
  $permissions['access domain settings form'] = array(
    'name' => 'access domain settings form',
    'roles' => array(),
    'module' => 'domain_settings',
  );

  // Exported permission: 'access inactive domains'.
  $permissions['access inactive domains'] = array(
    'name' => 'access inactive domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'access media browser'.
  $permissions['access media browser'] = array(
    'name' => 'access media browser',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'access own webform results'.
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(),
    'module' => 'webform',
  );

  // Exported permission: 'access own webform submissions'.
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(),
    'module' => 'webform',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access the domain content page'.
  $permissions['access the domain content page'] = array(
    'name' => 'access the domain content page',
    'roles' => array(),
    'module' => 'domain_content',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'add media from remote sources'.
  $permissions['add media from remote sources'] = array(
    'name' => 'add media from remote sources',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'media_internet',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer addthis'.
  $permissions['administer addthis'] = array(
    'name' => 'administer addthis',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'addthis',
  );

  // Exported permission: 'administer advanced addthis'.
  $permissions['administer advanced addthis'] = array(
    'name' => 'administer advanced addthis',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'addthis',
  );

  // Exported permission: 'administer advanced pane settings'.
  $permissions['administer advanced pane settings'] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer autoarch settings'.
  $permissions['administer autoarch settings'] = array(
    'name' => 'administer autoarch settings',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'autoarch',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer ckeditor'.
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'administer coffee'.
  $permissions['administer coffee'] = array(
    'name' => 'administer coffee',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'coffee',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer content translations'.
  $permissions['administer content translations'] = array(
    'name' => 'administer content translations',
    'roles' => array(),
    'module' => 'i18n_node',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer dependencies'.
  $permissions['administer dependencies'] = array(
    'name' => 'administer dependencies',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'conditional_fields',
  );

  // Exported permission: 'administer domains'.
  $permissions['administer domains'] = array(
    'name' => 'administer domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'administer entity view modes'.
  $permissions['administer entity view modes'] = array(
    'name' => 'administer entity view modes',
    'roles' => array(),
    'module' => 'entity_view_mode',
  );

  // Exported permission: 'administer facets'.
  $permissions['administer facets'] = array(
    'name' => 'administer facets',
    'roles' => array(),
    'module' => 'facetapi',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer field collections'.
  $permissions['administer field collections'] = array(
    'name' => 'administer field collections',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_collection',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'field_group',
  );

  // Exported permission: 'administer file types'.
  $permissions['administer file types'] = array(
    'name' => 'administer file types',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer files'.
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer google analytics'.
  $permissions['administer google analytics'] = array(
    'name' => 'administer google analytics',
    'roles' => array(),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer imce'.
  $permissions['administer imce'] = array(
    'name' => 'administer imce',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'imce',
  );

  // Exported permission: 'administer jquery colorpicker'.
  $permissions['administer jquery colorpicker'] = array(
    'name' => 'administer jquery colorpicker',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'jquery_colorpicker',
  );

  // Exported permission: 'administer languages'.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'administer linkit'.
  $permissions['administer linkit'] = array(
    'name' => 'administer linkit',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'linkit',
  );

  // Exported permission: 'administer mailsystem'.
  $permissions['administer mailsystem'] = array(
    'name' => 'administer mailsystem',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'mailsystem',
  );

  // Exported permission: 'administer media browser'.
  $permissions['administer media browser'] = array(
    'name' => 'administer media browser',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'administer media oembed'.
  $permissions['administer media oembed'] = array(
    'name' => 'administer media oembed',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'media_oembed',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer menu attributes'.
  $permissions['administer menu attributes'] = array(
    'name' => 'administer menu attributes',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'menu_attributes',
  );

  // Exported permission: 'administer meta tags'.
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'administer mini panels'.
  $permissions['administer mini panels'] = array(
    'name' => 'administer mini panels',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels_mini',
  );

  // Exported permission: 'administer module filter'.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer page manager'.
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'administer pane access'.
  $permissions['administer pane access'] = array(
    'name' => 'administer pane access',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panelizer'.
  $permissions['administer panelizer'] = array(
    'name' => 'administer panelizer',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node article content'.
  $permissions['administer panelizer node article content'] = array(
    'name' => 'administer panelizer node article content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node article context'.
  $permissions['administer panelizer node article context'] = array(
    'name' => 'administer panelizer node article context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node article defaults'.
  $permissions['administer panelizer node article defaults'] = array(
    'name' => 'administer panelizer node article defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node article layout'.
  $permissions['administer panelizer node article layout'] = array(
    'name' => 'administer panelizer node article layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node article overview'.
  $permissions['administer panelizer node article overview'] = array(
    'name' => 'administer panelizer node article overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node article settings'.
  $permissions['administer panelizer node article settings'] = array(
    'name' => 'administer panelizer node article settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node blog content'.
  $permissions['administer panelizer node blog content'] = array(
    'name' => 'administer panelizer node blog content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node blog context'.
  $permissions['administer panelizer node blog context'] = array(
    'name' => 'administer panelizer node blog context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node blog defaults'.
  $permissions['administer panelizer node blog defaults'] = array(
    'name' => 'administer panelizer node blog defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node blog layout'.
  $permissions['administer panelizer node blog layout'] = array(
    'name' => 'administer panelizer node blog layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node blog overview'.
  $permissions['administer panelizer node blog overview'] = array(
    'name' => 'administer panelizer node blog overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node blog settings'.
  $permissions['administer panelizer node blog settings'] = array(
    'name' => 'administer panelizer node blog settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node equipment content'.
  $permissions['administer panelizer node equipment content'] = array(
    'name' => 'administer panelizer node equipment content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node equipment context'.
  $permissions['administer panelizer node equipment context'] = array(
    'name' => 'administer panelizer node equipment context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node equipment defaults'.
  $permissions['administer panelizer node equipment defaults'] = array(
    'name' => 'administer panelizer node equipment defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node equipment layout'.
  $permissions['administer panelizer node equipment layout'] = array(
    'name' => 'administer panelizer node equipment layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node equipment overview'.
  $permissions['administer panelizer node equipment overview'] = array(
    'name' => 'administer panelizer node equipment overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node equipment settings'.
  $permissions['administer panelizer node equipment settings'] = array(
    'name' => 'administer panelizer node equipment settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node gallery content'.
  $permissions['administer panelizer node gallery content'] = array(
    'name' => 'administer panelizer node gallery content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node gallery context'.
  $permissions['administer panelizer node gallery context'] = array(
    'name' => 'administer panelizer node gallery context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node gallery defaults'.
  $permissions['administer panelizer node gallery defaults'] = array(
    'name' => 'administer panelizer node gallery defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node gallery layout'.
  $permissions['administer panelizer node gallery layout'] = array(
    'name' => 'administer panelizer node gallery layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node gallery overview'.
  $permissions['administer panelizer node gallery overview'] = array(
    'name' => 'administer panelizer node gallery overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node gallery settings'.
  $permissions['administer panelizer node gallery settings'] = array(
    'name' => 'administer panelizer node gallery settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node instruction content'.
  $permissions['administer panelizer node instruction content'] = array(
    'name' => 'administer panelizer node instruction content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node instruction context'.
  $permissions['administer panelizer node instruction context'] = array(
    'name' => 'administer panelizer node instruction context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node instruction defaults'.
  $permissions['administer panelizer node instruction defaults'] = array(
    'name' => 'administer panelizer node instruction defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node instruction layout'.
  $permissions['administer panelizer node instruction layout'] = array(
    'name' => 'administer panelizer node instruction layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node instruction overview'.
  $permissions['administer panelizer node instruction overview'] = array(
    'name' => 'administer panelizer node instruction overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node instruction settings'.
  $permissions['administer panelizer node instruction settings'] = array(
    'name' => 'administer panelizer node instruction settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node news content'.
  $permissions['administer panelizer node news content'] = array(
    'name' => 'administer panelizer node news content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node news context'.
  $permissions['administer panelizer node news context'] = array(
    'name' => 'administer panelizer node news context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node news defaults'.
  $permissions['administer panelizer node news defaults'] = array(
    'name' => 'administer panelizer node news defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node news layout'.
  $permissions['administer panelizer node news layout'] = array(
    'name' => 'administer panelizer node news layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node news overview'.
  $permissions['administer panelizer node news overview'] = array(
    'name' => 'administer panelizer node news overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node news settings'.
  $permissions['administer panelizer node news settings'] = array(
    'name' => 'administer panelizer node news settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node rules content'.
  $permissions['administer panelizer node rules content'] = array(
    'name' => 'administer panelizer node rules content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node rules context'.
  $permissions['administer panelizer node rules context'] = array(
    'name' => 'administer panelizer node rules context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node rules defaults'.
  $permissions['administer panelizer node rules defaults'] = array(
    'name' => 'administer panelizer node rules defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node rules layout'.
  $permissions['administer panelizer node rules layout'] = array(
    'name' => 'administer panelizer node rules layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node rules overview'.
  $permissions['administer panelizer node rules overview'] = array(
    'name' => 'administer panelizer node rules overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node rules settings'.
  $permissions['administer panelizer node rules settings'] = array(
    'name' => 'administer panelizer node rules settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node section_page content'.
  $permissions['administer panelizer node section_page content'] = array(
    'name' => 'administer panelizer node section_page content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node section_page context'.
  $permissions['administer panelizer node section_page context'] = array(
    'name' => 'administer panelizer node section_page context',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node section_page defaults'.
  $permissions['administer panelizer node section_page defaults'] = array(
    'name' => 'administer panelizer node section_page defaults',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node section_page layout'.
  $permissions['administer panelizer node section_page layout'] = array(
    'name' => 'administer panelizer node section_page layout',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node section_page overview'.
  $permissions['administer panelizer node section_page overview'] = array(
    'name' => 'administer panelizer node section_page overview',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node section_page settings'.
  $permissions['administer panelizer node section_page settings'] = array(
    'name' => 'administer panelizer node section_page settings',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node tournaments defaults'.
  $permissions['administer panelizer node tournaments defaults'] = array(
    'name' => 'administer panelizer node tournaments defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node travel content'.
  $permissions['administer panelizer node travel content'] = array(
    'name' => 'administer panelizer node travel content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node travel context'.
  $permissions['administer panelizer node travel context'] = array(
    'name' => 'administer panelizer node travel context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node travel defaults'.
  $permissions['administer panelizer node travel defaults'] = array(
    'name' => 'administer panelizer node travel defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node travel layout'.
  $permissions['administer panelizer node travel layout'] = array(
    'name' => 'administer panelizer node travel layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node travel overview'.
  $permissions['administer panelizer node travel overview'] = array(
    'name' => 'administer panelizer node travel overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node travel settings'.
  $permissions['administer panelizer node travel settings'] = array(
    'name' => 'administer panelizer node travel settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node video content'.
  $permissions['administer panelizer node video content'] = array(
    'name' => 'administer panelizer node video content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node video context'.
  $permissions['administer panelizer node video context'] = array(
    'name' => 'administer panelizer node video context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node video defaults'.
  $permissions['administer panelizer node video defaults'] = array(
    'name' => 'administer panelizer node video defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node video layout'.
  $permissions['administer panelizer node video layout'] = array(
    'name' => 'administer panelizer node video layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node video overview'.
  $permissions['administer panelizer node video overview'] = array(
    'name' => 'administer panelizer node video overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node video settings'.
  $permissions['administer panelizer node video settings'] = array(
    'name' => 'administer panelizer node video settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node webform content'.
  $permissions['administer panelizer node webform content'] = array(
    'name' => 'administer panelizer node webform content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node webform context'.
  $permissions['administer panelizer node webform context'] = array(
    'name' => 'administer panelizer node webform context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node webform defaults'.
  $permissions['administer panelizer node webform defaults'] = array(
    'name' => 'administer panelizer node webform defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node webform layout'.
  $permissions['administer panelizer node webform layout'] = array(
    'name' => 'administer panelizer node webform layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node webform overview'.
  $permissions['administer panelizer node webform overview'] = array(
    'name' => 'administer panelizer node webform overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node webform settings'.
  $permissions['administer panelizer node webform settings'] = array(
    'name' => 'administer panelizer node webform settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panels layouts'.
  $permissions['administer panels layouts'] = array(
    'name' => 'administer panels layouts',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels styles'.
  $permissions['administer panels styles'] = array(
    'name' => 'administer panels styles',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer redirects'.
  $permissions['administer redirects'] = array(
    'name' => 'administer redirects',
    'roles' => array(),
    'module' => 'redirect',
  );

  // Exported permission: 'administer scheduler'.
  $permissions['administer scheduler'] = array(
    'name' => 'administer scheduler',
    'roles' => array(),
    'module' => 'scheduler',
  );

  // Exported permission: 'administer search_api'.
  $permissions['administer search_api'] = array(
    'name' => 'administer search_api',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'search_api',
  );

  // Exported permission: 'administer seckit'.
  $permissions['administer seckit'] = array(
    'name' => 'administer seckit',
    'roles' => array(),
    'module' => 'seckit',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer subfolders roles'.
  $permissions['administer subfolders roles'] = array(
    'name' => 'administer subfolders roles',
    'roles' => array(),
    'module' => 'subfolders_domain',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer uuid'.
  $permissions['administer uuid'] = array(
    'name' => 'administer uuid',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'uuid',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'affect admin role on a domain'.
  $permissions['affect admin role on a domain'] = array(
    'name' => 'affect admin role on a domain',
    'roles' => array(),
    'module' => 'subfolders_domain',
  );

  // Exported permission: 'affect role on all domains'.
  $permissions['affect role on all domains'] = array(
    'name' => 'affect role on all domains',
    'roles' => array(),
    'module' => 'subfolders_domain',
  );

  // Exported permission: 'archive nodes using autoarch'.
  $permissions['archive nodes using autoarch'] = array(
    'name' => 'archive nodes using autoarch',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'autoarch',
  );

  // Exported permission: 'assign domain editors'.
  $permissions['assign domain editors'] = array(
    'name' => 'assign domain editors',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass file access'.
  $permissions['bypass file access'] = array(
    'name' => 'bypass file access',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'bypass maxlength'.
  $permissions['bypass maxlength'] = array(
    'name' => 'bypass maxlength',
    'roles' => array(),
    'module' => 'maxlength',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change layouts in place editing'.
  $permissions['change layouts in place editing'] = array(
    'name' => 'change layouts in place editing',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'configure tablefield'.
  $permissions['configure tablefield'] = array(
    'name' => 'configure tablefield',
    'roles' => array(),
    'module' => 'tablefield',
  );

  // Exported permission: 'create article content'.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create article content on assigned domains'.
  $permissions['create article content on assigned domains'] = array(
    'name' => 'create article content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'create blog content'.
  $permissions['create blog content'] = array(
    'name' => 'create blog content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create blog content on assigned domains'.
  $permissions['create blog content on assigned domains'] = array(
    'name' => 'create blog content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'create equipment content'.
  $permissions['create equipment content'] = array(
    'name' => 'create equipment content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create equipment content on assigned domains'.
  $permissions['create equipment content on assigned domains'] = array(
    'name' => 'create equipment content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'create files'.
  $permissions['create files'] = array(
    'name' => 'create files',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'create gallery content'.
  $permissions['create gallery content'] = array(
    'name' => 'create gallery content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create gallery content on assigned domains'.
  $permissions['create gallery content on assigned domains'] = array(
    'name' => 'create gallery content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'create hero_spot content'.
  $permissions['create hero_spot content'] = array(
    'name' => 'create hero_spot content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create hero_spot content on assigned domains'.
  $permissions['create hero_spot content on assigned domains'] = array(
    'name' => 'create hero_spot content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'create instruction content'.
  $permissions['create instruction content'] = array(
    'name' => 'create instruction content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create instruction content on assigned domains'.
  $permissions['create instruction content on assigned domains'] = array(
    'name' => 'create instruction content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'create link content'.
  $permissions['create link content'] = array(
    'name' => 'create link content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create link content on assigned domains'.
  $permissions['create link content on assigned domains'] = array(
    'name' => 'create link content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'create mini panels'.
  $permissions['create mini panels'] = array(
    'name' => 'create mini panels',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'panels_mini',
  );

  // Exported permission: 'create news content'.
  $permissions['create news content'] = array(
    'name' => 'create news content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create news content on assigned domains'.
  $permissions['create news content on assigned domains'] = array(
    'name' => 'create news content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'create questions_and_answers content'.
  $permissions['create questions_and_answers content'] = array(
    'name' => 'create questions_and_answers content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create questions_and_answers content on assigned domains'.
  $permissions['create questions_and_answers content on assigned domains'] = array(
    'name' => 'create questions_and_answers content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'create rules content'.
  $permissions['create rules content'] = array(
    'name' => 'create rules content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create rules content on assigned domains'.
  $permissions['create rules content on assigned domains'] = array(
    'name' => 'create rules content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'create section_page content'.
  $permissions['create section_page content'] = array(
    'name' => 'create section_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create section_page content on assigned domains'.
  $permissions['create section_page content on assigned domains'] = array(
    'name' => 'create section_page content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'create text_block content'.
  $permissions['create text_block content'] = array(
    'name' => 'create text_block content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create text_block content on assigned domains'.
  $permissions['create text_block content on assigned domains'] = array(
    'name' => 'create text_block content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'create tournaments content'.
  $permissions['create tournaments content'] = array(
    'name' => 'create tournaments content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create tournaments content on assigned domains'.
  $permissions['create tournaments content on assigned domains'] = array(
    'name' => 'create tournaments content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'create travel content'.
  $permissions['create travel content'] = array(
    'name' => 'create travel content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create travel content on assigned domains'.
  $permissions['create travel content on assigned domains'] = array(
    'name' => 'create travel content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'create video content'.
  $permissions['create video content'] = array(
    'name' => 'create video content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create video content on assigned domains'.
  $permissions['create video content on assigned domains'] = array(
    'name' => 'create video content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'create webform content'.
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create webform content on assigned domains'.
  $permissions['create webform content on assigned domains'] = array(
    'name' => 'create webform content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'customize ckeditor'.
  $permissions['customize ckeditor'] = array(
    'name' => 'customize ckeditor',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'delete all webform submissions'.
  $permissions['delete all webform submissions'] = array(
    'name' => 'delete all webform submissions',
    'roles' => array(),
    'module' => 'webform',
  );

  // Exported permission: 'delete any article content'.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any audio files'.
  $permissions['delete any audio files'] = array(
    'name' => 'delete any audio files',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any blog content'.
  $permissions['delete any blog content'] = array(
    'name' => 'delete any blog content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any document files'.
  $permissions['delete any document files'] = array(
    'name' => 'delete any document files',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any equipment content'.
  $permissions['delete any equipment content'] = array(
    'name' => 'delete any equipment content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any gallery content'.
  $permissions['delete any gallery content'] = array(
    'name' => 'delete any gallery content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any hero_spot content'.
  $permissions['delete any hero_spot content'] = array(
    'name' => 'delete any hero_spot content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any image files'.
  $permissions['delete any image files'] = array(
    'name' => 'delete any image files',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any instruction content'.
  $permissions['delete any instruction content'] = array(
    'name' => 'delete any instruction content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any link content'.
  $permissions['delete any link content'] = array(
    'name' => 'delete any link content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any news content'.
  $permissions['delete any news content'] = array(
    'name' => 'delete any news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any questions_and_answers content'.
  $permissions['delete any questions_and_answers content'] = array(
    'name' => 'delete any questions_and_answers content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any rules content'.
  $permissions['delete any rules content'] = array(
    'name' => 'delete any rules content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any section_page content'.
  $permissions['delete any section_page content'] = array(
    'name' => 'delete any section_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any text_block content'.
  $permissions['delete any text_block content'] = array(
    'name' => 'delete any text_block content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any tournaments content'.
  $permissions['delete any tournaments content'] = array(
    'name' => 'delete any tournaments content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any travel content'.
  $permissions['delete any travel content'] = array(
    'name' => 'delete any travel content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any video content'.
  $permissions['delete any video content'] = array(
    'name' => 'delete any video content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any video files'.
  $permissions['delete any video files'] = array(
    'name' => 'delete any video files',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any webform content'.
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete article content on assigned domains'.
  $permissions['delete article content on assigned domains'] = array(
    'name' => 'delete article content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'delete blog content on assigned domains'.
  $permissions['delete blog content on assigned domains'] = array(
    'name' => 'delete blog content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'delete domain content'.
  $permissions['delete domain content'] = array(
    'name' => 'delete domain content',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'delete equipment content on assigned domains'.
  $permissions['delete equipment content on assigned domains'] = array(
    'name' => 'delete equipment content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'delete gallery content on assigned domains'.
  $permissions['delete gallery content on assigned domains'] = array(
    'name' => 'delete gallery content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'delete hero_spot content on assigned domains'.
  $permissions['delete hero_spot content on assigned domains'] = array(
    'name' => 'delete hero_spot content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'delete instruction content on assigned domains'.
  $permissions['delete instruction content on assigned domains'] = array(
    'name' => 'delete instruction content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'delete link content on assigned domains'.
  $permissions['delete link content on assigned domains'] = array(
    'name' => 'delete link content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'delete news content on assigned domains'.
  $permissions['delete news content on assigned domains'] = array(
    'name' => 'delete news content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'delete own article content'.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own audio files'.
  $permissions['delete own audio files'] = array(
    'name' => 'delete own audio files',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own blog content'.
  $permissions['delete own blog content'] = array(
    'name' => 'delete own blog content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own document files'.
  $permissions['delete own document files'] = array(
    'name' => 'delete own document files',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own equipment content'.
  $permissions['delete own equipment content'] = array(
    'name' => 'delete own equipment content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own gallery content'.
  $permissions['delete own gallery content'] = array(
    'name' => 'delete own gallery content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own hero_spot content'.
  $permissions['delete own hero_spot content'] = array(
    'name' => 'delete own hero_spot content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own image files'.
  $permissions['delete own image files'] = array(
    'name' => 'delete own image files',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own instruction content'.
  $permissions['delete own instruction content'] = array(
    'name' => 'delete own instruction content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own link content'.
  $permissions['delete own link content'] = array(
    'name' => 'delete own link content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own news content'.
  $permissions['delete own news content'] = array(
    'name' => 'delete own news content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own questions_and_answers content'.
  $permissions['delete own questions_and_answers content'] = array(
    'name' => 'delete own questions_and_answers content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own rules content'.
  $permissions['delete own rules content'] = array(
    'name' => 'delete own rules content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own section_page content'.
  $permissions['delete own section_page content'] = array(
    'name' => 'delete own section_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own text_block content'.
  $permissions['delete own text_block content'] = array(
    'name' => 'delete own text_block content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own tournaments content'.
  $permissions['delete own tournaments content'] = array(
    'name' => 'delete own tournaments content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own travel content'.
  $permissions['delete own travel content'] = array(
    'name' => 'delete own travel content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own video content'.
  $permissions['delete own video content'] = array(
    'name' => 'delete own video content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own video files'.
  $permissions['delete own video files'] = array(
    'name' => 'delete own video files',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own webform content'.
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform submissions'.
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(),
    'module' => 'webform',
  );

  // Exported permission: 'delete questions_and_answers content on assigned domains'.
  $permissions['delete questions_and_answers content on assigned domains'] = array(
    'name' => 'delete questions_and_answers content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete rules content on assigned domains'.
  $permissions['delete rules content on assigned domains'] = array(
    'name' => 'delete rules content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'delete section_page content on assigned domains'.
  $permissions['delete section_page content on assigned domains'] = array(
    'name' => 'delete section_page content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'delete terms in age'.
  $permissions['delete terms in age'] = array(
    'name' => 'delete terms in age',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in category'.
  $permissions['delete terms in category'] = array(
    'name' => 'delete terms in category',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in country'.
  $permissions['delete terms in country'] = array(
    'name' => 'delete terms in country',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in course'.
  $permissions['delete terms in course'] = array(
    'name' => 'delete terms in course',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in district'.
  $permissions['delete terms in district'] = array(
    'name' => 'delete terms in district',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in equipment_brand'.
  $permissions['delete terms in equipment_brand'] = array(
    'name' => 'delete terms in equipment_brand',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in equipment_category'.
  $permissions['delete terms in equipment_category'] = array(
    'name' => 'delete terms in equipment_category',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in equipment_type'.
  $permissions['delete terms in equipment_type'] = array(
    'name' => 'delete terms in equipment_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in gender'.
  $permissions['delete terms in gender'] = array(
    'name' => 'delete terms in gender',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in handicap'.
  $permissions['delete terms in handicap'] = array(
    'name' => 'delete terms in handicap',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in player'.
  $permissions['delete terms in player'] = array(
    'name' => 'delete terms in player',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in ranking'.
  $permissions['delete terms in ranking'] = array(
    'name' => 'delete terms in ranking',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tournament'.
  $permissions['delete terms in tournament'] = array(
    'name' => 'delete terms in tournament',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tournament_region'.
  $permissions['delete terms in tournament_region'] = array(
    'name' => 'delete terms in tournament_region',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tournament_type'.
  $permissions['delete terms in tournament_type'] = array(
    'name' => 'delete terms in tournament_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete text_block content on assigned domains'.
  $permissions['delete text_block content on assigned domains'] = array(
    'name' => 'delete text_block content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'delete tournaments content on assigned domains'.
  $permissions['delete tournaments content on assigned domains'] = array(
    'name' => 'delete tournaments content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'delete travel content on assigned domains'.
  $permissions['delete travel content on assigned domains'] = array(
    'name' => 'delete travel content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'delete video content on assigned domains'.
  $permissions['delete video content on assigned domains'] = array(
    'name' => 'delete video content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'delete webform content on assigned domains'.
  $permissions['delete webform content on assigned domains'] = array(
    'name' => 'delete webform content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'download any audio files'.
  $permissions['download any audio files'] = array(
    'name' => 'download any audio files',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any document files'.
  $permissions['download any document files'] = array(
    'name' => 'download any document files',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any image files'.
  $permissions['download any image files'] = array(
    'name' => 'download any image files',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any video files'.
  $permissions['download any video files'] = array(
    'name' => 'download any video files',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own audio files'.
  $permissions['download own audio files'] = array(
    'name' => 'download own audio files',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own document files'.
  $permissions['download own document files'] = array(
    'name' => 'download own document files',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own image files'.
  $permissions['download own image files'] = array(
    'name' => 'download own image files',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own video files'.
  $permissions['download own video files'] = array(
    'name' => 'download own video files',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit all webform submissions'.
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(),
    'module' => 'webform',
  );

  // Exported permission: 'edit any article content'.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any audio files'.
  $permissions['edit any audio files'] = array(
    'name' => 'edit any audio files',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any blog content'.
  $permissions['edit any blog content'] = array(
    'name' => 'edit any blog content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any document files'.
  $permissions['edit any document files'] = array(
    'name' => 'edit any document files',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any equipment content'.
  $permissions['edit any equipment content'] = array(
    'name' => 'edit any equipment content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any gallery content'.
  $permissions['edit any gallery content'] = array(
    'name' => 'edit any gallery content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any hero_spot content'.
  $permissions['edit any hero_spot content'] = array(
    'name' => 'edit any hero_spot content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any image files'.
  $permissions['edit any image files'] = array(
    'name' => 'edit any image files',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any instruction content'.
  $permissions['edit any instruction content'] = array(
    'name' => 'edit any instruction content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any link content'.
  $permissions['edit any link content'] = array(
    'name' => 'edit any link content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any news content'.
  $permissions['edit any news content'] = array(
    'name' => 'edit any news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any questions_and_answers content'.
  $permissions['edit any questions_and_answers content'] = array(
    'name' => 'edit any questions_and_answers content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any rules content'.
  $permissions['edit any rules content'] = array(
    'name' => 'edit any rules content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any section_page content'.
  $permissions['edit any section_page content'] = array(
    'name' => 'edit any section_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any text_block content'.
  $permissions['edit any text_block content'] = array(
    'name' => 'edit any text_block content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any tournaments content'.
  $permissions['edit any tournaments content'] = array(
    'name' => 'edit any tournaments content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any travel content'.
  $permissions['edit any travel content'] = array(
    'name' => 'edit any travel content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any video content'.
  $permissions['edit any video content'] = array(
    'name' => 'edit any video content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any video files'.
  $permissions['edit any video files'] = array(
    'name' => 'edit any video files',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any webform content'.
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit domain content'.
  $permissions['edit domain content'] = array(
    'name' => 'edit domain content',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'edit meta tags'.
  $permissions['edit meta tags'] = array(
    'name' => 'edit meta tags',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit own article content'.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own audio files'.
  $permissions['edit own audio files'] = array(
    'name' => 'edit own audio files',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own blog content'.
  $permissions['edit own blog content'] = array(
    'name' => 'edit own blog content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own document files'.
  $permissions['edit own document files'] = array(
    'name' => 'edit own document files',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own equipment content'.
  $permissions['edit own equipment content'] = array(
    'name' => 'edit own equipment content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own gallery content'.
  $permissions['edit own gallery content'] = array(
    'name' => 'edit own gallery content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own hero_spot content'.
  $permissions['edit own hero_spot content'] = array(
    'name' => 'edit own hero_spot content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own image files'.
  $permissions['edit own image files'] = array(
    'name' => 'edit own image files',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own instruction content'.
  $permissions['edit own instruction content'] = array(
    'name' => 'edit own instruction content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own link content'.
  $permissions['edit own link content'] = array(
    'name' => 'edit own link content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own news content'.
  $permissions['edit own news content'] = array(
    'name' => 'edit own news content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own questions_and_answers content'.
  $permissions['edit own questions_and_answers content'] = array(
    'name' => 'edit own questions_and_answers content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own rules content'.
  $permissions['edit own rules content'] = array(
    'name' => 'edit own rules content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own section_page content'.
  $permissions['edit own section_page content'] = array(
    'name' => 'edit own section_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own text_block content'.
  $permissions['edit own text_block content'] = array(
    'name' => 'edit own text_block content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own tournaments content'.
  $permissions['edit own tournaments content'] = array(
    'name' => 'edit own tournaments content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own travel content'.
  $permissions['edit own travel content'] = array(
    'name' => 'edit own travel content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own video content'.
  $permissions['edit own video content'] = array(
    'name' => 'edit own video content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own video files'.
  $permissions['edit own video files'] = array(
    'name' => 'edit own video files',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own webform content'.
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform submissions'.
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(),
    'module' => 'webform',
  );

  // Exported permission: 'edit terms in age'.
  $permissions['edit terms in age'] = array(
    'name' => 'edit terms in age',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in category'.
  $permissions['edit terms in category'] = array(
    'name' => 'edit terms in category',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in country'.
  $permissions['edit terms in country'] = array(
    'name' => 'edit terms in country',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in course'.
  $permissions['edit terms in course'] = array(
    'name' => 'edit terms in course',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in district'.
  $permissions['edit terms in district'] = array(
    'name' => 'edit terms in district',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in equipment_brand'.
  $permissions['edit terms in equipment_brand'] = array(
    'name' => 'edit terms in equipment_brand',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in equipment_category'.
  $permissions['edit terms in equipment_category'] = array(
    'name' => 'edit terms in equipment_category',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in equipment_type'.
  $permissions['edit terms in equipment_type'] = array(
    'name' => 'edit terms in equipment_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in gender'.
  $permissions['edit terms in gender'] = array(
    'name' => 'edit terms in gender',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in handicap'.
  $permissions['edit terms in handicap'] = array(
    'name' => 'edit terms in handicap',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in player'.
  $permissions['edit terms in player'] = array(
    'name' => 'edit terms in player',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in ranking'.
  $permissions['edit terms in ranking'] = array(
    'name' => 'edit terms in ranking',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tournament'.
  $permissions['edit terms in tournament'] = array(
    'name' => 'edit terms in tournament',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tournament_region'.
  $permissions['edit terms in tournament_region'] = array(
    'name' => 'edit terms in tournament_region',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tournament_type'.
  $permissions['edit terms in tournament_type'] = array(
    'name' => 'edit terms in tournament_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'execute php code'.
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'export nodes'.
  $permissions['export nodes'] = array(
    'name' => 'export nodes',
    'roles' => array(),
    'module' => 'node_export',
  );

  // Exported permission: 'export own nodes'.
  $permissions['export own nodes'] = array(
    'name' => 'export own nodes',
    'roles' => array(),
    'module' => 'node_export',
  );

  // Exported permission: 'export tablefield'.
  $permissions['export tablefield'] = array(
    'name' => 'export tablefield',
    'roles' => array(),
    'module' => 'tablefield',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'opt-in or out of tracking'.
  $permissions['opt-in or out of tracking'] = array(
    'name' => 'opt-in or out of tracking',
    'roles' => array(),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'Administrator' => 'Administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'publish from assigned domain'.
  $permissions['publish from assigned domain'] = array(
    'name' => 'publish from assigned domain',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'publish from default domain'.
  $permissions['publish from default domain'] = array(
    'name' => 'publish from default domain',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'publish to any assigned domain'.
  $permissions['publish to any assigned domain'] = array(
    'name' => 'publish to any assigned domain',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'domain',
  );

  // Exported permission: 'rebuild tablefield'.
  $permissions['rebuild tablefield'] = array(
    'name' => 'rebuild tablefield',
    'roles' => array(),
    'module' => 'tablefield',
  );

  // Exported permission: 'rename features'.
  $permissions['rename features'] = array(
    'name' => 'rename features',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'review content for all domains'.
  $permissions['review content for all domains'] = array(
    'name' => 'review content for all domains',
    'roles' => array(),
    'module' => 'domain_content',
  );

  // Exported permission: 'schedule publishing of nodes'.
  $permissions['schedule publishing of nodes'] = array(
    'name' => 'schedule publishing of nodes',
    'roles' => array(),
    'module' => 'scheduler',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'set domain access'.
  $permissions['set domain access'] = array(
    'name' => 'set domain access',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'show format selection for comment'.
  $permissions['show format selection for comment'] = array(
    'name' => 'show format selection for comment',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for field_collection_item'.
  $permissions['show format selection for field_collection_item'] = array(
    'name' => 'show format selection for field_collection_item',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for file'.
  $permissions['show format selection for file'] = array(
    'name' => 'show format selection for file',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for node'.
  $permissions['show format selection for node'] = array(
    'name' => 'show format selection for node',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for taxonomy_term'.
  $permissions['show format selection for taxonomy_term'] = array(
    'name' => 'show format selection for taxonomy_term',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for user'.
  $permissions['show format selection for user'] = array(
    'name' => 'show format selection for user',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format tips'.
  $permissions['show format tips'] = array(
    'name' => 'show format tips',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show more format tips link'.
  $permissions['show more format tips link'] = array(
    'name' => 'show more format tips link',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'Administrator' => 'Administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'switch users'.
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'translate admin strings'.
  $permissions['translate admin strings'] = array(
    'name' => 'translate admin strings',
    'roles' => array(),
    'module' => 'i18n_string',
  );

  // Exported permission: 'translate content'.
  $permissions['translate content'] = array(
    'name' => 'translate content',
    'roles' => array(),
    'module' => 'translation',
  );

  // Exported permission: 'translate interface'.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'translate user-defined strings'.
  $permissions['translate user-defined strings'] = array(
    'name' => 'translate user-defined strings',
    'roles' => array(),
    'module' => 'i18n_string',
  );

  // Exported permission: 'update article content on assigned domains'.
  $permissions['update article content on assigned domains'] = array(
    'name' => 'update article content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'update blog content on assigned domains'.
  $permissions['update blog content on assigned domains'] = array(
    'name' => 'update blog content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'update equipment content on assigned domains'.
  $permissions['update equipment content on assigned domains'] = array(
    'name' => 'update equipment content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'update gallery content on assigned domains'.
  $permissions['update gallery content on assigned domains'] = array(
    'name' => 'update gallery content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'update hero_spot content on assigned domains'.
  $permissions['update hero_spot content on assigned domains'] = array(
    'name' => 'update hero_spot content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'update instruction content on assigned domains'.
  $permissions['update instruction content on assigned domains'] = array(
    'name' => 'update instruction content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'update link content on assigned domains'.
  $permissions['update link content on assigned domains'] = array(
    'name' => 'update link content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'update news content on assigned domains'.
  $permissions['update news content on assigned domains'] = array(
    'name' => 'update news content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'update questions_and_answers content on assigned domains'.
  $permissions['update questions_and_answers content on assigned domains'] = array(
    'name' => 'update questions_and_answers content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'update rules content on assigned domains'.
  $permissions['update rules content on assigned domains'] = array(
    'name' => 'update rules content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'update section_page content on assigned domains'.
  $permissions['update section_page content on assigned domains'] = array(
    'name' => 'update section_page content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'update text_block content on assigned domains'.
  $permissions['update text_block content on assigned domains'] = array(
    'name' => 'update text_block content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'update tournaments content on assigned domains'.
  $permissions['update tournaments content on assigned domains'] = array(
    'name' => 'update tournaments content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'update travel content on assigned domains'.
  $permissions['update travel content on assigned domains'] = array(
    'name' => 'update travel content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'update video content on assigned domains'.
  $permissions['update video content on assigned domains'] = array(
    'name' => 'update video content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'update webform content on assigned domains'.
  $permissions['update webform content on assigned domains'] = array(
    'name' => 'update webform content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: 'use PHP for tracking visibility'.
  $permissions['use PHP for tracking visibility'] = array(
    'name' => 'use PHP for tracking visibility',
    'roles' => array(),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'use PHP to import nodes'.
  $permissions['use PHP to import nodes'] = array(
    'name' => 'use PHP to import nodes',
    'roles' => array(),
    'module' => 'node_export',
  );

  // Exported permission: 'use ctools import'.
  $permissions['use ctools import'] = array(
    'name' => 'use ctools import',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'ctools',
  );

  // Exported permission: 'use ipe with page manager'.
  $permissions['use ipe with page manager'] = array(
    'name' => 'use ipe with page manager',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use page manager'.
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'use panels caching features'.
  $permissions['use panels caching features'] = array(
    'name' => 'use panels caching features',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels dashboard'.
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels in place editing'.
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels locks'.
  $permissions['use panels locks'] = array(
    'name' => 'use panels locks',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view files'.
  $permissions['view files'] = array(
    'name' => 'view files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own files'.
  $permissions['view own files'] = array(
    'name' => 'view own files',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own private files'.
  $permissions['view own private files'] = array(
    'name' => 'view own private files',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view pane admin links'.
  $permissions['view pane admin links'] = array(
    'name' => 'view pane admin links',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'view private files'.
  $permissions['view private files'] = array(
    'name' => 'view private files',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view scheduled content'.
  $permissions['view scheduled content'] = array(
    'name' => 'view scheduled content',
    'roles' => array(),
    'module' => 'scheduler',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
      'Content Editor' => 'Content Editor',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'system',
  );

  // Exported permission: 'view unpublished domain content'.
  $permissions['view unpublished domain content'] = array(
    'name' => 'view unpublished domain content',
    'roles' => array(),
    'module' => 'domain',
  );

  return $permissions;
}
