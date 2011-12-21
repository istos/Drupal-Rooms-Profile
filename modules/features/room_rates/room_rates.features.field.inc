<?php
/**
 * @file
 * room_rates.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function room_rates_field_default_fields() {
  $fields = array();

  // Exported field: 'node-rates-field_rooms_rates_details'
  $fields['node-rates-field_rooms_rates_details'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_rooms_rates_details',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'rates',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 1,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_rooms_rates_details',
      'label' => 'Rates Details',
      'required' => 0,
      'settings' => array(
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '3',
        ),
        'type' => 'text_textarea',
        'weight' => '-3',
      ),
    ),
  );

  // Exported field: 'node-rates-field_rooms_rates_table'
  $fields['node-rates-field_rooms_rates_table'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_rooms_rates_table',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'tablefield',
      'settings' => array(
        'cell_processing' => '0',
        'lock_values' => 0,
      ),
      'translatable' => '0',
      'type' => 'tablefield',
    ),
    'field_instance' => array(
      'bundle' => 'rates',
      'default_value' => array(
        0 => array(
          'tablefield' => array(
            'cell_0_0' => 'Room Type',
            'cell_0_1' => 'Low Season',
            'cell_0_2' => 'High Season',
            'cell_0_3' => '',
            'cell_1_0' => '',
            'cell_1_1' => '',
            'cell_1_2' => '',
            'cell_1_3' => '',
            'cell_2_0' => '',
            'cell_2_1' => '',
            'cell_2_2' => '',
            'cell_2_3' => '',
            'import' => array(
              'rebuild_field_rooms_rates_table_0' => 'Upload CSV',
              'tablefield_csv_field_rooms_rates_table_0' => '',
            ),
            'rebuild' => array(
              'count_cols' => '4',
              'count_rows' => '3',
              'rebuild' => 'Rebuild Table',
            ),
          ),
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'tablefield',
          'settings' => array(),
          'type' => 'default',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_rooms_rates_table',
      'label' => 'Rates Table',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'tablefield',
        'settings' => array(),
        'type' => 'tablefield',
        'weight' => '-4',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Rates Detials');
  t('Rates Table');

  return $fields;
}
