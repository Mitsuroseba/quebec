<?php
/**
 * @file
 * menu_main_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function menu_main_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_aktuelt:<front>.
  $menu_links['main-menu_aktuelt:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Aktuelt',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'menu_image' => array(
        'fid' => 0,
        'style' => '',
      ),
      'identifier' => 'main-menu_aktuelt:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_baner:<front>.
  $menu_links['main-menu_baner:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Baner',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'menu_image' => array(
        'fid' => 0,
        'style' => '',
      ),
      'identifier' => 'main-menu_baner:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_book-tid:<front>.
  $menu_links['main-menu_book-tid:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Book tid',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'menu_image' => array(
        'fid' => 0,
        'style' => '',
      ),
      'identifier' => 'main-menu_book-tid:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_faq:faq.
  $menu_links['main-menu_faq:faq'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'faq',
    'router_path' => 'faq',
    'link_title' => 'FAQ',
    'options' => array(
      'menu_image' => array(
        'fid' => 0,
        'style' => '',
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_faq:faq',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_landsholdet:node.
  $menu_links['main-menu_landsholdet:node'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node',
    'router_path' => 'node',
    'link_title' => 'Landsholdet',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'menu_image' => array(
        'fid' => 0,
        'style' => '',
      ),
      'identifier' => 'main-menu_landsholdet:node',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_aktuelt:<front>',
  );
  // Exported menu link: main-menu_nyheder:node.
  $menu_links['main-menu_nyheder:node'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node',
    'router_path' => 'node',
    'link_title' => 'Nyheder',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'menu_image' => array(
        'fid' => 0,
        'style' => '',
      ),
      'identifier' => 'main-menu_nyheder:node',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_aktuelt:<front>',
  );
  // Exported menu link: main-menu_tidsbestilling:node.
  $menu_links['main-menu_tidsbestilling:node'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node',
    'router_path' => 'node',
    'link_title' => 'Tidsbestilling',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'menu_image' => array(
        'fid' => 0,
        'style' => '',
      ),
      'identifier' => 'main-menu_tidsbestilling:node',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_book-tid:<front>',
  );
  // Exported menu link: main-menu_vlg-baner:node.
  $menu_links['main-menu_vlg-baner:node'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node',
    'router_path' => 'node',
    'link_title' => 'Vælg baner',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'menu_image' => array(
        'fid' => 0,
        'style' => '',
      ),
      'identifier' => 'main-menu_vlg-baner:node',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_baner:<front>',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Aktuelt');
  t('Baner');
  t('Book tid');
  t('FAQ');
  t('Landsholdet');
  t('Nyheder');
  t('Tidsbestilling');
  t('Vælg baner');

  return $menu_links;
}
