<?php
/**
 * @file
 * dmc_xml.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function dmc_xml_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'dmc_csv';
  $feeds_importer->config = array(
    'name' => 'DMC csv',
    'description' => 'upload CSV file with records',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '3',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Channel',
            'target' => 'field_channel',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Locale',
            'target' => 'field_locale',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'upn',
            'target' => 'field_upn',
            'unique' => 1,
          ),
          3 => array(
            'source' => 'PROMO',
            'target' => 'title',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Version',
            'target' => 'field_version',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Duration',
            'target' => 'field_duration',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Aspect Ratio',
            'target' => 'field_aspect_ratio',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Duration',
            'target' => 'field_tc_out0',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'dmc_record',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['dmc_csv'] = $feeds_importer;

  return $export;
}
