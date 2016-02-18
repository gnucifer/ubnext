<?php
/**
 * @file
 * ubn_content.features.uuid_entity_menu_link.inc
 */

/**
 * Implements hook_uuid_entity_default_menu_link().
 */
function ubn_content_uuid_entity_default_menu_link() {
  $items = array();
  $items['1c1ba3a9-5e91-4cf4-b887-917a255d3ad0'] = entity_create('menu_link', array(
   'menu_name' => 'main-menu',
   'plid' => 0,
   'link_path' => 'node/d869e9b9-2268-4ad0-9fc7-4547e311dac1',
   'router_path' => 'node/%',
   'link_title' => 'Search the Library',
   'options' => array(
     'alter' => TRUE,
     'identifier' => 'main-menu_search:node/32139',
     'attributes' => array(),
   ),
   'module' => 'menu',
   'hidden' => 0,
   'external' => 0,
   'has_children' => 1,
   'expanded' => 0,
   'depth' => 1,
   'customized' => 1,
   'p1' => '1c1ba3a9-5e91-4cf4-b887-917a255d3ad0',
   'p2' => 0,
   'p3' => 0,
   'p4' => 0,
   'p5' => 0,
   'p6' => 0,
   'p7' => 0,
   'p8' => 0,
   'p9' => 0,
   'updated' => 0,
   'language' => 'und',
   'vuuid' => 'a9a44948-6e74-440b-9762-1f30a48f0eb9',
   'uuid' => '1c1ba3a9-5e91-4cf4-b887-917a255d3ad0',
   'default_revision' => 1,
   'access' => TRUE,
   'i18n_menu' => TRUE,
 ));
  $items['21c050e2-5ef9-4347-af28-192f53a34c05'] = entity_create('menu_link', array(
   'menu_name' => 'main-menu',
   'plid' => '1c1ba3a9-5e91-4cf4-b887-917a255d3ad0',
   'link_path' => 'search/databases/search',
   'router_path' => 'search/databases/search',
   'link_title' => 'Search databases',
   'options' => FALSE,
   'module' => 'menu',
   'hidden' => 0,
   'external' => 0,
   'has_children' => 0,
   'expanded' => 0,
   'depth' => 2,
   'customized' => 1,
   'p1' => '1c1ba3a9-5e91-4cf4-b887-917a255d3ad0',
   'p2' => '21c050e2-5ef9-4347-af28-192f53a34c05',
   'p3' => 0,
   'p4' => 0,
   'p5' => 0,
   'p6' => 0,
   'p7' => 0,
   'p8' => 0,
   'p9' => 0,
   'updated' => 0,
   'language' => 'und',
   'vuuid' => '9915651e-4f8d-4b64-8d27-f93e1d747796',
   'uuid' => '21c050e2-5ef9-4347-af28-192f53a34c05',
   'default_revision' => 1,
   'access' => TRUE,
 ));
  return $items;
}