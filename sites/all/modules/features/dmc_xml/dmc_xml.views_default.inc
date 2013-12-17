<?php
/**
 * @file
 * dmc_xml.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function dmc_xml_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'export_xml_v2';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Export XML v2';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Export XML';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: upn */
  $handler->display->display_options['fields']['field_upn']['id'] = 'field_upn';
  $handler->display->display_options['fields']['field_upn']['table'] = 'field_data_field_upn';
  $handler->display->display_options['fields']['field_upn']['field'] = 'field_upn';
  $handler->display->display_options['fields']['field_upn']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: version */
  $handler->display->display_options['fields']['field_version']['id'] = 'field_version';
  $handler->display->display_options['fields']['field_version']['table'] = 'field_data_field_version';
  $handler->display->display_options['fields']['field_version']['field'] = 'field_version';
  $handler->display->display_options['fields']['field_version']['type'] = 'text_plain';
  /* Field: Content: duration */
  $handler->display->display_options['fields']['field_duration']['id'] = 'field_duration';
  $handler->display->display_options['fields']['field_duration']['table'] = 'field_data_field_duration';
  $handler->display->display_options['fields']['field_duration']['field'] = 'field_duration';
  $handler->display->display_options['fields']['field_duration']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_duration']['alter']['text'] = '[field_duration-value]';
  $handler->display->display_options['fields']['field_duration']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_duration']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_duration']['settings'] = array(
    'format' => 'h:mm:ss',
    'leading_zero' => 1,
  );
  /* Field: Content: aspect_ratio */
  $handler->display->display_options['fields']['field_aspect_ratio']['id'] = 'field_aspect_ratio';
  $handler->display->display_options['fields']['field_aspect_ratio']['table'] = 'field_data_field_aspect_ratio';
  $handler->display->display_options['fields']['field_aspect_ratio']['field'] = 'field_aspect_ratio';
  /* Field: Content: sequence */
  $handler->display->display_options['fields']['field_sequence0']['id'] = 'field_sequence0';
  $handler->display->display_options['fields']['field_sequence0']['table'] = 'field_data_field_sequence0';
  $handler->display->display_options['fields']['field_sequence0']['field'] = 'field_sequence0';
  $handler->display->display_options['fields']['field_sequence0']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sequence0']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_sequence0']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_sequence0']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: tc_in */
  $handler->display->display_options['fields']['field_tc_in0']['id'] = 'field_tc_in0';
  $handler->display->display_options['fields']['field_tc_in0']['table'] = 'field_data_field_tc_in0';
  $handler->display->display_options['fields']['field_tc_in0']['field'] = 'field_tc_in0';
  $handler->display->display_options['fields']['field_tc_in0']['settings'] = array(
    'format' => 'h:mm:ss',
    'leading_zero' => 1,
  );
  /* Field: Content: tc_out */
  $handler->display->display_options['fields']['field_tc_out0']['id'] = 'field_tc_out0';
  $handler->display->display_options['fields']['field_tc_out0']['table'] = 'field_data_field_tc_out0';
  $handler->display->display_options['fields']['field_tc_out0']['field'] = 'field_tc_out0';
  $handler->display->display_options['fields']['field_tc_out0']['settings'] = array(
    'format' => 'h:mm:ss',
    'leading_zero' => 1,
  );
  /* Field: Content: sequence2 */
  $handler->display->display_options['fields']['field_sequence1']['id'] = 'field_sequence1';
  $handler->display->display_options['fields']['field_sequence1']['table'] = 'field_data_field_sequence1';
  $handler->display->display_options['fields']['field_sequence1']['field'] = 'field_sequence1';
  $handler->display->display_options['fields']['field_sequence1']['label'] = 'sequence';
  $handler->display->display_options['fields']['field_sequence1']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_sequence1']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: tc_in2 */
  $handler->display->display_options['fields']['field_tc_in1']['id'] = 'field_tc_in1';
  $handler->display->display_options['fields']['field_tc_in1']['table'] = 'field_data_field_tc_in1';
  $handler->display->display_options['fields']['field_tc_in1']['field'] = 'field_tc_in1';
  $handler->display->display_options['fields']['field_tc_in1']['label'] = 'tc_in';
  $handler->display->display_options['fields']['field_tc_in1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_tc_in1']['settings'] = array(
    'format' => 'h:mm:ss',
    'leading_zero' => 1,
  );
  /* Field: Content: tc_out2 */
  $handler->display->display_options['fields']['field_tc_out1']['id'] = 'field_tc_out1';
  $handler->display->display_options['fields']['field_tc_out1']['table'] = 'field_data_field_tc_out1';
  $handler->display->display_options['fields']['field_tc_out1']['field'] = 'field_tc_out1';
  $handler->display->display_options['fields']['field_tc_out1']['label'] = 'tc_out';
  $handler->display->display_options['fields']['field_tc_out1']['settings'] = array(
    'format' => 'h:mm:ss',
    'leading_zero' => 1,
  );
  /* Field: Content: sequence3 */
  $handler->display->display_options['fields']['field_sequence2']['id'] = 'field_sequence2';
  $handler->display->display_options['fields']['field_sequence2']['table'] = 'field_data_field_sequence2';
  $handler->display->display_options['fields']['field_sequence2']['field'] = 'field_sequence2';
  $handler->display->display_options['fields']['field_sequence2']['label'] = 'sequence';
  $handler->display->display_options['fields']['field_sequence2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sequence2']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_sequence2']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_sequence2']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: tc_in3 */
  $handler->display->display_options['fields']['field_tc_in2']['id'] = 'field_tc_in2';
  $handler->display->display_options['fields']['field_tc_in2']['table'] = 'field_data_field_tc_in2';
  $handler->display->display_options['fields']['field_tc_in2']['field'] = 'field_tc_in2';
  $handler->display->display_options['fields']['field_tc_in2']['label'] = 'tc_in';
  $handler->display->display_options['fields']['field_tc_in2']['settings'] = array(
    'format' => 'h:mm:ss',
    'leading_zero' => 1,
  );
  /* Field: Content: tc_out3 */
  $handler->display->display_options['fields']['field_tc_out2']['id'] = 'field_tc_out2';
  $handler->display->display_options['fields']['field_tc_out2']['table'] = 'field_data_field_tc_out2';
  $handler->display->display_options['fields']['field_tc_out2']['field'] = 'field_tc_out2';
  $handler->display->display_options['fields']['field_tc_out2']['label'] = 'tc_out';
  $handler->display->display_options['fields']['field_tc_out2']['settings'] = array(
    'format' => 'h:mm:ss',
    'leading_zero' => 1,
  );
  /* Field: Content: sequence4 */
  $handler->display->display_options['fields']['field_sequence3']['id'] = 'field_sequence3';
  $handler->display->display_options['fields']['field_sequence3']['table'] = 'field_data_field_sequence3';
  $handler->display->display_options['fields']['field_sequence3']['field'] = 'field_sequence3';
  $handler->display->display_options['fields']['field_sequence3']['label'] = 'sequence';
  $handler->display->display_options['fields']['field_sequence3']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_sequence3']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_sequence3']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: tc_in4 */
  $handler->display->display_options['fields']['field_tc_in3']['id'] = 'field_tc_in3';
  $handler->display->display_options['fields']['field_tc_in3']['table'] = 'field_data_field_tc_in3';
  $handler->display->display_options['fields']['field_tc_in3']['field'] = 'field_tc_in3';
  $handler->display->display_options['fields']['field_tc_in3']['label'] = 'tc_in';
  $handler->display->display_options['fields']['field_tc_in3']['settings'] = array(
    'format' => 'h:mm:ss',
    'leading_zero' => 1,
  );
  /* Field: Content: tc_out4 */
  $handler->display->display_options['fields']['field_tc_out3']['id'] = 'field_tc_out3';
  $handler->display->display_options['fields']['field_tc_out3']['table'] = 'field_data_field_tc_out3';
  $handler->display->display_options['fields']['field_tc_out3']['field'] = 'field_tc_out3';
  $handler->display->display_options['fields']['field_tc_out3']['label'] = 'tc_out';
  $handler->display->display_options['fields']['field_tc_out3']['settings'] = array(
    'format' => 'h:mm:ss',
    'leading_zero' => 1,
  );
  /* Field: Content: sequence5 */
  $handler->display->display_options['fields']['field_sequence4']['id'] = 'field_sequence4';
  $handler->display->display_options['fields']['field_sequence4']['table'] = 'field_data_field_sequence4';
  $handler->display->display_options['fields']['field_sequence4']['field'] = 'field_sequence4';
  $handler->display->display_options['fields']['field_sequence4']['label'] = 'sequence';
  $handler->display->display_options['fields']['field_sequence4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sequence4']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_sequence4']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_sequence4']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: tc_in5 */
  $handler->display->display_options['fields']['field_tc_in4']['id'] = 'field_tc_in4';
  $handler->display->display_options['fields']['field_tc_in4']['table'] = 'field_data_field_tc_in4';
  $handler->display->display_options['fields']['field_tc_in4']['field'] = 'field_tc_in4';
  $handler->display->display_options['fields']['field_tc_in4']['label'] = 'tc_in';
  $handler->display->display_options['fields']['field_tc_in4']['settings'] = array(
    'format' => 'h:mm:ss',
    'leading_zero' => 1,
  );
  /* Field: Content: tc_out5 */
  $handler->display->display_options['fields']['field_tc_out4']['id'] = 'field_tc_out4';
  $handler->display->display_options['fields']['field_tc_out4']['table'] = 'field_data_field_tc_out4';
  $handler->display->display_options['fields']['field_tc_out4']['field'] = 'field_tc_out4';
  $handler->display->display_options['fields']['field_tc_out4']['label'] = 'tc_out';
  $handler->display->display_options['fields']['field_tc_out4']['settings'] = array(
    'format' => 'h:mm:ss',
    'leading_zero' => 1,
  );
  /* Field: Content: sequence6 */
  $handler->display->display_options['fields']['field_sequence5']['id'] = 'field_sequence5';
  $handler->display->display_options['fields']['field_sequence5']['table'] = 'field_data_field_sequence5';
  $handler->display->display_options['fields']['field_sequence5']['field'] = 'field_sequence5';
  $handler->display->display_options['fields']['field_sequence5']['label'] = 'sequence';
  $handler->display->display_options['fields']['field_sequence5']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sequence5']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_sequence5']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: tc_in6 */
  $handler->display->display_options['fields']['field_tc_in5']['id'] = 'field_tc_in5';
  $handler->display->display_options['fields']['field_tc_in5']['table'] = 'field_data_field_tc_in5';
  $handler->display->display_options['fields']['field_tc_in5']['field'] = 'field_tc_in5';
  $handler->display->display_options['fields']['field_tc_in5']['label'] = 'tc_in';
  $handler->display->display_options['fields']['field_tc_in5']['settings'] = array(
    'format' => 'h:mm:ss',
    'leading_zero' => 1,
  );
  /* Field: Content: tc_out6 */
  $handler->display->display_options['fields']['field_tc_out5']['id'] = 'field_tc_out5';
  $handler->display->display_options['fields']['field_tc_out5']['table'] = 'field_data_field_tc_out5';
  $handler->display->display_options['fields']['field_tc_out5']['field'] = 'field_tc_out5';
  $handler->display->display_options['fields']['field_tc_out5']['label'] = 'tc_out';
  $handler->display->display_options['fields']['field_tc_out5']['settings'] = array(
    'format' => 'h:mm:ss',
    'leading_zero' => 1,
  );
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['filename'] = 'dmc-%view-%timestamp-full.xml';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['style_options']['transform_type'] = 'underline';
  $handler->display->display_options['path'] = 'export-xml2';
  $handler->display->display_options['use_batch'] = 'batch';
  $export['export_xml_v2'] = $view;

  $view = new view();
  $view->name = 'view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'View';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_upn' => 'field_upn',
    'title' => 'title',
    'field_version' => 'field_version',
    'field_duration' => 'field_duration',
    'field_aspect_ratio' => 'field_aspect_ratio',
    'changed' => 'changed',
  );
  $handler->display->display_options['style_options']['default'] = 'changed';
  $handler->display->display_options['style_options']['info'] = array(
    'field_upn' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_version' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_duration' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aspect_ratio' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: upn */
  $handler->display->display_options['fields']['field_upn']['id'] = 'field_upn';
  $handler->display->display_options['fields']['field_upn']['table'] = 'field_data_field_upn';
  $handler->display->display_options['fields']['field_upn']['field'] = 'field_upn';
  $handler->display->display_options['fields']['field_upn']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: version */
  $handler->display->display_options['fields']['field_version']['id'] = 'field_version';
  $handler->display->display_options['fields']['field_version']['table'] = 'field_data_field_version';
  $handler->display->display_options['fields']['field_version']['field'] = 'field_version';
  $handler->display->display_options['fields']['field_version']['type'] = 'text_plain';
  /* Field: Content: duration */
  $handler->display->display_options['fields']['field_duration']['id'] = 'field_duration';
  $handler->display->display_options['fields']['field_duration']['table'] = 'field_data_field_duration';
  $handler->display->display_options['fields']['field_duration']['field'] = 'field_duration';
  $handler->display->display_options['fields']['field_duration']['settings'] = array(
    'format' => 'h:mm:ss',
    'leading_zero' => 1,
  );
  /* Field: Content: aspect_ratio */
  $handler->display->display_options['fields']['field_aspect_ratio']['id'] = 'field_aspect_ratio';
  $handler->display->display_options['fields']['field_aspect_ratio']['table'] = 'field_data_field_aspect_ratio';
  $handler->display->display_options['fields']['field_aspect_ratio']['field'] = 'field_aspect_ratio';
  $handler->display->display_options['fields']['field_aspect_ratio']['type'] = 'text_plain';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dmc_record' => 'dmc_record',
  );
  /* Filter criterion: Content: Channel (field_channel) */
  $handler->display->display_options['filters']['field_channel_tid']['id'] = 'field_channel_tid';
  $handler->display->display_options['filters']['field_channel_tid']['table'] = 'field_data_field_channel';
  $handler->display->display_options['filters']['field_channel_tid']['field'] = 'field_channel_tid';
  $handler->display->display_options['filters']['field_channel_tid']['value'] = array(
    5 => '5',
    2 => '2',
    4 => '4',
    1 => '1',
    3 => '3',
    25 => '25',
  );
  $handler->display->display_options['filters']['field_channel_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_channel_tid']['expose']['operator_id'] = 'field_channel_tid_op';
  $handler->display->display_options['filters']['field_channel_tid']['expose']['label'] = 'Channel (field_channel)';
  $handler->display->display_options['filters']['field_channel_tid']['expose']['operator'] = 'field_channel_tid_op';
  $handler->display->display_options['filters']['field_channel_tid']['expose']['identifier'] = 'field_channel_tid';
  $handler->display->display_options['filters']['field_channel_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_channel_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_channel_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_channel_tid']['vocabulary'] = 'channel';
  /* Filter criterion: Content: Locale (field_locale) */
  $handler->display->display_options['filters']['field_locale_tid']['id'] = 'field_locale_tid';
  $handler->display->display_options['filters']['field_locale_tid']['table'] = 'field_data_field_locale';
  $handler->display->display_options['filters']['field_locale_tid']['field'] = 'field_locale_tid';
  $handler->display->display_options['filters']['field_locale_tid']['value'] = array(
    20 => '20',
    13 => '13',
    18 => '18',
    24 => '24',
    16 => '16',
    14 => '14',
    9 => '9',
    19 => '19',
    8 => '8',
    21 => '21',
    12 => '12',
    22 => '22',
    6 => '6',
    7 => '7',
    17 => '17',
    11 => '11',
    10 => '10',
    15 => '15',
    26 => '26',
  );
  $handler->display->display_options['filters']['field_locale_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_locale_tid']['expose']['operator_id'] = 'field_locale_tid_op';
  $handler->display->display_options['filters']['field_locale_tid']['expose']['label'] = 'Locale (field_locale)';
  $handler->display->display_options['filters']['field_locale_tid']['expose']['operator'] = 'field_locale_tid_op';
  $handler->display->display_options['filters']['field_locale_tid']['expose']['identifier'] = 'field_locale_tid';
  $handler->display->display_options['filters']['field_locale_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_locale_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_locale_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_locale_tid']['vocabulary'] = 'locales';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: upn (field_upn) */
  $handler->display->display_options['filters']['field_upn_value']['id'] = 'field_upn_value';
  $handler->display->display_options['filters']['field_upn_value']['table'] = 'field_data_field_upn';
  $handler->display->display_options['filters']['field_upn_value']['field'] = 'field_upn_value';
  $handler->display->display_options['filters']['field_upn_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_upn_value']['expose']['operator_id'] = 'field_upn_value_op';
  $handler->display->display_options['filters']['field_upn_value']['expose']['label'] = 'upn';
  $handler->display->display_options['filters']['field_upn_value']['expose']['operator'] = 'field_upn_value_op';
  $handler->display->display_options['filters']['field_upn_value']['expose']['identifier'] = 'field_upn_value';
  $handler->display->display_options['filters']['field_upn_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'view';
  $export['view'] = $view;

  return $export;
}
