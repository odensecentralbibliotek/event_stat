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
  $handler->display->display_options['fields']['field_ding_event_library']['label'] = 'Lokation/Afdeling';
  $handler->display->display_options['fields']['field_ding_event_library']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_library']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_library']['empty'] = 'Andet...';
  $handler->display->display_options['fields']['field_ding_event_library']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_library']['click_sort_column'] = 'gid';
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
  /* Felt: Workflow current: Bruger */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
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
  $handler->display->display_options['filters']['field_efterbehandling_workflow_value']['value']['value'] = '34';

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
    t('Lokation/Afdeling'),
    t('Andet...'),
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
    t('Bruger'),
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
  $handler->display->display_options['access']['type'] = 'menu';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = 50;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'title' => 'title',
    'timestamp' => 'title',
    'type' => 'type',
    'name' => 'name',
    'status' => 'status',
    'changed' => 'changed',
    'created' => 'created',
    'edit_node' => 'edit_node',
    'delete_node' => 'edit_node',
    'clone_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'changed';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '&nbsp;',
      'empty_column' => 0,
    ),
    'timestamp' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
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
    'clone_node' => array(
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
  /* Felt: Masse-handlinger: Indhold */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 1,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Change author',
      'postpone_processing' => 0,
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Delete',
      'postpone_processing' => 0,
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Change value',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
      'postpone_processing' => 0,
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 1,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Stick',
      'postpone_processing' => 0,
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 1,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Unstick',
      'postpone_processing' => 0,
    ),
    'action::node_promote_action' => array(
      'selected' => 1,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Promote to front page',
      'postpone_processing' => 0,
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Publish',
      'postpone_processing' => 0,
    ),
    'action::node_unpromote_action' => array(
      'selected' => 1,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Demote from front page',
      'postpone_processing' => 0,
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Unpublish',
      'postpone_processing' => 0,
    ),
  );
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Felt: Indhold: Har nyt indhold */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'history';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = '';
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Felt: Bruger: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Forfatter';
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = FALSE;
  /* Felt: Indhold: Udgivet */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Felt: Indhold: Opdateringsdato */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Opdateret';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* Felt: Indhold: Oprettelsesdato */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'date_only';
  /* Felt: Indhold: Redigér-link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Handlinger';
  /* Felt: Indhold: Slet-link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  /* Felt: Indhold: Kopiér link */
  $handler->display->display_options['fields']['clone_node']['id'] = 'clone_node';
  $handler->display->display_options['fields']['clone_node']['table'] = 'node';
  $handler->display->display_options['fields']['clone_node']['field'] = 'clone_node';
  $handler->display->display_options['fields']['clone_node']['label'] = '';
  $handler->display->display_options['fields']['clone_node']['element_label_colon'] = FALSE;
  /* Felt: Indhold: BPI workflow */
  $handler->display->display_options['fields']['field_bpi_workflow']['id'] = 'field_bpi_workflow';
  $handler->display->display_options['fields']['field_bpi_workflow']['table'] = 'field_data_field_bpi_workflow';
  $handler->display->display_options['fields']['field_bpi_workflow']['field'] = 'field_bpi_workflow';
  $handler->display->display_options['fields']['field_bpi_workflow']['empty'] = 'Ingen tilstand';
  /* Felt: Indhold: Efterbehandling workflow */
  $handler->display->display_options['fields']['field_efterbehandling_workflow']['id'] = 'field_efterbehandling_workflow';
  $handler->display->display_options['fields']['field_efterbehandling_workflow']['table'] = 'field_data_field_efterbehandling_workflow';
  $handler->display->display_options['fields']['field_efterbehandling_workflow']['field'] = 'field_efterbehandling_workflow';
  $handler->display->display_options['fields']['field_efterbehandling_workflow']['empty'] = 'Ingen tilstand';
  /* Filterkriterie: Indhold: Titel */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
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
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
  /* Filterkriterie: Bruger: Navn */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Forfatter';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'author';
  $handler->display->display_options['filters']['uid']['expose']['remember'] = TRUE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Udgivet';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember'] = TRUE;
  /* Filterkriterie: Ord i ordforråd: Ordforråd */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['vid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['vid']['expose']['operator_id'] = 'vid_op';
  $handler->display->display_options['filters']['vid']['expose']['label'] = 'Ordforråd';
  $handler->display->display_options['filters']['vid']['expose']['operator'] = 'vid_op';
  $handler->display->display_options['filters']['vid']['expose']['identifier'] = 'vid';
  $handler->display->display_options['filters']['vid']['expose']['remember'] = TRUE;
  /* Filterkriterie: Workflow current: New state name */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['label'] = 'New state name';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
  $handler->display->display_options['filters']['sid']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['sid']['group_info']['label'] = 'BPI status';
  $handler->display->display_options['filters']['sid']['group_info']['identifier'] = 'sid';
  $handler->display->display_options['filters']['sid']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Lokalt Indhold',
      'operator' => 'in',
      'value' => array(
        23 => '23',
      ),
    ),
    2 => array(
      'title' => 'Sendt til BPI',
      'operator' => 'in',
      'value' => array(
        25 => '25',
      ),
    ),
    3 => array(
      'title' => 'Oprettet fra  BPI',
      'operator' => 'in',
      'value' => array(
        27 => '27',
      ),
    ),
    4 => array(
      'title' => 'Slettet fra BPI',
      'operator' => 'in',
      'value' => array(
        28 => '28',
      ),
    ),
  );

  /* Display: System */
  $handler = $view->new_display('system', 'System', 'system_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['hide_admin_links'] = TRUE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['path'] = 'admin/content';
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
    t('- Vælg en handling -'),
    t('Change author'),
    t('Delete'),
    t('Change value'),
    t('Stick'),
    t('Unstick'),
    t('Promote to front page'),
    t('Publish'),
    t('Demote from front page'),
    t('Unpublish'),
    t('Titel'),
    t('Type'),
    t('Forfatter'),
    t('Udgivet'),
    t('Opdateret'),
    t('Oprettelsesdato'),
    t('Handlinger'),
    t('BPI workflow'),
    t('Ingen tilstand'),
    t('Efterbehandling workflow'),
    t('Ordforråd'),
    t('New state name'),
    t('BPI status'),
    t('System'),
  );
  $export['klon_af_administration_nodes'] = $view;

  return $export;
}
