<?php
/**
 * @file
 * event_stat.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function event_stat_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'event_stat';
  $view->description = 'Statistikker i csv format af arrangementer';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'event_stat';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'event_stat';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Kategori */
  $handler->display->display_options['fields']['field_kategori']['id'] = 'field_kategori';
  $handler->display->display_options['fields']['field_kategori']['table'] = 'field_data_field_kategori';
  $handler->display->display_options['fields']['field_kategori']['field'] = 'field_kategori';
  $handler->display->display_options['fields']['field_kategori']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kategori']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Arrangementstype */
  $handler->display->display_options['fields']['field_arrangementstype']['id'] = 'field_arrangementstype';
  $handler->display->display_options['fields']['field_arrangementstype']['table'] = 'field_data_field_arrangementstype';
  $handler->display->display_options['fields']['field_arrangementstype']['field'] = 'field_arrangementstype';
  $handler->display->display_options['fields']['field_arrangementstype']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Target */
  $handler->display->display_options['fields']['field_ding_event_target']['id'] = 'field_ding_event_target';
  $handler->display->display_options['fields']['field_ding_event_target']['table'] = 'field_data_field_ding_event_target';
  $handler->display->display_options['fields']['field_ding_event_target']['field'] = 'field_ding_event_target';
  $handler->display->display_options['fields']['field_ding_event_target']['label'] = 'Målgruppe';
  $handler->display->display_options['fields']['field_ding_event_target']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_target']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_target']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: Antal deltagere */
  $handler->display->display_options['fields']['field_antal_deltagere']['id'] = 'field_antal_deltagere';
  $handler->display->display_options['fields']['field_antal_deltagere']['table'] = 'field_data_field_antal_deltagere';
  $handler->display->display_options['fields']['field_antal_deltagere']['field'] = 'field_antal_deltagere';
  $handler->display->display_options['fields']['field_antal_deltagere']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_antal_deltagere']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Felt: Indhold: Library */
  $handler->display->display_options['fields']['field_ding_event_library']['id'] = 'field_ding_event_library';
  $handler->display->display_options['fields']['field_ding_event_library']['table'] = 'field_data_field_ding_event_library';
  $handler->display->display_options['fields']['field_ding_event_library']['field'] = 'field_ding_event_library';
  $handler->display->display_options['fields']['field_ding_event_library']['label'] = 'Afdeling';
  $handler->display->display_options['fields']['field_ding_event_library']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_library']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_library']['empty'] = 'Andet...';
  $handler->display->display_options['fields']['field_ding_event_library']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_library']['click_sort_column'] = 'gid';
  /* Felt: Indhold: Location */
  $handler->display->display_options['fields']['field_ding_event_location']['id'] = 'field_ding_event_location';
  $handler->display->display_options['fields']['field_ding_event_location']['table'] = 'field_data_field_ding_event_location';
  $handler->display->display_options['fields']['field_ding_event_location']['field'] = 'field_ding_event_location';
  $handler->display->display_options['fields']['field_ding_event_location']['label'] = 'Lokation';
  $handler->display->display_options['fields']['field_ding_event_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ding_event_location']['alter']['text'] = '[field_ding_event_location-name_line], [field_ding_event_location-thoroughfare], [field_ding_event_location-postal_code] [field_ding_event_location-locality]';
  $handler->display->display_options['fields']['field_ding_event_location']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_ding_event_location']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Felt: Indhold: Antal udervisere */
  $handler->display->display_options['fields']['field_antal_udervisere']['id'] = 'field_antal_udervisere';
  $handler->display->display_options['fields']['field_antal_udervisere']['table'] = 'field_data_field_antal_udervisere';
  $handler->display->display_options['fields']['field_antal_udervisere']['field'] = 'field_antal_udervisere';
  $handler->display->display_options['fields']['field_antal_udervisere']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Felt: Indhold: Date */
  $handler->display->display_options['fields']['field_ding_event_date']['id'] = 'field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date']['table'] = 'field_data_field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date']['field'] = 'field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date']['label'] = 'Starts dato';
  $handler->display->display_options['fields']['field_ding_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_date']['settings'] = array(
    'format_type' => 'csv',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Indhold: Slutdato */
  $handler->display->display_options['fields']['field_slutdato']['id'] = 'field_slutdato';
  $handler->display->display_options['fields']['field_slutdato']['table'] = 'field_data_field_slutdato';
  $handler->display->display_options['fields']['field_slutdato']['field'] = 'field_slutdato';
  $handler->display->display_options['fields']['field_slutdato']['label'] = 'Slut dato';
  $handler->display->display_options['fields']['field_slutdato']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_slutdato']['settings'] = array(
    'format_type' => 'csv',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Indhold: Forberedelsestid i minutter */
  $handler->display->display_options['fields']['field_forberedelsestid']['id'] = 'field_forberedelsestid';
  $handler->display->display_options['fields']['field_forberedelsestid']['table'] = 'field_data_field_forberedelsestid';
  $handler->display->display_options['fields']['field_forberedelsestid']['field'] = 'field_forberedelsestid';
  $handler->display->display_options['fields']['field_forberedelsestid']['label'] = 'Forberedelsestid';
  $handler->display->display_options['fields']['field_forberedelsestid']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Felt: Indhold: Er arrangementet lavet i samarbejde med eksterne partnere? */
  $handler->display->display_options['fields']['field_eksterne_partnere']['id'] = 'field_eksterne_partnere';
  $handler->display->display_options['fields']['field_eksterne_partnere']['table'] = 'field_data_field_eksterne_partnere';
  $handler->display->display_options['fields']['field_eksterne_partnere']['field'] = 'field_eksterne_partnere';
  $handler->display->display_options['fields']['field_eksterne_partnere']['label'] = 'Eksterne partnere';
  $handler->display->display_options['fields']['field_eksterne_partnere']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Hvis Ja, af hvilken art - økonomisk eller andet. Angiv hvem og hvad der støttes med? */
  $handler->display->display_options['fields']['field_hvilken_art']['id'] = 'field_hvilken_art';
  $handler->display->display_options['fields']['field_hvilken_art']['table'] = 'field_data_field_hvilken_art';
  $handler->display->display_options['fields']['field_hvilken_art']['field'] = 'field_hvilken_art';
  $handler->display->display_options['fields']['field_hvilken_art']['label'] = 'Hvilken art?';
  /* Felt: Indhold: Har der været ekstern oplægsholder/underviser? */
  $handler->display->display_options['fields']['field_ekstern_underviser']['id'] = 'field_ekstern_underviser';
  $handler->display->display_options['fields']['field_ekstern_underviser']['table'] = 'field_data_field_ekstern_underviser';
  $handler->display->display_options['fields']['field_ekstern_underviser']['field'] = 'field_ekstern_underviser';
  $handler->display->display_options['fields']['field_ekstern_underviser']['label'] = 'Ekstern oplægsholder/underviser';
  $handler->display->display_options['fields']['field_ekstern_underviser']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Hvis ja, hvordan oplevede du kvaliteten af denne? */
  $handler->display->display_options['fields']['field_kvaliteten']['id'] = 'field_kvaliteten';
  $handler->display->display_options['fields']['field_kvaliteten']['table'] = 'field_data_field_kvaliteten';
  $handler->display->display_options['fields']['field_kvaliteten']['field'] = 'field_kvaliteten';
  $handler->display->display_options['fields']['field_kvaliteten']['label'] = 'Kvaliteten af oplægsholder/underviser';
  /* Felt: Indhold: Omkostninger til oplægsholder/underviser */
  $handler->display->display_options['fields']['field_omkostninger']['id'] = 'field_omkostninger';
  $handler->display->display_options['fields']['field_omkostninger']['table'] = 'field_data_field_omkostninger';
  $handler->display->display_options['fields']['field_omkostninger']['field'] = 'field_omkostninger';
  $handler->display->display_options['fields']['field_omkostninger']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_omkostninger']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Felt: Indhold: Bemærkninger */
  $handler->display->display_options['fields']['field_bem_rkninger']['id'] = 'field_bem_rkninger';
  $handler->display->display_options['fields']['field_bem_rkninger']['table'] = 'field_data_field_bem_rkninger';
  $handler->display->display_options['fields']['field_bem_rkninger']['field'] = 'field_bem_rkninger';
  /* Felt: Indhold: Ansvarlig (initialer) */
  $handler->display->display_options['fields']['field_initialer']['id'] = 'field_initialer';
  $handler->display->display_options['fields']['field_initialer']['table'] = 'field_data_field_initialer';
  $handler->display->display_options['fields']['field_initialer']['field'] = 'field_initialer';
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '0';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ding_event' => 'ding_event',
  );
  /* Filterkriterie: Indhold: Efterbehandling workflow (field_efterbehandling_workflow) */
  $handler->display->display_options['filters']['field_efterbehandling_workflow_value']['id'] = 'field_efterbehandling_workflow_value';
  $handler->display->display_options['filters']['field_efterbehandling_workflow_value']['table'] = 'field_data_field_efterbehandling_workflow';
  $handler->display->display_options['filters']['field_efterbehandling_workflow_value']['field'] = 'field_efterbehandling_workflow_value';
  $handler->display->display_options['filters']['field_efterbehandling_workflow_value']['value']['value'] = '31';

    /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'event-stat';

  /* Display: Datobrowser */
  $handler = $view->new_display('date_nav', 'Datobrowser', 'date_nav_1');

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'eventstat.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['separator'] = '|';
  $handler->display->display_options['style_options']['quote'] = 0;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'events/csv';
  $translatables['event_stat'] = array(
    t('Master'),
    t('event_stat'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Nid'),
    t('Titel'),
    t('Kategori'),
    t('Arrangementstype'),
    t('Målgruppe'),
    t('Antal deltagere'),
    t('Afdeling'),
    t('Andet...'),
    t('Lokation'),
    t('[field_ding_event_location-name_line], [field_ding_event_location-thoroughfare], [field_ding_event_location-postal_code] [field_ding_event_location-locality]'),
    t('Antal udervisere'),
    t('Starts dato'),
    t('Slut dato'),
    t('Forberedelsestid'),
    t('Eksterne partnere'),
    t('Hvilken art?'),
    t('Ekstern oplægsholder/underviser'),
    t('Kvaliteten af oplægsholder/underviser'),
    t('Omkostninger til oplægsholder/underviser'),
    t('Bemærkninger'),
    t('Ansvarlig (initialer)'),
    t('Page'),
    t('Datobrowser'),
    t('Data export'),
  );
  $export['event_stat'] = $view;

  $view = new view();
    $view->name = 'klon_af_administration_nodes';
    $view->description = 'Find and manage content.';
    $view->tag = 'admin';
    $view->base_table = 'node';
    $view->human_name = 'Klon af Administration: Nodes';
    $view->core = 0;
    $view->api_version = '3.0';
    $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

    /* Display: Defaults */
    $handler = $view->new_display('default', 'Defaults', 'default');
    $handler->display->display_options['title'] = 'Indhold';
    $handler->display->display_options['css_class'] = 'admin-views-view';
    $handler->display->display_options['use_ajax'] = TRUE;
    $handler->display->display_options['use_more_always'] = FALSE;
    $handler->display->display_options['use_more_text'] = 'mere';
    $handler->display->display_options['access']['type'] = 'role';
    $handler->display->display_options['access']['role'] = array(
      3 => '3',
      8 => '8',
    );
    $handler->display->display_options['cache']['type'] = 'none';
    $handler->display->display_options['query']['type'] = 'views_query';
    $handler->display->display_options['query']['options']['distinct'] = TRUE;
    $handler->display->display_options['query']['options']['query_comment'] = FALSE;
    $handler->display->display_options['exposed_form']['type'] = 'basic';
    $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
    $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
    $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
    $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
    $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
    $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
    $handler->display->display_options['pager']['type'] = 'full';
    $handler->display->display_options['pager']['options']['items_per_page'] = '100';
    $handler->display->display_options['pager']['options']['offset'] = '0';
    $handler->display->display_options['pager']['options']['id'] = '0';
    $handler->display->display_options['pager']['options']['quantity'] = '9';
    $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
    $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
    $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
    $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
    $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
    $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
    $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
    $handler->display->display_options['style_plugin'] = 'table';
    $handler->display->display_options['style_options']['columns'] = array(
      'title' => 'title',
      'field_ding_event_date' => 'field_ding_event_date',
      'timestamp' => 'title',
      'field_initialer' => 'field_initialer',
      'edit_node' => 'edit_node',
      'delete_node' => 'edit_node',
      'sid' => 'sid',
    );
    $handler->display->display_options['style_options']['default'] = 'field_ding_event_date';
    $handler->display->display_options['style_options']['info'] = array(
      'title' => array(
        'sortable' => 0,
        'default_sort_order' => 'asc',
        'align' => '',
        'separator' => '&nbsp;',
        'empty_column' => 0,
      ),
      'field_ding_event_date' => array(
        'sortable' => 1,
        'default_sort_order' => 'desc',
        'align' => '',
        'separator' => '',
        'empty_column' => 0,
      ),
      'timestamp' => array(
        'align' => '',
        'separator' => '',
        'empty_column' => 0,
      ),
      'field_initialer' => array(
        'sortable' => 1,
        'default_sort_order' => 'asc',
        'align' => '',
        'separator' => '',
        'empty_column' => 0,
      ),
      'edit_node' => array(
        'align' => '',
        'separator' => '&emsp;',
        'empty_column' => 0,
      ),
      'delete_node' => array(
        'align' => '',
        'separator' => '',
        'empty_column' => 0,
      ),
      'sid' => array(
        'sortable' => 1,
        'default_sort_order' => 'asc',
        'align' => '',
        'separator' => '',
        'empty_column' => 0,
      ),
    );
    $handler->display->display_options['style_options']['sticky'] = TRUE;
    $handler->display->display_options['style_options']['empty_table'] = TRUE;
    /* Opførsel ved ingen resultater: Global: Ufiltreret tekst */
    $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
    $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
    $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
    $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
    $handler->display->display_options['empty']['area_text_custom']['content'] = 'Der er intet indhold at vise.';
    /* Forbindelse: Indhold: Forfatter */
    $handler->display->display_options['relationships']['uid']['id'] = 'uid';
    $handler->display->display_options['relationships']['uid']['table'] = 'node';
    $handler->display->display_options['relationships']['uid']['field'] = 'uid';
    /* Forbindelse: Indhold: Taksonomitermer på node */
    $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
    $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
    $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
    $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
      'forums' => 0,
      'tags' => 0,
    );
    /* Felt: Indhold: Titel */
    $handler->display->display_options['fields']['title']['id'] = 'title';
    $handler->display->display_options['fields']['title']['table'] = 'node';
    $handler->display->display_options['fields']['title']['field'] = 'title';
    /* Felt: Indhold: Date */
    $handler->display->display_options['fields']['field_ding_event_date']['id'] = 'field_ding_event_date';
    $handler->display->display_options['fields']['field_ding_event_date']['table'] = 'field_data_field_ding_event_date';
    $handler->display->display_options['fields']['field_ding_event_date']['field'] = 'field_ding_event_date';
    $handler->display->display_options['fields']['field_ding_event_date']['label'] = 'Startsdato';
    $handler->display->display_options['fields']['field_ding_event_date']['settings'] = array(
      'format_type' => 'long_date_only',
      'fromto' => 'value',
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_to' => '',
    );
    /* Felt: Indhold: Har nyt indhold */
    $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
    $handler->display->display_options['fields']['timestamp']['table'] = 'history';
    $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
    $handler->display->display_options['fields']['timestamp']['label'] = '';
    $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Ansvarlig (initialer) */
    $handler->display->display_options['fields']['field_initialer']['id'] = 'field_initialer';
    $handler->display->display_options['fields']['field_initialer']['table'] = 'field_data_field_initialer';
    $handler->display->display_options['fields']['field_initialer']['field'] = 'field_initialer';
    /* Felt: Indhold: Redigér-link */
    $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
    $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
    $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
    $handler->display->display_options['fields']['edit_node']['label'] = 'Handlinger';
    /* Felt: Workflow current: New state name */
    $handler->display->display_options['fields']['sid']['id'] = 'sid';
    $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
    $handler->display->display_options['fields']['sid']['field'] = 'sid';
    $handler->display->display_options['fields']['sid']['label'] = 'Efterbehandling workflow';
    /* Felt: Indhold: Slet-link */
    $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
    $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
    $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
    $handler->display->display_options['fields']['delete_node']['label'] = '';
    /* Filterkriterie: Indhold: Titel */
    $handler->display->display_options['filters']['title']['id'] = 'title';
    $handler->display->display_options['filters']['title']['table'] = 'node';
    $handler->display->display_options['filters']['title']['field'] = 'title';
    $handler->display->display_options['filters']['title']['operator'] = 'contains';
    $handler->display->display_options['filters']['title']['group'] = 1;
    $handler->display->display_options['filters']['title']['exposed'] = TRUE;
    $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
    $handler->display->display_options['filters']['title']['expose']['label'] = 'Titel';
    $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
    $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
    $handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
    /* Filterkriterie: Indhold: Type */
    $handler->display->display_options['filters']['type']['id'] = 'type';
    $handler->display->display_options['filters']['type']['table'] = 'node';
    $handler->display->display_options['filters']['type']['field'] = 'type';
    $handler->display->display_options['filters']['type']['value'] = array(
      'ding_event' => 'ding_event',
    );
    $handler->display->display_options['filters']['type']['group'] = 1;
    $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
    $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
    $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
    $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
    $handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
    $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
      2 => '2',
      1 => 0,
      6 => 0,
      4 => 0,
      7 => 0,
      5 => 0,
      3 => 0,
      8 => 0,
      9 => 0,
    );
    /* Filterkriterie: Workflow current: New state name */
    $handler->display->display_options['filters']['sid']['id'] = 'sid';
    $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
    $handler->display->display_options['filters']['sid']['field'] = 'sid';
    $handler->display->display_options['filters']['sid']['group'] = 1;
    $handler->display->display_options['filters']['sid']['exposed'] = TRUE;
    $handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
    $handler->display->display_options['filters']['sid']['expose']['label'] = 'Arbejdsgang';
    $handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
    $handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
    $handler->display->display_options['filters']['sid']['expose']['remember_roles'] = array(
      2 => '2',
      1 => 0,
      6 => 0,
      4 => 0,
      7 => 0,
      5 => 0,
      3 => 0,
      8 => 0,
    );
    $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = '5';
    $handler->display->display_options['filters']['sid']['expose']['workflow_include_all'] = TRUE;
    /* Filterkriterie: Indhold: Udgivet */
    $handler->display->display_options['filters']['status']['id'] = 'status';
    $handler->display->display_options['filters']['status']['table'] = 'node';
    $handler->display->display_options['filters']['status']['field'] = 'status';
    $handler->display->display_options['filters']['status']['value'] = '0';
    $handler->display->display_options['filters']['status']['group'] = 1;
    $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
    $handler->display->display_options['filters']['status']['expose']['label'] = 'Udgivet';
    $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
    $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
    $handler->display->display_options['filters']['status']['expose']['remember'] = TRUE;
    $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
      2 => '2',
      1 => 0,
      6 => 0,
      4 => 0,
      7 => 0,
      5 => 0,
      3 => 0,
      8 => 0,
      9 => 0,
    );
    /* Filterkriterie: Indhold: Date -  startdato (field_ding_event_date) */
    $handler->display->display_options['filters']['field_ding_event_date_value']['id'] = 'field_ding_event_date_value';
    $handler->display->display_options['filters']['field_ding_event_date_value']['table'] = 'field_data_field_ding_event_date';
    $handler->display->display_options['filters']['field_ding_event_date_value']['field'] = 'field_ding_event_date_value';
    $handler->display->display_options['filters']['field_ding_event_date_value']['operator'] = 'between';
    $handler->display->display_options['filters']['field_ding_event_date_value']['group'] = 1;
    $handler->display->display_options['filters']['field_ding_event_date_value']['exposed'] = TRUE;
    $handler->display->display_options['filters']['field_ding_event_date_value']['expose']['operator_id'] = 'field_ding_event_date_value_op';
    $handler->display->display_options['filters']['field_ding_event_date_value']['expose']['operator'] = 'field_ding_event_date_value_op';
    $handler->display->display_options['filters']['field_ding_event_date_value']['expose']['identifier'] = 'field_ding_event_date_value';
    $handler->display->display_options['filters']['field_ding_event_date_value']['expose']['remember_roles'] = array(
      2 => '2',
      1 => 0,
      6 => 0,
      4 => 0,
      7 => 0,
      5 => 0,
      3 => 0,
      8 => 0,
      11 => 0,
    );
    $handler->display->display_options['filters']['field_ding_event_date_value']['granularity'] = 'month';
    $handler->display->display_options['filters']['field_ding_event_date_value']['year_range'] = '-5:+3';

    /* Display: Admin content til events workflow */
    $handler = $view->new_display('page', 'Admin content til events workflow', 'page_1');
    $handler->display->display_options['path'] = 'eventsworkflow';
    $translatables['klon_af_administration_nodes'] = array(
      t('Defaults'),
      t('Indhold'),
      t('mere'),
      t('Udfør'),
      t('Gendan'),
      t('Sortér efter'),
      t('Stigende'),
      t('Faldende'),
      t('Antal elementer'),
      t('- Alle -'),
      t('Forskydning'),
      t('« første'),
      t('‹ forrige'),
      t('næste ›'),
      t('sidste »'),
      t('Der er intet indhold at vise.'),
      t('forfatter'),
      t('term'),
      t('Titel'),
      t('Startsdato'),
      t('Ansvarlig (initialer)'),
      t('Handlinger'),
      t('Efterbehandling workflow'),
      t('Type'),
      t('Arbejdsgang'),
      t('Udgivet'),
      t('Admin content til events workflow'),
    );
    $export['klon_af_administration_nodes'] = $view;

    return $export;
}
