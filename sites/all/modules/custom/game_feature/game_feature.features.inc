<?php
/**
 * @file
 * game_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function game_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function game_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function game_feature_node_info() {
  $items = array(
    'game' => array(
      'name' => t('Game'),
      'base' => 'node_content',
      'description' => t('provide entertaining tidbits to keep you awake'),
      'has_title' => '1',
      'title_label' => t('Game'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
