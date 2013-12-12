<?php
/**
 * @file
 * dmc_xml.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function dmc_xml_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_segment2|node|dmc_record|form';
  $field_group->group_name = 'group_segment2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dmc_record';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_segments';
  $field_group->data = array(
    'label' => 'segment2',
    'weight' => '8',
    'children' => array(
      0 => 'field_sequence1',
      1 => 'field_tc_in1',
      2 => 'field_tc_out1',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-segment2 field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_segment2|node|dmc_record|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_segment3|node|dmc_record|form';
  $field_group->group_name = 'group_segment3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dmc_record';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_segments';
  $field_group->data = array(
    'label' => 'segment3',
    'weight' => '9',
    'children' => array(
      0 => 'field_sequence2',
      1 => 'field_tc_in2',
      2 => 'field_tc_out2',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-segment3 field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_segment3|node|dmc_record|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_segment4|node|dmc_record|form';
  $field_group->group_name = 'group_segment4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dmc_record';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_segments';
  $field_group->data = array(
    'label' => 'segment4',
    'weight' => '10',
    'children' => array(
      0 => 'field_sequence3',
      1 => 'field_tc_in3',
      2 => 'field_tc_out3',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-segment4 field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_segment4|node|dmc_record|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_segment5|node|dmc_record|form';
  $field_group->group_name = 'group_segment5';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dmc_record';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_segments';
  $field_group->data = array(
    'label' => 'segment5',
    'weight' => '11',
    'children' => array(
      0 => 'field_sequence4',
      1 => 'field_tc_in4',
      2 => 'field_tc_out4',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-segment5 field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_segment5|node|dmc_record|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_segment6|node|dmc_record|form';
  $field_group->group_name = 'group_segment6';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dmc_record';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_segments';
  $field_group->data = array(
    'label' => 'segment6',
    'weight' => '12',
    'children' => array(
      0 => 'field_sequence5',
      1 => 'field_tc_in5',
      2 => 'field_tc_out5',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-segment6 field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_segment6|node|dmc_record|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_segments|node|dmc_record|form';
  $field_group->group_name = 'group_segments';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dmc_record';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'segments',
    'weight' => '7',
    'children' => array(
      0 => 'group_segment',
      1 => 'group_segment2',
      2 => 'group_segment3',
      3 => 'group_segment4',
      4 => 'group_segment5',
      5 => 'group_segment6',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-segments field-group-tabs',
      ),
    ),
  );
  $export['group_segments|node|dmc_record|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_segment|node|dmc_record|form';
  $field_group->group_name = 'group_segment';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dmc_record';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_segments';
  $field_group->data = array(
    'label' => 'segment',
    'weight' => '7',
    'children' => array(
      0 => 'field_sequence0',
      1 => 'field_tc_in0',
      2 => 'field_tc_out0',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-segment field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_segment|node|dmc_record|form'] = $field_group;

  return $export;
}
