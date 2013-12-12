<?php
/**
 * @file
 * dmc_xml.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function dmc_xml_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_export-xml:export-xml
  $menu_links['main-menu_export-xml:export-xml'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'export-xml',
    'router_path' => 'export-xml',
    'link_title' => 'Export XML',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_export-xml:export-xml',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 3,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: main-menu_import:import
  $menu_links['main-menu_import:import'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'import',
    'router_path' => 'import',
    'link_title' => 'Import',
    'options' => array(
      'attributes' => array(
        'title' => 'Import records via CSV file',
      ),
      'identifier' => 'main-menu_import:import',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_view:view
  $menu_links['main-menu_view:view'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'view',
    'router_path' => 'view',
    'link_title' => 'View',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_view:view',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Export XML');
  t('Home');
  t('Import');
  t('View');


  return $menu_links;
}
