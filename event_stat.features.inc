<?php
/**
 * @file
 * event_stat.features.inc
 */

/**
 * Implements hook_default_Workflow().
 */
function event_stat_default_Workflow() {
  $workflows = array();

  // Exported workflow: 'arrangement_efterbehandling'
  $workflows['arrangement_efterbehandling'] = entity_import('Workflow', '{
    "name" : "arrangement_efterbehandling",
    "tab_roles" : [],
    "options" : [],
    "states" : {
      "32" : {"sid":"32","wid":"5","weight":"-50","sysid":"1","state":"(creation)","status":"1","name":"(creation)"},
      "33" : {"sid":"33","wid":"5","weight":"-20","sysid":"0","state":"Ubehandlet","status":"1","name":"ubehandlet"},
      "34" : {"sid":"34","wid":"5","weight":"-19","sysid":"0","state":"Efterbehandlet","status":"1","name":"efterbehandlet"}
    },
    "transitions" : {
      "135" : {"tid":"135","sid":"32","target_sid":"33","roles":{"-1":-1,"3":"3","8":"8"},"wid":"5","name":"31_32","label":""},
      "136" : {"tid":"136","sid":"32","target_sid":"34","roles":{"3":"3","8":"8"},"wid":"5","name":"31_33","label":""},
      "137" : {"tid":"137","sid":"33","target_sid":"33","roles":{"-1":-1,"3":"3","8":"8"},"wid":"5","name":"32_32","label":""},
      "138" : {"tid":"138","sid":"33","target_sid":"34","roles":{"3":"3","8":"8"},"wid":"5","name":"32_33","label":""},
      "139" : {"tid":"139","sid":"34","target_sid":"33","roles":{"3":"3","8":"8"},"wid":"5","name":"33_32","label":""},
      "140" : {"tid":"140","sid":"34","target_sid":"34","roles":{"-1":-1,"3":"3","8":"8"},"wid":"5","name":"33_33","label":""}
    },
    "label" : "Arrangement efterbehandling",
    "typeMap" : [],
    "wid_original" : "5",
    "system_roles" : {
      "-1" : "(forfatter)",
      "1" : "anonym bruger",
      "2" : "godkendt bruger",
      "6" : "g\\u00e6steblogger",
      "4" : "formidler",
      "7" : "lokalredakt\\u00f8r",
      "5" : "redakt\\u00f8r",
      "3" : "administrator",
      "8" : "Event rapport\\u00f8r"
    }
  }');

  return $workflows;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function event_stat_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function event_stat_views_api() {
  return array("api" => "3.0");
}
