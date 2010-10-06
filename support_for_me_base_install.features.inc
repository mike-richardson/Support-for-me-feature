<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function support_for_me_base_install_context_default_contexts() {
  $items = array();

  $items['context_ui-section-atoz'] = array(
    'namespace' => 'context_ui',
    'attribute' => 'section',
    'value' => 'atoz',
    'description' => 'Highlight AtoZ',
    'path' => array(
      'evince/dir/atoz/*' => 'evince/dir/atoz/*',
      'evince/dir/atoz' => 'evince/dir/atoz',
    ),
    'menu' => 'evince/dir/atoz',
    'block' => array(),
  );
  $items['context_ui-section-categories'] = array(
    'namespace' => 'context_ui',
    'attribute' => 'section',
    'value' => 'categories',
    'description' => 'Highlight AtoZ',
    'path' => array(
      'evince/dir/category/*' => 'evince/dir/category/*',
    ),
    'menu' => 'evince/dir/category/8',
    'block' => array(),
  );
  $items['context_ui-section-directory'] = array(
    'namespace' => 'context_ui',
    'attribute' => 'section',
    'value' => 'directory',
    'description' => 'Directory hilight',
    'path' => array(
      'evince/dir/category/*' => 'evince/dir/category/*',
      'evince/dir/category' => 'evince/dir/category',
    ),
    'menu' => 'evince/dir/category/7',
    'block' => array(),
  );
  return $items;
}
