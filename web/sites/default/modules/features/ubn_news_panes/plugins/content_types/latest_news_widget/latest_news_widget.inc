<?php
/**
 * @file
 */

/**
 * Plugin definition.
 */
$plugin = array(
  'single' => TRUE,
  'title' => t('UBN News: Latest news widget'),
  'description' => t('Latest news widget.'),
  'required context' => new ctools_context_required(t('Link list'), 'entity:node'),
  'category' => 'UBNext',
  'edit form' => 'ubn_news_panes_latest_news_widget_content_type_settings',
);

/**
 * Settings callback.
 */
function ubn_news_panes_latest_news_widget_content_type_settings($form, &$form_state) {
  return $form;
}

/**
 * Render callback.
 */
function ubn_news_panes_latest_news_widget_content_type_render($subtype, $conf, $panel_args, $context) {
  $query = new EntityFieldQuery();
  $results = $query
    ->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'story')
    ->propertyCondition('status', 1) // is publishd
    ->propertyOrderBy('created', 'DESC') // TODO: order by publication date not created?
    ->addTag('ENTITY_TRANSLATION')
    ->range(0, 3) //TODO: make configurable
    ->execute();

  $stories = array();
  if (isset($results['node'])) {
    $stories = entity_load('node', array_keys($results['node']));
  }
  $stories_renderable = entity_view('node', $stories, 'ubn_news_panes_latest_news');

  $link_list_rendered = '';
  if (!empty($context->data)) {
    $link_list = $context->data;
    $link_list_rendered = slate_render('ubn-news-panes-latest-news-widget-link-list', array('link_list' => $link_list));
  }

  $content = slate_render('ubn-news-panes-latest-news-widget', array(
    'stories' => drupal_render($stories_renderable),
    'link_list' => trim($link_list_rendered),
  ));

  $block = new stdClass();
  $block->title = t('Current events and news');
  $block->content = $content;
  return $block;
}
