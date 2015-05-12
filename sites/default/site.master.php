<?php

$conf['install_profile'] = 'minimal';
$conf['master_version'] = 2;
$conf['master_modules'] = array(
  'base' => array(
    0 => 'minimal',
    1 => 'admin_menu_toolbar',
    2 => 'auto_nodetitle',
    3 => 'block_class',
    4 => 'blog',
    5 => 'codefilter',
    6 => 'contact',
    7 => 'contextual',
    9 => 'draggableviews',
    10 => 'entity_token',
    11 => 'entityreference',
    12 => 'features',
    14 => 'fontyourface_ui',
    15 => 'fontyourface_wysiwyg',
    16 => 'geshifield',
    17 => 'jcarousel',
    18 => 'lightbox2',
    19 => 'link',
    20 => 'logintoboggan',
    21 => 'markdown',
    22 => 'media_internet',
    23 => 'media_migrate_file_types',
    24 => 'media_wysiwyg_view_mode',
    25 => 'menu',
    26 => 'mobile_theme',
    27 => 'noindex_external_links',
    28 => 'page_manager',
    29 => 'panels_node',
    30 => 'pathauto',
    31 => 'php',
    32 => 'rotating_banner',
    34 => 'statistics',
    35 => 'strongarm',
    36 => 'subpathauto',
    37 => 'taxonomy',
    38 => 'tracker',
    39 => 'twitter_actions',
    40 => 'twitter_post',
    41 => 'typekit_api',
    42 => 'typogrify',
    43 => 'update',
    44 => 'video_embed_field',
  ),

  'local' => array(
    'devel',
    'field_ui',
    'stage_file_proxy',
    'views_ui',
  ),

  'dev' => array(
    'devel',
    'field_ui',
    'stage_file_proxy',
    'views_ui',
  ),

  'prod' => array(),

);
$conf['master_uninstall_blacklist'] = array(
  'base' => array(
    0 => 'ckeditor',
  ),
);
$conf['master_removable_blacklist'] = array(
  0 => 'modules/*',
);
