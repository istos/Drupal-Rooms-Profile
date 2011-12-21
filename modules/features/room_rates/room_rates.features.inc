<?php
/**
 * @file
 * room_rates.features.inc
 */

/**
 * Implements hook_node_info().
 */
function room_rates_node_info() {
  $items = array(
    'rates' => array(
      'name' => t('Rates'),
      'base' => 'node_content',
      'description' => t('The rates page provides an overview of rates for your hotel over the year - it is separate from the Rooms pricing model to allow maximum flexibility for both.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
