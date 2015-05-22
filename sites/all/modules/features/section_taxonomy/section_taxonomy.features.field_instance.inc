<?php
/**
 * @file
 * section_taxonomy.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function section_taxonomy_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-sections-field_term_relevance'
  $field_instances['taxonomy_term-sections-field_term_relevance'] = array(
    'bundle' => 'sections',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_term_relevance',
    'label' => 'Term Relevance',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Term Relevance');

  return $field_instances;
}
