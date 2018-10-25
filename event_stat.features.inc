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
    "29" : {"sid":"29","wid":"5","weight":"-50","sysid":"1","state":"(creation)","status":"1","name":"(creation)"},
    "30" : {"sid":"30","wid":"5","weight":"-20","sysid":"0","state":"Ubehandlet","status":"1","name":"ubehandlet"},
    "31" : {"sid":"31","wid":"5","weight":"-19","sysid":"0","state":"Efterbehandlet","status":"1","name":"efterbehandlet"},
    "32" : {"sid":"32","wid":"5","weight":"-18","sysid":"0","state":"Aflyste","status":"1","name":"aflyste"}
    },
  "transitions" : {
    "129" : {"tid":"129","sid":"29","target_sid":"30","roles":{"-1":-1,"8":8},"wid":"5","name":"31_29","label":""},
    "130" : {"tid":"130","sid":"29","target_sid":"31","roles":{"-1":-1,"8":8},"wid":"5","name":"31_30","label":""},
    "131" : {"tid":"131","sid":"29","target_sid":"32","roles":{"-1":-1,"8":8},"wid":"5","name":"29_32","label":""},
    "132" : {"tid":"132","sid":"30","target_sid":"30","roles":{"-1":-1,"6":6,"4":4,"7":7,"5":5,"3":3,"8":8},"wid":"5","name":"29_29","label":""},
    "133" : {"tid":"133","sid":"30","target_sid":"31","roles":{"-1":-1},"wid":"5","name":"29_30","label":""},
    "134" : {"tid":"134","sid":"30","target_sid":"32","roles":{"-1":-1},"wid":"5","name":"30_32","label":""},
    "135" : {"tid":"135","sid":"31","target_sid":"30","roles":{"-1":-1,"8":8},"wid":"5","name":"30_29","label":""},
    "136" : {"tid":"136","sid":"31","target_sid":"31","roles":{"-1":-1,"6":6,"4":4,"7":7,"5":5,"3":3,"8":8},"wid":"5","name":"30_30","label":""},
    "137" : {"tid":"137","sid":"31","target_sid":"32","roles":{"-1":-1,"8":8},"wid":"5","name":"31_32","label":""},
    "138" : {"tid":"138","sid":"32","target_sid":"30","roles":{"-1":-1,"8":8},"wid":"5","name":"32_30","label":""},
    "139" : {"tid":"139","sid":"32","target_sid":"31","roles":{"-1":-1,"8":8},"wid":"5","name":"32_31","label":""},
    "140" : {"tid":"140","sid":"32","target_sid":"32","roles":{"-1":-1,"6":6,"4":4,"7":7,"5":5,"3":3,"8":8},"wid":"5","name":"32_32","label":""}
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
