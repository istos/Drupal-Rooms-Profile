<?php
/**
 * @file
 * rooms_location.features.inc
 */

/**
 * Implements hook_node_info().
 */
function rooms_location_node_info() {
  $items = array(
    'location' => array(
      'name' => t('Location'),
      'base' => 'node_content',
      'description' => t('Allows a hotel owner to define the hotel location using geolocation and show that on a node. The aim is to provide a starting point that is customized for specific hotel needs.'),
      'has_title' => '1',
      'title_label' => t('Hotel Name'),
      'help' => t('Please set the title to what will show up when you click the marker on the map'),
    ),
  );
  return $items;
}
