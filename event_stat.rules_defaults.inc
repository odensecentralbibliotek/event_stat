<?php
/**
 * @file
 * event_stat.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function event_stat_default_rules_configuration() {
  $items = array();
  $items['rules_aflyst_workflow'] = entity_import('rules_config', '{ "rules_aflyst_workflow" : {
      "LABEL" : "Aflyst workflow",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "workflow_rules" ],
      "ON" : [ "node_update" ],
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "node" ],
            "type" : "node",
            "bundle" : { "value" : { "ding_event" : "ding_event" } }
          }
        },
        { "data_is" : { "data" : [ "node:field-aflyst-" ], "value" : 1 } }
      ],
      "DO" : [
        { "workflowfield_field_set_state" : {
            "node" : [ "node" ],
            "field" : [ "node:field-efterbehandling-workflow" ],
            "workflow_state" : { "value" : { "32" : "32" } }
          }
        }
      ]
    }
  }');
  return $items;
}
