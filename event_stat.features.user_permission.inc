<?php
/**
 * @file
 * event_stat.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function event_stat_user_default_permissions() {
  $permissions = array();

  // Exported permission: create field_aflyst_.
  $permissions['create field_aflyst_'] = array(
    'name' => 'create field_aflyst_',
    'roles' => array(
      'administrator' => 'administrator',
      'redaktør' => 'redaktør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_antal_deltagere.
  $permissions['create field_antal_deltagere'] = array(
    'name' => 'create field_antal_deltagere',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_antal_udervisere.
  $permissions['create field_antal_udervisere'] = array(
    'name' => 'create field_antal_udervisere',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_area.
  $permissions['create field_area'] = array(
    'name' => 'create field_area',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_arrangementstype.
  $permissions['create field_arrangementstype'] = array(
    'name' => 'create field_arrangementstype',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_bem_rkninger.
  $permissions['create field_bem_rkninger'] = array(
    'name' => 'create field_bem_rkninger',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_efterbehandling_workflow.
  $permissions['create field_efterbehandling_workflow'] = array(
    'name' => 'create field_efterbehandling_workflow',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_ekstern_underviser.
  $permissions['create field_ekstern_underviser'] = array(
    'name' => 'create field_ekstern_underviser',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_eksterne_partnere.
  $permissions['create field_eksterne_partnere'] = array(
    'name' => 'create field_eksterne_partnere',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_forberedelsestid.
  $permissions['create field_forberedelsestid'] = array(
    'name' => 'create field_forberedelsestid',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_har_formidlingen_v_ret_inv.
  $permissions['create field_har_formidlingen_v_ret_inv'] = array(
    'name' => 'create field_har_formidlingen_v_ret_inv',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_hvilken_art.
  $permissions['create field_hvilken_art'] = array(
    'name' => 'create field_hvilken_art',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_initialer.
  $permissions['create field_initialer'] = array(
    'name' => 'create field_initialer',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_kategori.
  $permissions['create field_kategori'] = array(
    'name' => 'create field_kategori',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_kvaliteten.
  $permissions['create field_kvaliteten'] = array(
    'name' => 'create field_kvaliteten',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_omkostninger.
  $permissions['create field_omkostninger'] = array(
    'name' => 'create field_omkostninger',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_slutdato.
  $permissions['create field_slutdato'] = array(
    'name' => 'create field_slutdato',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_type.
  $permissions['create field_type'] = array(
    'name' => 'create field_type',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_aflyst_.
  $permissions['edit field_aflyst_'] = array(
    'name' => 'edit field_aflyst_',
    'roles' => array(
      'administrator' => 'administrator',
      'redaktør' => 'redaktør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_antal_deltagere.
  $permissions['edit field_antal_deltagere'] = array(
    'name' => 'edit field_antal_deltagere',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_antal_udervisere.
  $permissions['edit field_antal_udervisere'] = array(
    'name' => 'edit field_antal_udervisere',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_area.
  $permissions['edit field_area'] = array(
    'name' => 'edit field_area',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_arrangementstype.
  $permissions['edit field_arrangementstype'] = array(
    'name' => 'edit field_arrangementstype',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_bem_rkninger.
  $permissions['edit field_bem_rkninger'] = array(
    'name' => 'edit field_bem_rkninger',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_efterbehandling_workflow.
  $permissions['edit field_efterbehandling_workflow'] = array(
    'name' => 'edit field_efterbehandling_workflow',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_ekstern_underviser.
  $permissions['edit field_ekstern_underviser'] = array(
    'name' => 'edit field_ekstern_underviser',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_eksterne_partnere.
  $permissions['edit field_eksterne_partnere'] = array(
    'name' => 'edit field_eksterne_partnere',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_forberedelsestid.
  $permissions['edit field_forberedelsestid'] = array(
    'name' => 'edit field_forberedelsestid',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_har_formidlingen_v_ret_inv.
  $permissions['edit field_har_formidlingen_v_ret_inv'] = array(
    'name' => 'edit field_har_formidlingen_v_ret_inv',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_hvilken_art.
  $permissions['edit field_hvilken_art'] = array(
    'name' => 'edit field_hvilken_art',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_initialer.
  $permissions['edit field_initialer'] = array(
    'name' => 'edit field_initialer',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_kategori.
  $permissions['edit field_kategori'] = array(
    'name' => 'edit field_kategori',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_kvaliteten.
  $permissions['edit field_kvaliteten'] = array(
    'name' => 'edit field_kvaliteten',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_omkostninger.
  $permissions['edit field_omkostninger'] = array(
    'name' => 'edit field_omkostninger',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_slutdato.
  $permissions['edit field_slutdato'] = array(
    'name' => 'edit field_slutdato',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_type.
  $permissions['edit field_type'] = array(
    'name' => 'edit field_type',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_aflyst_.
  $permissions['edit own field_aflyst_'] = array(
    'name' => 'edit own field_aflyst_',
    'roles' => array(
      'administrator' => 'administrator',
      'redaktør' => 'redaktør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_antal_deltagere.
  $permissions['edit own field_antal_deltagere'] = array(
    'name' => 'edit own field_antal_deltagere',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_antal_udervisere.
  $permissions['edit own field_antal_udervisere'] = array(
    'name' => 'edit own field_antal_udervisere',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_area.
  $permissions['edit own field_area'] = array(
    'name' => 'edit own field_area',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_arrangementstype.
  $permissions['edit own field_arrangementstype'] = array(
    'name' => 'edit own field_arrangementstype',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_bem_rkninger.
  $permissions['edit own field_bem_rkninger'] = array(
    'name' => 'edit own field_bem_rkninger',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_efterbehandling_workflow.
  $permissions['edit own field_efterbehandling_workflow'] = array(
    'name' => 'edit own field_efterbehandling_workflow',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_ekstern_underviser.
  $permissions['edit own field_ekstern_underviser'] = array(
    'name' => 'edit own field_ekstern_underviser',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_eksterne_partnere.
  $permissions['edit own field_eksterne_partnere'] = array(
    'name' => 'edit own field_eksterne_partnere',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_forberedelsestid.
  $permissions['edit own field_forberedelsestid'] = array(
    'name' => 'edit own field_forberedelsestid',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_har_formidlingen_v_ret_inv.
  $permissions['edit own field_har_formidlingen_v_ret_inv'] = array(
    'name' => 'edit own field_har_formidlingen_v_ret_inv',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_hvilken_art.
  $permissions['edit own field_hvilken_art'] = array(
    'name' => 'edit own field_hvilken_art',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_initialer.
  $permissions['edit own field_initialer'] = array(
    'name' => 'edit own field_initialer',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_kategori.
  $permissions['edit own field_kategori'] = array(
    'name' => 'edit own field_kategori',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_kvaliteten.
  $permissions['edit own field_kvaliteten'] = array(
    'name' => 'edit own field_kvaliteten',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_omkostninger.
  $permissions['edit own field_omkostninger'] = array(
    'name' => 'edit own field_omkostninger',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_slutdato.
  $permissions['edit own field_slutdato'] = array(
    'name' => 'edit own field_slutdato',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_type.
  $permissions['edit own field_type'] = array(
    'name' => 'edit own field_type',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: participate in workflow.
  $permissions['participate in workflow'] = array(
    'name' => 'participate in workflow',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
      'administrator' => 'administrator',
      'formidler' => 'formidler',
      'gæsteblogger' => 'gæsteblogger',
      'lokalredaktør' => 'lokalredaktør',
      'redaktør' => 'redaktør',
    ),
    'module' => 'workflow',
  );

  // Exported permission: view field_aflyst_.
  $permissions['view field_aflyst_'] = array(
    'name' => 'view field_aflyst_',
    'roles' => array(
      'administrator' => 'administrator',
      'redaktør' => 'redaktør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_antal_deltagere.
  $permissions['view field_antal_deltagere'] = array(
    'name' => 'view field_antal_deltagere',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_antal_udervisere.
  $permissions['view field_antal_udervisere'] = array(
    'name' => 'view field_antal_udervisere',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_area.
  $permissions['view field_area'] = array(
    'name' => 'view field_area',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_arrangementstype.
  $permissions['view field_arrangementstype'] = array(
    'name' => 'view field_arrangementstype',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_bem_rkninger.
  $permissions['view field_bem_rkninger'] = array(
    'name' => 'view field_bem_rkninger',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_efterbehandling_workflow.
  $permissions['view field_efterbehandling_workflow'] = array(
    'name' => 'view field_efterbehandling_workflow',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_ekstern_underviser.
  $permissions['view field_ekstern_underviser'] = array(
    'name' => 'view field_ekstern_underviser',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_eksterne_partnere.
  $permissions['view field_eksterne_partnere'] = array(
    'name' => 'view field_eksterne_partnere',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_forberedelsestid.
  $permissions['view field_forberedelsestid'] = array(
    'name' => 'view field_forberedelsestid',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_har_formidlingen_v_ret_inv.
  $permissions['view field_har_formidlingen_v_ret_inv'] = array(
    'name' => 'view field_har_formidlingen_v_ret_inv',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_hvilken_art.
  $permissions['view field_hvilken_art'] = array(
    'name' => 'view field_hvilken_art',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_initialer.
  $permissions['view field_initialer'] = array(
    'name' => 'view field_initialer',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_kategori.
  $permissions['view field_kategori'] = array(
    'name' => 'view field_kategori',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_kvaliteten.
  $permissions['view field_kvaliteten'] = array(
    'name' => 'view field_kvaliteten',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_omkostninger.
  $permissions['view field_omkostninger'] = array(
    'name' => 'view field_omkostninger',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_slutdato.
  $permissions['view field_slutdato'] = array(
    'name' => 'view field_slutdato',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_type.
  $permissions['view field_type'] = array(
    'name' => 'view field_type',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_aflyst_.
  $permissions['view own field_aflyst_'] = array(
    'name' => 'view own field_aflyst_',
    'roles' => array(
      'administrator' => 'administrator',
      'redaktør' => 'redaktør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_antal_deltagere.
  $permissions['view own field_antal_deltagere'] = array(
    'name' => 'view own field_antal_deltagere',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_antal_udervisere.
  $permissions['view own field_antal_udervisere'] = array(
    'name' => 'view own field_antal_udervisere',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_area.
  $permissions['view own field_area'] = array(
    'name' => 'view own field_area',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_arrangementstype.
  $permissions['view own field_arrangementstype'] = array(
    'name' => 'view own field_arrangementstype',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_bem_rkninger.
  $permissions['view own field_bem_rkninger'] = array(
    'name' => 'view own field_bem_rkninger',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_efterbehandling_workflow.
  $permissions['view own field_efterbehandling_workflow'] = array(
    'name' => 'view own field_efterbehandling_workflow',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_ekstern_underviser.
  $permissions['view own field_ekstern_underviser'] = array(
    'name' => 'view own field_ekstern_underviser',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_eksterne_partnere.
  $permissions['view own field_eksterne_partnere'] = array(
    'name' => 'view own field_eksterne_partnere',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_forberedelsestid.
  $permissions['view own field_forberedelsestid'] = array(
    'name' => 'view own field_forberedelsestid',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_har_formidlingen_v_ret_inv.
  $permissions['view own field_har_formidlingen_v_ret_inv'] = array(
    'name' => 'view own field_har_formidlingen_v_ret_inv',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_hvilken_art.
  $permissions['view own field_hvilken_art'] = array(
    'name' => 'view own field_hvilken_art',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_initialer.
  $permissions['view own field_initialer'] = array(
    'name' => 'view own field_initialer',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_kategori.
  $permissions['view own field_kategori'] = array(
    'name' => 'view own field_kategori',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_kvaliteten.
  $permissions['view own field_kvaliteten'] = array(
    'name' => 'view own field_kvaliteten',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_omkostninger.
  $permissions['view own field_omkostninger'] = array(
    'name' => 'view own field_omkostninger',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_slutdato.
  $permissions['view own field_slutdato'] = array(
    'name' => 'view own field_slutdato',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_type.
  $permissions['view own field_type'] = array(
    'name' => 'view own field_type',
    'roles' => array(
      'Event rapportør' => 'Event rapportør',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
