<?php

$conf['install_profile'] = 'minimal';
$conf['master_version'] = 2;
$conf['master_modules'] = array(
  'base' => array(
    'admin_menu_toolbar',
    'adminrole',
    'auto_nodetitle',
    'better_formats',
    'block_class',
    'codefilter',
    'contact',
    'contextual',
    'draggableviews',
    'entity_token',
    'entityreference',
    'features',
    'feeds',
    'feeds_news',
    'fontyourface_ui',
    'fontyourface_wysiwyg',
    'geshifield',
    'globalredirect',
    'jcarousel',
    'job_scheduler',
    'lightbox2',
    'link',
    'logintoboggan',
    'markdown',
    'media_internet',
    'media_migrate_file_types',
    'media_wysiwyg_view_mode',
    'menu',
    'metatag',
    'noindex_external_links',
    'page_manager',
    'pathauto',
    'php',
    'rdf',
    'redirect',
    'statistics',
    'strongarm',
    'subpathauto',
    'taxonomy',
    'tracker',
    'twitter_actions',
    'twitter_post',
    'typekit_api',
    'typogrify',
    'update',
    'video_embed_field',

    'basic_config',
  ),

  'local' => array(
    'dblog',
    'devel',
    'feeds_ui',
    'field_ui',
    'stage_file_proxy',
    'views_ui',
  ),

  'dev' => array(
    'dblog',
    'devel',
    'feeds_ui',
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
