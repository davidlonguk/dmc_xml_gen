<?php
/**
 * @file
 * dmc_xml.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function dmc_xml_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'Editor' => 'Editor',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access toolbar'.
  $permissions['access toolbar'] = array(
    'name' => 'access toolbar',
    'roles' => array(
      'Editor' => 'Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'toolbar',
  );

  // Exported permission: 'administer feeds'.
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(
      'Automated Tools' => 'Automated Tools',
      'Editor' => 'Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'Editor' => 'Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'Editor' => 'Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'clear dmc_csv feeds'.
  $permissions['clear dmc_csv feeds'] = array(
    'name' => 'clear dmc_csv feeds',
    'roles' => array(
      'Automated Tools' => 'Automated Tools',
      'Editor' => 'Editor',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'create dmc_record content'.
  $permissions['create dmc_record content'] = array(
    'name' => 'create dmc_record content',
    'roles' => array(
      'Automated Tools' => 'Automated Tools',
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any dmc_record content'.
  $permissions['delete any dmc_record content'] = array(
    'name' => 'delete any dmc_record content',
    'roles' => array(
      'Automated Tools' => 'Automated Tools',
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own dmc_record content'.
  $permissions['delete own dmc_record content'] = array(
    'name' => 'delete own dmc_record content',
    'roles' => array(
      'Automated Tools' => 'Automated Tools',
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in channel'.
  $permissions['delete terms in channel'] = array(
    'name' => 'delete terms in channel',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in locales'.
  $permissions['delete terms in locales'] = array(
    'name' => 'delete terms in locales',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any dmc_record content'.
  $permissions['edit any dmc_record content'] = array(
    'name' => 'edit any dmc_record content',
    'roles' => array(
      'Automated Tools' => 'Automated Tools',
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own dmc_record content'.
  $permissions['edit own dmc_record content'] = array(
    'name' => 'edit own dmc_record content',
    'roles' => array(
      'Automated Tools' => 'Automated Tools',
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in channel'.
  $permissions['edit terms in channel'] = array(
    'name' => 'edit terms in channel',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in locales'.
  $permissions['edit terms in locales'] = array(
    'name' => 'edit terms in locales',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'import dmc_csv feeds'.
  $permissions['import dmc_csv feeds'] = array(
    'name' => 'import dmc_csv feeds',
    'roles' => array(
      'Automated Tools' => 'Automated Tools',
      'Editor' => 'Editor',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'Editor' => 'Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'unlock dmc_csv feeds'.
  $permissions['unlock dmc_csv feeds'] = array(
    'name' => 'unlock dmc_csv feeds',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'Editor' => 'Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'Automated Tools' => 'Automated Tools',
      'Editor' => 'Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
