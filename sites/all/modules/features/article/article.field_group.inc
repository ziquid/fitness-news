<?php
/**
 * @file
 * article.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function article_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_imported_data|node|article|form';
  $field_group->group_name = 'group_imported_data';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Imported Data',
    'weight' => '3',
    'children' => array(
      0 => 'field_imported_author',
      1 => 'field_imported_categories',
      2 => 'field_imported_description',
      3 => 'field_imported_node_id',
      4 => 'field_imported_user_id',
      5 => 'field_imported_geo_locations',
      6 => 'field_imported_guid',
      7 => 'field_imported_url',
      8 => 'field_imported_published_date',
      9 => 'field_imported_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Imported Data',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-imported-data field-group-fieldset',
        'description' => 'If this content was imported from a third party, these fields will contain the raw imported data',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_imported_data|node|article|form'] = $field_group;

  return $export;
}
