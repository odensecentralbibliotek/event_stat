<?php

/**
 * @file
 * event_stat.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function event_stat_field_group_info() {
    $export = array();

    $field_group = new stdClass();
    $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
    $field_group->api_version = 1;
    $field_group->identifier = 'group_efterbehandling|node|ding_event|form';
    $field_group->group_name = 'group_efterbehandling';
    $field_group->entity_type = 'node';
    $field_group->bundle = 'ding_event';
    $field_group->mode = 'form';
    $field_group->parent_name = '';
    $field_group->data = array(
      'label' => 'Efterbehandling',
      'weight' => '11',
      'children' => array(
        0 => 'field_antal_deltagere',
        1 => 'field_antal_udervisere',
        2 => 'field_arrangementstype',
        3 => 'field_bem_rkninger',
        4 => 'field_ekstern_underviser',
        5 => 'field_eksterne_partnere',
        6 => 'field_forberedelsestid',
        7 => 'field_har_formidlingen_v_ret_inv',
        8 => 'field_hvilken_art',
        9 => 'field_initialer',
        10 => 'field_kategori',
        11 => 'field_kvaliteten',
        12 => 'field_omkostninger',
        13 => 'field_slutdato',
        14 => 'field_type',
      ),
      'format_type' => 'fieldset',
      'format_settings' => array(
        'label' => 'Efterbehandling',
        'instance_settings' => array(
          'required_fields' => 1,
          'classes' => '',
          'description' => '',
        ),
        'formatter' => 'open',
      ),
    );
    $export['group_efterbehandling|node|ding_event|form'] = $field_group;

    return $export;
}
