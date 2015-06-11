<?php

$conf['install_profile'] = 'minimal';
$conf['master_version'] = 2;
$conf['master_modules'] = array(
  'base' => array(
    'admin_menu_toolbar',
    'adminrole',
    'auto_nodetitle',
    'backup_migrate',
    'better_formats',
    'block_class',
    'codefilter',
    'contact',
    'contextual',
    'date',
    'draggableviews',
    'entity_token',
    'entityreference',
    'exif_custom',
    'features',
    'feeds',
    'feeds_tamper',
    'field_group',
    'fontyourface_ui',
    'fontyourface_wysiwyg',
    'geshifield',
    'globalredirect',
    'imagecache_token',
    'jcarousel',
    'job_scheduler',
    'lightbox2',
    'link',
    'list',
    'logintoboggan',
    'markdown',
    'media_internet',
    'media_migrate_file_types',
    'media_wysiwyg_view_mode',
    'menu',
    'metatag',
    'nice_menus',
    'noindex_external_links',
    'number',
    'page_manager',
    'pathauto',
    'php',
    'rdf',
    'redirect',
    'statistics',
    'strongarm',
    'subpathauto',
    'taxonomy',
    'taxonomy_menu',
    'tracker',
    'twitter_actions',
    'twitter_post',
    'typekit_api',
    'typogrify',
    'update',
    'video_embed_field',

// GDG modules
    'basic_config',
    'content_dashboard',
    'feeds_article',
    'section_taxonomy',
  ),

  'local' => array(
    'dblog',
    'devel',
    'diff',
    'feeds_tamper_ui',
    'feeds_ui',
    'field_ui',
    'stage_file_proxy',
    'views_ui',
  ),

  'dev' => array(
    'dblog',
    'devel',
    'diff',
    'feeds_tamper_ui',
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
