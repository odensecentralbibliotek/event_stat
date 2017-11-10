<?php
/**
 * @file
 * event_stat.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function event_stat_user_default_roles() {
  $roles = array();

  // Exported role: Event rapportør.
  $roles['Event rapportør'] = array(
    'name' => 'Event rapportør',
    'weight' => 7,
  );

  return $roles;
}
