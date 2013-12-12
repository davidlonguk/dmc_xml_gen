<?php
/**
 * @file
 * dmc_xml.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function dmc_xml_user_default_roles() {
  $roles = array();

  // Exported role: Automated Tools.
  $roles['Automated Tools'] = array(
    'name' => 'Automated Tools',
    'weight' => 3,
  );

  // Exported role: Editor.
  $roles['Editor'] = array(
    'name' => 'Editor',
    'weight' => 4,
  );

  return $roles;
}
