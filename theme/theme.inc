<?php
/**
 * @file
 * Theming and preprocess functions.
 */

/**
 * Implements hook_preprocess().
 */
function ah_recipes_preprocess_recipes_dirt(array &$variables) {
  $path = drupal_get_path('module', 'ah_recipes');
  drupal_add_css("$path/css/recipes_dirt.css");
  $label = t("@tool on DiRT", array('@tool' => $variables['title']));
  $node_url = variable_get('ah_recipes_dirt_url', ''). "/{$variables['path']}";
  $variables['link'] = l($label, $node_url);
}
