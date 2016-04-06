<?php
/**
 * @file
 * Theme functions and callbacks.
 */

// Relative path to theme.
define('PARALLEL_THEME_PATH', path_to_theme());
// Form URL to theme to avoid language prefixes.
define('PARALLEL_THEME_URL', rtrim(base_path(), '/') . '/' . PARALLEL_THEME_PATH);

/**
 * Implements hook_html_head_alter().
 */
function parallel_html_head_alter(array &$head_elements) {
  $head_elements['system_meta_content_type']['#attributes'] = [
    'charset' => 'utf-8',
  ];

  unset($head_elements['system_meta_generator']);
}

/**
 * Implements hook_css_alter().
 */
function parallel_css_alter(array &$css) {
  $css = array_diff_key($css, [
    'modules/system/system.menus.css' => FALSE,
    'modules/system/system.theme.css' => FALSE,
  ]);
}

/**
 * Implements template_preprocess_views_view().
 */
function parallel_preprocess_views_view(array &$variables) {
  /* @var \view $variables['view'] */
  $variables['title'] = $variables['view']->get_title();
}

/**
 * Implements template_preprocess_HOOK().
 */
function parallel_preprocess(array &$variables, $hook) {
  switch ($hook) {
    case 'node':
      // Create node templates based on a view mode.
      $variables['theme_hook_suggestions'][] = "node__view_mode__{$variables['view_mode']}";
      break;

    case 'field':
      $element = $variables['element'];

      if ('node' === $element['#entity_type']) {
        $variables['node'] = $element['#object'];
        $variables['theme_hook_suggestions'][] = "node__view_mode__{$element['#view_mode']}__{$element['#field_name']}";
      }
      break;
  }
}
