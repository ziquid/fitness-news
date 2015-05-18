<?php
/**
 * @file
 * basic_config.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function basic_config_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'seven';
  $export['admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'block_cache';
  $strongarm->value = 1;
  $export['block_cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache';
  $strongarm->value = 1;
  $export['cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_class_cache_ctools_css';
  $strongarm->value = 'CToolsCssCache';
  $export['cache_class_cache_ctools_css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_lifetime';
  $strongarm->value = '300';
  $export['cache_lifetime'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupal_css_cache_files';
  $strongarm->value = array(
    '823ba1006db72809515d2221cd02ec1075d7b49b0c07f49307b3a7930bfdd9e4' => 'public://css/css_xE-rWrJf-fncB6ztZfd2huxqgxu4WO-qwma6Xer30m4.css',
    '592db66916e1dd3416cbe95bcb34a5a68775eb0b7cf95e4c858671de35290cc9' => 'public://css/css_LS9OUalDR9-d_lCAvF3yUWjNU6yF8ZBm84jEPRvoyuQ.css',
    '492f445de6274a3c8e2e99d22ec6987cc81c54c7f84c169188c0067f53461370' => 'public://css/css_Hj-L7XQcE0qfyJRECGV_H0uiR6AMwoPoTuTUbvzzim0.css',
    'e6f6fe67d1353ebe89118e1b2061209563d76590f1d7557ed9700fea484b393a' => 'public://css/css_wVJ3fNwdK9YIYPY0MU2zYzCJOcO2ocn9iCkWor2zsfc.css',
    '579d16e72315bb610fe24cf91f2178b39d6a080db2596057f0c9e4a35f4b13ce' => 'public://css/css_SpjOeCThpYYKbJkNVVzuAdTUYreUXZQ56rhBZ6YhXoU.css',
    'ebb3f433ad4107b1ac31e9d7de0f9a5d399040e9f82b6364211dcfaadea158c0' => 'public://css/css_Nv0ct-zkzztuah_LbaPFF8ZkdSEk-LxBtTWMm9mN_F8.css',
    'f05494fc83c9c8e2c74180252d01c9ea50f347143d606c3ea4a216ea0f24ce6e' => 'public://css/css_BR3eb_ceEn8jEAv9rAj8_gjpfC6A1BpCm8JGn5sUfnY.css',
    '5e323f31a2866e1bf3ece9a942cb83ffb30f9953822bb3831af1ef6bab2dd877' => 'public://css/css_-zS6M_ljgFTPW0eBC73OFHRFrFEchKJfGczsNPwLqAo.css',
    '032d72e2b3124645b11e59c23005327dc2b450af6aaa6bf3cad34a6a65a9d774' => 'public://css/css_ZDWl28hdmeinIcKg-HMrN6uKD0nTMld5NlXLmm5MH2U.css',
    'ce14635273bef30f43902ba1b1aac7dcab831f34cd86f227eabd4b10fc57230a' => 'public://css/css_6tml2SqADT5lkD-6spNjX3rpCKwNCMpCbg8vUj1zutU.css',
    '65ee581e47f3fa6c6ad7d9c021aae3ab51269e7a47a27e11b956611681626cb2' => 'public://css/css_gtnXCHMNJErLF7rozM4J6Nv_etP7cu_Z1dfkJHOui_Q.css',
    '0b52b1eb5bb3aeeb7073acc4931056fb1a6a35647af6aa0fe8e73a5b00f9a454' => 'public://css/css_qCV9ryJTmzM2eANJ7WsF6Jpfj_cZlfywG9hgK3s3hWY.css',
    '009ecbde63c01146a248a4c16ba17deb3d3816dc03aff4ff56dd26a23e27536f' => 'public://css/css_bIBt38DWFqEuqAToWtaTvAFWiTpSgO93LffzpK9z5Lw.css',
    '1c36101f305446b1b88af3ae50209ee3c713f1f7ffbbb30629a37d65198330fa' => 'public://css/css_1FuaQyNpeoGilFLg6GsDTprte9QHfko-0ntzSWCraiQ.css',
  );
  $export['drupal_css_cache_files'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupal_js_cache_files';
  $strongarm->value = array(
    'a571bc4156d0556568d7f04bc93f81c658b2e21fef9bb8229528c077ce9a0ccf' => 'public://js/js_xAPl0qIk9eowy_iS9tNkCWXLUVoat94SQT48UBCFkyQ.js',
    '111d860265abe08204bdf363fb75e432b0104dd26ec9ad3853b748098098279b' => 'public://js/js_KCd8rbJYUruV1tRJnh4um34UYvyhlrSVCPR1jNko2h8.js',
    'e09efa52b0e20a981af2a65470043feb7200e4a86ce07d9b47017f25277949bf' => 'public://js/js_h6kXo5NXGuzdL86Tpe1mpOLSTk7hdyZCPEGXIhSoW68.js',
    '94b066bb1357f250775b18a1492e5ca4d4d39e3629d94ad94303c5ea1f9b990d' => 'public://js/js_VIkJ2sVcQvvAtzdrVQXhZZyXlmB8TeYYJjTLH6AVPEs.js',
    '74f0ecd2ef5df5c823f79d353827b3f9134c427c316bf4cb41e7bc32b2c2e5bc' => 'public://js/js_LlEfbJsHAz_rZ-EK4oEwe3pTGBMAWlHOb-MlOc7-gGg.js',
    '473f5f74968571104965dfaeeddcfa31b64b674fd252296d2b3822373ce0770e' => 'public://js/js_GA3uOoZyw11qKwkd-0KmNizpn97m7ZrMisYSQgrRvo4.js',
    '9b1f0f555e68651367a910b2d3c39203e2915fe7edeae87c6af4659caa20fe89' => 'public://js/js_pCLrJoVeqQud-BucR1N1t0iZfyPNxCUwprm0NZzudao.js',
    'ba7828310711048f5efb31cb0286661fef89ee73d8fc8d437f3a06593d210070' => 'public://js/js_BB5G3CjF346Wj7elyAHChfXk8i93O1b6aaJQkyJFFmk.js',
    '8766ede46c78d19dc10b9b8600ba6b75cb7e6c923f4ba180fa6e246178c3bdcf' => 'public://js/js_lh63YXi1kq1SDQzMPS9RAgJvu3mVsxtsSd3_qHxIJ60.js',
    'dc589b931794ec265c5d55262b3866518c4b47f9ba802d69485397c7b7b7a77e' => 'public://js/js_YG82hrJHloYtiAgodMftPUgRoUSS3dqXQsi0bze1iqY.js',
    '233f7879a16c7e77782be8506f2a3d374e52b1319acb8e921e29c6ee468ec6e1' => 'public://js/js_H_uOTI4zYWSVfMUu3nCsZ8w85N4mukkqV3jeCIPK-Tg.js',
    'a6ea8585f96d17848ab3d9f034ab9f1b54121e092f7696081aa85fe4c9b7033f' => 'public://js/js_-JsonBCPAZg0-c6vFXcFzaSIzvSDuONHm5AdqGe1gbo.js',
    '56f3aec01b90ebcc8bd3bbcff9de7010175ee6bdad6d032928112cc1ef02645e' => 'public://js/js_LOEk5Yfv8bq_t0Rf5EWybbU9D3QpVe3Qws9EbuXSI5w.js',
    '9806a539d4bab08ab3fbfde6560f7ea51e363fadb98ab9c5ea17e85828902c1b' => 'public://js/js_ZwtHh_UtMhEyIZ7P23uU_tO_tZHXgPG1rk11b_m8s9Y.js',
    '5233381afebfe4d04eff4f1f6b68827b39c60e879c13a969a481988a56af2310' => 'public://js/js_fj_C4F7pCAbzkuAlD6pTzyYpam8GpxEnf5IL25Wg5Vs.js',
    'd0f4665949cbea1db49df381216ec447025bd1ef39743cbfeb95ca78c14c7ac3' => 'public://js/js_u5PpeO2y-2xgIRf4a9v1HW1sA5p2bBIDmBH8JsdktA8.js',
  );
  $export['drupal_js_cache_files'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'globalredirect_settings';
  $strongarm->value = array(
    'menu_check' => 1,
  );
  $export['globalredirect_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_admin_theme';
  $strongarm->value = 1;
  $export['node_admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_article';
  $strongarm->value = array();
  $export['node_options_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_article';
  $strongarm->value = '1';
  $export['node_preview_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_article';
  $strongarm->value = 1;
  $export['node_submitted_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_cache_maximum_age';
  $strongarm->value = '900';
  $export['page_cache_maximum_age'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_compression';
  $strongarm->value = 1;
  $export['page_compression'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'preprocess_css';
  $strongarm->value = 1;
  $export['preprocess_css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'preprocess_js';
  $strongarm->value = 1;
  $export['preprocess_js'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redirect_auto_redirect';
  $strongarm->value = 1;
  $export['redirect_auto_redirect'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redirect_default_status_code';
  $strongarm->value = '301';
  $export['redirect_default_status_code'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redirect_global_admin_paths';
  $strongarm->value = 0;
  $export['redirect_global_admin_paths'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redirect_global_canonical';
  $strongarm->value = 1;
  $export['redirect_global_canonical'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redirect_global_clean';
  $strongarm->value = 1;
  $export['redirect_global_clean'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redirect_global_deslash';
  $strongarm->value = 0;
  $export['redirect_global_deslash'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redirect_global_home';
  $strongarm->value = 1;
  $export['redirect_global_home'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redirect_page_cache';
  $strongarm->value = 1;
  $export['redirect_page_cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redirect_passthrough_querystring';
  $strongarm->value = 1;
  $export['redirect_passthrough_querystring'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redirect_purge_inactive';
  $strongarm->value = '0';
  $export['redirect_purge_inactive'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redirect_warning';
  $strongarm->value = FALSE;
  $export['redirect_warning'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'gdg';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_gdg_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 0,
    'toggle_slogan' => 0,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 0,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 0,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
  );
  $export['theme_gdg_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_admin_role';
  $strongarm->value = '6';
  $export['user_admin_role'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_cancel_method';
  $strongarm->value = 'user_cancel_block';
  $export['user_cancel_method'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_email_verification';
  $strongarm->value = TRUE;
  $export['user_email_verification'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_pictures';
  $strongarm->value = 1;
  $export['user_pictures'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_default';
  $strongarm->value = '';
  $export['user_picture_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_dimensions';
  $strongarm->value = '85x85';
  $export['user_picture_dimensions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_file_size';
  $strongarm->value = '30';
  $export['user_picture_file_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_guidelines';
  $strongarm->value = '';
  $export['user_picture_guidelines'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_path';
  $strongarm->value = 'pictures';
  $export['user_picture_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_style';
  $strongarm->value = '';
  $export['user_picture_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_register';
  $strongarm->value = '0';
  $export['user_register'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_signatures';
  $strongarm->value = 0;
  $export['user_signatures'] = $strongarm;

  return $export;
}
