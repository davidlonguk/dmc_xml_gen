<?php
/**
 * @file
 * dmc_xml.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function dmc_xml_default_rules_configuration() {
  $items = array();
  $items['rules_pre_fill_first_segment'] = entity_import('rules_config', '{ "rules_pre_fill_first_segment" : {
      "LABEL" : "pre-fill first segment",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : {
        "node_update--dmc_record" : { "bundle" : "dmc_record" },
        "node_view--dmc_record" : { "bundle" : "dmc_record" }
      },
      "IF" : [
        { "data_is_empty" : { "data" : [ "node:field-segment:0:field-sequence" ] } },
        { "NOT data_is_empty" : { "data" : [ "node:field-duration" ] } }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:field-segment:0:field-sequence" ], "value" : "1" } },
        { "data_set" : {
            "data" : [ "node:field-segment:0:field-tc-out" ],
            "value" : [ "node:field-duration" ]
          }
        }
      ]
    }
  }');
  return $items;
}
