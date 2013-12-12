<?php
/**
 * @file
 * dmc_xml.default_field_validation_rules.inc
 */

/**
 * Implements hook_default_field_validation_rule().
 */
function dmc_xml_default_field_validation_rule() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'unique ID';
  $rule->name = 'unique_id';
  $rule->field_name = 'field_upn';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'dmc_record';
  $rule->validator = 'field_validation_unique_validator';
  $rule->settings = array(
    'data' => 'bundle',
    'bypass' => 0,
    'roles' => array(
      2 => 0,
      3 => 0,
    ),
    'errors' => 0,
  );
  $rule->error_message = 'This UPN ID [value] is already in use here [existing-entity-link]. You must be unique.';
  $export['unique_id'] = $rule;

  return $export;
}
