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
    $handler->display->display_options['filters']['sid']['operator'] = 'not in';
    $handler->display->display_options['filters']['sid']['value'] = array(
      31 => '31',
      32 => '32',
    );
    $handler->display->display_options['filters']['sid']['group'] = 1;
    $handler->display->display_options['filters']['sid']['exposed'] = TRUE;
    $handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
    $handler->display->display_options['filters']['sid']['expose']['label'] = 'Arbejdsgang';
    $handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
    $handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
    $handler->display->display_options['filters']['sid']['expose']['multiple'] = TRUE;
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
    $handler->display->display_options['filters']['sid']['expose']['reduce'] = TRUE;
    $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = '5';
    $handler->display->display_options['filters']['sid']['expose']['workflow_include_all'] = TRUE;
    $handler->display->display_options['filters']['sid']['is_grouped'] = TRUE;
    $handler->display->display_options['filters']['sid']['group_info']['label'] = 'Arbejdsgang';
    $handler->display->display_options['filters']['sid']['group_info']['identifier'] = 'sid';
    $handler->display->display_options['filters']['sid']['group_info']['default_group'] = '1';
    $handler->display->display_options['filters']['sid']['group_info']['group_items'] = array(
      1 => array(
        'title' => 'Ubehandlet',
        'operator' => 'empty',
        'value' => array(
          'all' => 'all',
          31 => '31',
          32 => '32',
        ),
      ),
      2 => array(
        'title' => 'Efterbehandlet',
        'operator' => 'in',
        'value' => array(
          31 => '31',
        ),
      ),
      3 => array(
        'title' => 'Aflyst',
        'operator' => 'in',
        'value' => array(
          32 => '32',
        ),
      ),
    );
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
