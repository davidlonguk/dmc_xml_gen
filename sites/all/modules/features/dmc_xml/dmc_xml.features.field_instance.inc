<?php
/**
 * @file
 * dmc_xml.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function dmc_xml_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-dmc_record-field_aspect_ratio'
  $field_instances['node-dmc_record-field_aspect_ratio'] = array(
    'bundle' => 'dmc_record',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_aspect_ratio',
    'label' => 'aspect_ratio',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-dmc_record-field_channel'
  $field_instances['node-dmc_record-field_channel'] = array(
    'bundle' => 'dmc_record',
    'default_value' => array(
      0 => array(
        'tid' => 25,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_channel',
    'label' => 'Channel',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-dmc_record-field_duration'
  $field_instances['node-dmc_record-field_duration'] = array(
    'bundle' => 'dmc_record',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'hms_field',
        'settings' => array(
          'format' => 'h:mm:ss',
          'leading_zero' => 1,
        ),
        'type' => 'hms_default_formatter',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_duration',
    'label' => 'duration',
    'required' => 0,
    'settings' => array(
      'default_description' => 1,
      'format' => 's',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'hms_field',
      'settings' => array(),
      'type' => 'hms_default_widget',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-dmc_record-field_locale'
  $field_instances['node-dmc_record-field_locale'] = array(
    'bundle' => 'dmc_record',
    'default_value' => array(
      0 => array(
        'tid' => 26,
        'vid' => 3,
        'name' => 'unknown',
        'description' => '',
        'format' => 'filtered_html',
        'weight' => 0,
        'vocabulary_machine_name' => 'locales',
        'rdf_mapping' => array(
          'description' => array(
            'predicates' => array(
              0 => 'skos:definition',
            ),
          ),
          'name' => array(
            'predicates' => array(
              0 => 'rdfs:label',
              1 => 'skos:prefLabel',
            ),
          ),
          'parent' => array(
            'predicates' => array(
              0 => 'skos:broader',
            ),
            'type' => 'rel',
          ),
          'rdftype' => array(
            0 => 'skos:Concept',
          ),
          'vid' => array(
            'predicates' => array(
              0 => 'skos:inScheme',
            ),
            'type' => 'rel',
          ),
        ),
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_locale',
    'label' => 'Locale',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-dmc_record-field_sequence0'
  $field_instances['node-dmc_record-field_sequence0'] = array(
    'bundle' => 'dmc_record',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sequence0',
    'label' => 'sequence',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-dmc_record-field_sequence1'
  $field_instances['node-dmc_record-field_sequence1'] = array(
    'bundle' => 'dmc_record',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sequence1',
    'label' => 'sequence2',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 25,
    ),
  );

  // Exported field_instance: 'node-dmc_record-field_sequence2'
  $field_instances['node-dmc_record-field_sequence2'] = array(
    'bundle' => 'dmc_record',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sequence2',
    'label' => 'sequence3',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-dmc_record-field_sequence3'
  $field_instances['node-dmc_record-field_sequence3'] = array(
    'bundle' => 'dmc_record',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 17,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sequence3',
    'label' => 'sequence4',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-dmc_record-field_sequence4'
  $field_instances['node-dmc_record-field_sequence4'] = array(
    'bundle' => 'dmc_record',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 20,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sequence4',
    'label' => 'sequence5',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-dmc_record-field_sequence5'
  $field_instances['node-dmc_record-field_sequence5'] = array(
    'bundle' => 'dmc_record',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 23,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sequence5',
    'label' => 'sequence6',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-dmc_record-field_tc_in0'
  $field_instances['node-dmc_record-field_tc_in0'] = array(
    'bundle' => 'dmc_record',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'hms_field',
        'settings' => array(
          'format' => 'h:mm:ss',
          'leading_zero' => 1,
        ),
        'type' => 'hms_default_formatter',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tc_in0',
    'label' => 'tc_in',
    'required' => 0,
    'settings' => array(
      'default_description' => 1,
      'format' => 's',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'hms_field',
      'settings' => array(),
      'type' => 'hms_default_widget',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-dmc_record-field_tc_in1'
  $field_instances['node-dmc_record-field_tc_in1'] = array(
    'bundle' => 'dmc_record',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'hms_field',
        'settings' => array(
          'format' => 'h:mm:ss',
          'leading_zero' => 1,
        ),
        'type' => 'hms_default_formatter',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tc_in1',
    'label' => 'tc_in2',
    'required' => 0,
    'settings' => array(
      'default_description' => 1,
      'format' => 's',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'hms_field',
      'settings' => array(),
      'type' => 'hms_default_widget',
      'weight' => 26,
    ),
  );

  // Exported field_instance: 'node-dmc_record-field_tc_in2'
  $field_instances['node-dmc_record-field_tc_in2'] = array(
    'bundle' => 'dmc_record',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'hms_field',
        'settings' => array(
          'format' => 'h:mm:ss',
          'leading_zero' => 1,
        ),
        'type' => 'hms_default_formatter',
        'weight' => 15,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tc_in2',
    'label' => 'tc_in3',
    'required' => 0,
    'settings' => array(
      'default_description' => 1,
      'format' => 's',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'hms_field',
      'settings' => array(),
      'type' => 'hms_default_widget',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-dmc_record-field_tc_in3'
  $field_instances['node-dmc_record-field_tc_in3'] = array(
    'bundle' => 'dmc_record',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'hms_field',
        'settings' => array(
          'format' => 'h:mm:ss',
          'leading_zero' => 1,
        ),
        'type' => 'hms_default_formatter',
        'weight' => 18,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tc_in3',
    'label' => 'tc_in4',
    'required' => 0,
    'settings' => array(
      'default_description' => 1,
      'format' => 'h:mm:ss',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'hms_field',
      'settings' => array(),
      'type' => 'hms_default_widget',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-dmc_record-field_tc_in4'
  $field_instances['node-dmc_record-field_tc_in4'] = array(
    'bundle' => 'dmc_record',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'hms_field',
        'settings' => array(
          'format' => 'h:mm:ss',
          'leading_zero' => 1,
        ),
        'type' => 'hms_default_formatter',
        'weight' => 21,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tc_in4',
    'label' => 'tc_in5',
    'required' => 0,
    'settings' => array(
      'default_description' => 1,
      'format' => 's',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'hms_field',
      'settings' => array(),
      'type' => 'hms_default_widget',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-dmc_record-field_tc_in5'
  $field_instances['node-dmc_record-field_tc_in5'] = array(
    'bundle' => 'dmc_record',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'hms_field',
        'settings' => array(
          'format' => 'h:mm:ss',
          'leading_zero' => 1,
        ),
        'type' => 'hms_default_formatter',
        'weight' => 24,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tc_in5',
    'label' => 'tc_in6',
    'required' => 0,
    'settings' => array(
      'default_description' => 1,
      'format' => 's',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'hms_field',
      'settings' => array(),
      'type' => 'hms_default_widget',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-dmc_record-field_tc_out0'
  $field_instances['node-dmc_record-field_tc_out0'] = array(
    'bundle' => 'dmc_record',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'hms_field',
        'settings' => array(
          'format' => 'h:mm:ss',
          'leading_zero' => 1,
        ),
        'type' => 'hms_default_formatter',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tc_out0',
    'label' => 'tc_out',
    'required' => 0,
    'settings' => array(
      'default_description' => 1,
      'format' => 's',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'hms_field',
      'settings' => array(),
      'type' => 'hms_default_widget',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-dmc_record-field_tc_out1'
  $field_instances['node-dmc_record-field_tc_out1'] = array(
    'bundle' => 'dmc_record',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'hms_field',
        'settings' => array(
          'format' => 'h:mm:ss',
          'leading_zero' => 1,
        ),
        'type' => 'hms_default_formatter',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tc_out1',
    'label' => 'tc_out2',
    'required' => 0,
    'settings' => array(
      'default_description' => 1,
      'format' => 's',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'hms_field',
      'settings' => array(),
      'type' => 'hms_default_widget',
      'weight' => 27,
    ),
  );

  // Exported field_instance: 'node-dmc_record-field_tc_out2'
  $field_instances['node-dmc_record-field_tc_out2'] = array(
    'bundle' => 'dmc_record',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'hms_field',
        'settings' => array(
          'format' => 'h:mm:ss',
          'leading_zero' => 1,
        ),
        'type' => 'hms_default_formatter',
        'weight' => 16,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tc_out2',
    'label' => 'tc_out3',
    'required' => 0,
    'settings' => array(
      'default_description' => 1,
      'format' => 'h:mm:ss',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'hms_field',
      'settings' => array(),
      'type' => 'hms_default_widget',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-dmc_record-field_tc_out3'
  $field_instances['node-dmc_record-field_tc_out3'] = array(
    'bundle' => 'dmc_record',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'hms_field',
        'settings' => array(
          'format' => 'h:mm:ss',
          'leading_zero' => 1,
        ),
        'type' => 'hms_default_formatter',
        'weight' => 19,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tc_out3',
    'label' => 'tc_out4',
    'required' => 0,
    'settings' => array(
      'default_description' => 1,
      'format' => 's',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'hms_field',
      'settings' => array(),
      'type' => 'hms_default_widget',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-dmc_record-field_tc_out4'
  $field_instances['node-dmc_record-field_tc_out4'] = array(
    'bundle' => 'dmc_record',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'hms_field',
        'settings' => array(
          'format' => 'h:mm:ss',
          'leading_zero' => 1,
        ),
        'type' => 'hms_default_formatter',
        'weight' => 22,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tc_out4',
    'label' => 'tc_out5',
    'required' => 0,
    'settings' => array(
      'default_description' => 1,
      'format' => 's',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'hms_field',
      'settings' => array(),
      'type' => 'hms_default_widget',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-dmc_record-field_tc_out5'
  $field_instances['node-dmc_record-field_tc_out5'] = array(
    'bundle' => 'dmc_record',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'hms_field',
        'settings' => array(
          'format' => 'h:mm:ss',
          'leading_zero' => 1,
        ),
        'type' => 'hms_default_formatter',
        'weight' => 25,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tc_out5',
    'label' => 'tc_out6',
    'required' => 0,
    'settings' => array(
      'default_description' => 1,
      'format' => 's',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'hms_field',
      'settings' => array(),
      'type' => 'hms_default_widget',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-dmc_record-field_upn'
  $field_instances['node-dmc_record-field_upn'] = array(
    'bundle' => 'dmc_record',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_upn',
    'label' => 'upn',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-dmc_record-field_version'
  $field_instances['node-dmc_record-field_version'] = array(
    'bundle' => 'dmc_record',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_version',
    'label' => 'version',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Channel');
  t('Locale');
  t('aspect_ratio');
  t('duration');
  t('sequence');
  t('sequence2');
  t('sequence3');
  t('sequence4');
  t('sequence5');
  t('sequence6');
  t('tc_in');
  t('tc_in2');
  t('tc_in3');
  t('tc_in4');
  t('tc_in5');
  t('tc_in6');
  t('tc_out');
  t('tc_out2');
  t('tc_out3');
  t('tc_out4');
  t('tc_out5');
  t('tc_out6');
  t('upn');
  t('version');

  return $field_instances;
}
