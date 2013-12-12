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
  $view->name = 'export_xml';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Export XML';
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
  /* Relationship: segment */
  $handler->display->display_options['relationships']['field_segment_value']['id'] = 'field_segment_value';
  $handler->display->display_options['relationships']['field_segment_value']['table'] = 'field_data_field_segment';
  $handler->display->display_options['relationships']['field_segment_value']['field'] = 'field_segment_value';
  $handler->display->display_options['relationships']['field_segment_value']['ui_name'] = 'segment';
  $handler->display->display_options['relationships']['field_segment_value']['label'] = 'segment';
  $handler->display->display_options['relationships']['field_segment_value']['delta'] = '-1';
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
  /* Field: Content: segment */
  $handler->display->display_options['fields']['field_segment']['id'] = 'field_segment';
  $handler->display->display_options['fields']['field_segment']['table'] = 'field_data_field_segment';
  $handler->display->display_options['fields']['field_segment']['field'] = 'field_segment';
  $handler->display->display_options['fields']['field_segment']['alter']['text'] = '[field_segment-value]';
  $handler->display->display_options['fields']['field_segment']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_segment']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_segment']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_segment']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_segment']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_segment']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_segment']['separator'] = ' ';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'dmc-%view-%timestamp-full.xml';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['style_options']['transform_type'] = 'underline';
  $handler->display->display_options['path'] = 'export-xml';
  $handler->display->display_options['use_batch'] = 'batch';
  $export['export_xml'] = $view;

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
    13 => '13',
    9 => '9',
    8 => '8',
    12 => '12',
    6 => '6',
    7 => '7',
    11 => '11',
    10 => '10',
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
