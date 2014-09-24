<?php

/**
* Implementation of hook_views_default_views().
**/
function views_in_code_views_default_views() {
  $files = file_scan_directory(drupal_get_path('module', 'views_in_code'). '/views', '/.*\.view$/');
  foreach ($files as $filepath => $file) {
    require $filepath;
    if (isset($view)) {
      $views[$view->name] = $view;
    }
  }
  return $views;
}