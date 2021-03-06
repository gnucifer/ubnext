<?php
/**
 * @file
 * ubn_content_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ubn_content_types_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contacts|field_collection_item|field_content_sections|form';
  $field_group->group_name = 'group_contacts';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_content_sections';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contacts',
    'weight' => '6',
    'children' => array(
      0 => 'field_contact_instances',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contacts',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-contacts field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_contacts|field_collection_item|field_content_sections|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_file_attachments|field_collection_item|field_content_sections|form';
  $field_group->group_name = 'group_file_attachments';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_content_sections';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'File attachments',
    'weight' => '5',
    'children' => array(
      0 => 'field_file_atoms',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'File attachments',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-file-attachments field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_file_attachments|field_collection_item|field_content_sections|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media_settings|field_collection_item|field_content_sections|form';
  $field_group->group_name = 'group_media_settings';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_content_sections';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Media settings',
    'weight' => '1',
    'children' => array(
      0 => 'field_media_layout',
      1 => 'field_media_context',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Media settings',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-media-settings field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_media_settings|field_collection_item|field_content_sections|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_shortcut_links|node|navigation_landing|form';
  $field_group->group_name = 'group_shortcut_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'navigation_landing';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Shortcut links',
    'weight' => '5',
    'children' => array(
      0 => 'field_shortcut_links',
      1 => 'field_shortcut_heading',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Shortcut links',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-shortcut-links field-group-fieldset',
        'description' => 'Add your header for the shortcuts. (example: shortcuts). Then add your links. ',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_shortcut_links|node|navigation_landing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_shourtcut_links|node|navigation_landing|default';
  $field_group->group_name = 'group_shourtcut_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'navigation_landing';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Shortcut links',
    'weight' => '9',
    'children' => array(
      0 => 'field_shortcut_links',
      1 => 'field_shortcut_heading',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-shourtcut-links field-group-fieldset',
      ),
    ),
  );
  $export['group_shourtcut_links|node|navigation_landing|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_terms_of_use|node|database|form';
  $field_group->group_name = 'group_terms_of_use';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'database';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'terms of use',
    'weight' => '19',
    'children' => array(
      0 => 'field_tou_article_chapt_desc',
      1 => 'field_download_article_chap_desc',
      2 => 'field_course_pack_print_desc',
      3 => 'field_gul_course_pack_elect_desc',
      4 => 'field_scholarly_sharing_desc',
      5 => 'field_interlibrary_loan_desc',
      6 => 'field_print_article_chapter',
      7 => 'field_download_article_chapter',
      8 => 'field_course_pack_print',
      9 => 'field_gul_course_pack_electronic',
      10 => 'field_scholarly_sharing',
      11 => 'field_interlibrary_loan',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-terms-of-use field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_terms_of_use|node|database|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_term|field_collection_item|field_content_sections|form';
  $field_group->group_name = 'group_term';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_content_sections';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Referened term',
    'weight' => '2',
    'children' => array(
      0 => 'field_referenced_term',
      1 => 'field_referenced_term_no_link',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Referened term',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-term field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_term|field_collection_item|field_content_sections|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_theme_links|node|navigation_landing|default';
  $field_group->group_name = 'group_theme_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'navigation_landing';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Theme links',
    'weight' => '9',
    'children' => array(
      0 => 'field_theme_link',
      1 => 'field_number_of_primary',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-theme-links field-group-fieldset',
      ),
    ),
  );
  $export['group_theme_links|node|navigation_landing|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_theme_links|node|navigation_landing|form';
  $field_group->group_name = 'group_theme_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'navigation_landing';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Theme links',
    'weight' => '6',
    'children' => array(
      0 => 'field_theme_link',
      1 => 'field_number_of_primary',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Theme links',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-theme-links field-group-fieldset',
        'description' => 'Add your links to your different site themes and then make sure you have sorted them in the order you want them to show up. Then add a number of theme links that should be displayed as primary (i.e with a border). ',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_theme_links|node|navigation_landing|form'] = $field_group;

  return $export;
}
