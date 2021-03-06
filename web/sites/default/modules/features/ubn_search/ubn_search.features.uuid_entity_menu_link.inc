<?php
/**
 * @file
 * ubn_search.features.uuid_entity_menu_link.inc
 */

/**
 * Implements hook_uuid_entity_default_menu_link().
 */
function ubn_search_uuid_entity_default_menu_link() {
  $items = array();
  $items['74e6bc5b-5d90-41d4-bd22-50ab89cead16'] = entity_create('menu_link', array(
    'menu_name' => 'main-menu',
    'plid' => 0,
    'link_path' => 'databases',
    'router_path' => 'databases',
    'link_title' => 'Databases',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'depth' => 1,
    'customized' => 1,
    'p1' => '74e6bc5b-5d90-41d4-bd22-50ab89cead16',
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
    'vuuid' => '1d888319-a0dd-4eec-93f6-8fbbcffe39dc',
    'uuid' => '74e6bc5b-5d90-41d4-bd22-50ab89cead16',
    'default_revision' => 1,
    'access' => TRUE,
    'i18n_menu' => TRUE,
  ));
  return $items;
}
