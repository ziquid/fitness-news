<?php

/**/
function fitness_preprocess_html(&$variables) {

// viewport
  $meta_viewport = array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#attributes' => array(
      'name' => 'viewport',
      'content' =>  'width=device-width, user-scalable=no, initial-scale=1.0, maximum-scale=1.0, minimum-scale=1.0',
    )
  );

  drupal_add_html_head($meta_viewport, 'meta_viewport');

// add bg image if node has one
  if (arg(0) == 'node') {

    $node = node_load(arg(1));

    if (isset($node->field_image[LANGUAGE_NONE][0]['uri'])) {

      $image_uri = file_create_url(
        $node->field_image[LANGUAGE_NONE][0]['uri']
      );

      drupal_add_css('
        body {
          background: url("' . $image_uri . '") center center fixed;
          -moz-background-size: cover;
          -webkit-background-size: cover;
          -o-background-size: cover;
          background-size: cover;
        }', array(
          'group' => CSS_THEME,
          'type' => 'inline',
          'weight' => -10,
          'media' => 'screen',
        )
      );

      $variables['styles'] = drupal_get_css();

    }

  }

}
