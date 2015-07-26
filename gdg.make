; This file was auto-generated by drush make
core = 7.x
api = 2

; Core
projects[drupal][version] = "7.38"
projects[drupal][type] = "core"

; Modules
projects[admin_menu][subdir] = "contrib"
projects[admin_menu][version] = "3.0-rc5"

projects[adminrole][subdir] = "contrib"
projects[adminrole][version] = "1.0"

projects[auto_nodetitle][subdir] = "contrib"
projects[auto_nodetitle][version] = "1.0"

projects[backup_migrate][subdir] = "contrib"
projects[backup_migrate][version] = "3.1"

projects[better_formats][subdir] = "contrib"
projects[better_formats][version] = "1.0-beta1"

projects[block_class][subdir] = "contrib"
projects[block_class][version] = "2.1"

projects[ctools][subdir] = "contrib"
projects[ctools][version] = "1.7"

projects[codefilter][subdir] = "contrib"
projects[codefilter][version] = "1.1"

projects[date][subdir] = "contrib"
projects[date][version] = "2.8"

projects[devel][subdir] = "contrib"
projects[devel][version] = "1.5"

projects[diff][subdir] = "contrib"
projects[diff][version] = "3.2"

projects[draggableviews][subdir] = "contrib"
projects[draggableviews][version] = "2.1"

projects[ds][subdir] = "contrib"
projects[ds][version] = "2.11"

projects[entity][subdir] = "contrib"
projects[entity][version] = "1.6"

projects[entityreference][subdir] = "contrib"
projects[entityreference][version] = "1.1"

projects[exif_custom][subdir] = "contrib"
projects[exif_custom][version] = "1.14"

projects[features][subdir] = "contrib"
projects[features][version] = "2.6"

projects[feeds][subdir] = "contrib"
projects[feeds][version] = "2.0-beta1"
projects[feeds][patch][] = "./patches/feeds_see_simplepie_1.3.1.patch"

projects[feeds_tamper][subdir] = "contrib"
projects[feeds_tamper][version] = "1.1"

projects[field_group][subdir] = "contrib"
projects[field_group][version] = "1.4"

projects[file_entity][subdir] = "contrib"
projects[file_entity][version] = "2.0-beta2"

projects[fontyourface][subdir] = "contrib"
projects[fontyourface][version] = "2.8"

projects[geshifilter][subdir] = "contrib"
projects[geshifilter][version] = "1.2"

projects[globalredirect][subdir] = "contrib"
projects[globalredirect][version] = "1.5"

projects[imagecache_token][subdir] = "contrib"
projects[imagecache_token][version] = "1.x-dev"

projects[jcarousel][subdir] = "contrib"
projects[jcarousel][version] = "2.7"

projects[job_scheduler][subdir] = "contrib"
projects[job_scheduler][version] = "2.0-alpha3"

projects[libraries][subdir] = "contrib"
projects[libraries][version] = "2.2"

projects[lightbox2][subdir] = "contrib"
projects[lightbox2][version] = "1.0-beta1"

projects[link][subdir] = "contrib"
projects[link][version] = "1.3"

projects[logintoboggan][subdir] = "contrib"
projects[logintoboggan][version] = "1.5"

projects[markdown][subdir] = "contrib"
projects[markdown][version] = "1.2"

projects[master][subdir] = "contrib"
projects[master][version] = "2.0-beta4"

projects[media][subdir] = "contrib"
projects[media][version] = "2.0-beta1"

projects[menu_trail_by_path][subdir] = "contrib"
projects[menu_trail_by_path][version] = "2.0"

projects[metatag][subdir] = "contrib"
projects[metatag][version] = "1.7"

projects[nice_menus][subdir] = "contrib"
projects[nice_menus][version] = "2.5"

projects[noindex_external_links][subdir] = "contrib"
projects[noindex_external_links][version] = "2.0-rc1"

projects[oauth][subdir] = "contrib"
projects[oauth][version] = "3.2"

projects[pathauto][subdir] = "contrib"
projects[pathauto][version] = "1.2"

projects[publication_date][subdir] = "contrib"
projects[publication_date][version] = "2.2"

projects[redirect][subdir] = "contrib"
projects[redirect][version] = "1.0-rc3"

projects[stage_file_proxy][subdir] = "contrib"
projects[stage_file_proxy][version] = "1.7"

projects[strongarm][subdir] = "contrib"
projects[strongarm][version] = "2.0"

projects[subpathauto][subdir] = "contrib"
projects[subpathauto][version] = "1.3"

projects[taxonomy_menu][subdir] = "contrib"
projects[taxonomy_menu][version] = "1.5"

projects[token][subdir] = "contrib"
projects[token][version] = "1.6"

projects[twitter][subdir] = "contrib"
projects[twitter][version] = "5.8"

projects[typogrify][subdir] = "contrib"
projects[typogrify][version] = "1.0-rc10"

projects[video_embed_field][subdir] = "contrib"
projects[video_embed_field][version] = "2.0-beta10"

projects[views][subdir] = "contrib"
projects[views][version] = "3.11"

projects[wysiwyg][subdir] = "contrib"
projects[wysiwyg][version] = "2.2"

projects[xmlsitemap][subdir] = "contrib"
projects[xmlsitemap][version] = "2.2"

; Themes
; Please fill the following out. Type may be one of get, git, bzr or svn,
; and url is the url of the download.
projects[gdg][download][type] = ""
projects[gdg][download][url] = ""
projects[gdg][type] = "theme"

; Libraries
; Please fill the following out. Type may be one of get, git, bzr or svn,
; and url is the url of the download.
libraries[ckeditor][download][type] = ""
libraries[ckeditor][download][url] = ""
libraries[ckeditor][directory_name] = "ckeditor"
libraries[ckeditor][type] = "library"

; Please fill the following out. Type may be one of get, git, bzr or svn,
; and url is the url of the download.
libraries[geshi][download][type] = ""
libraries[geshi][download][url] = ""
libraries[geshi][directory_name] = "geshi"
libraries[geshi][type] = "library"

libraries[simplepie][download][type] = "get"
libraries[simplepie][download][url] = "http://simplepie.org/downloads/simplepie_1.3.1.compiled.php"
libraries[simplepie][destination] = libraries
