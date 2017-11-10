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
    'weight' => '12',
    'children' => array(
      0 => 'field_antal_deltagere',
      1 => 'field_kategori',
      2 => 'field_antal_udervisere',
      3 => 'field_forberedelsestid',
      4 => 'field_eksterne_partnere',
      5 => 'field_hvilken_art',
      6 => 'field_ekstern_underviser',
      7 => 'field_omkostninger',
      8 => 'field_kvaliteten',
      9 => 'field_arrangementstype',
      10 => 'field_bem_rkninger',
      11 => 'field_slutdato',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_efterbehandling|node|ding_event|form'] = $field_group;

  return $export;
}
