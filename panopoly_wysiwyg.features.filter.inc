<?php
/**
 * @file
 * panopoly_wysiwyg.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function panopoly_wysiwyg_filter_default_formats() {
  $formats = array();

  // Exported format: HTML
  $formats['panopoly_html_text'] = array(
    'format' => 'panopoly_html_text',
    'name' => 'HTML',
    'cache' => '1',
    'status' => '1',
    'weight' => '-9',
    'filters' => array(
      'caption_filter' => array(
        'weight' => '10',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_autop' => array(
        'weight' => '10',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => '10',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => '10',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => '72',
        ),
      ),
      'image_resize_filter' => array(
        'weight' => '10',
        'status' => '1',
        'settings' => array(
          'link' => 0,
          'link_class' => '',
          'link_rel' => '',
          'image_locations' => array(
            'local' => 'local',
            'remote' => 'remote',
          ),
        ),
      ),
      'media_filter' => array(
        'weight' => '10',
        'status' => '1',
        'settings' => array(),
      ),
      'wysiwyg' => array(
        'weight' => '10',
        'status' => '1',
        'settings' => array(
          'valid_elements' => 'a[!href|target<_blank|title|style],
        div[style|align<center?justify?left?right],
        br,em,i,strong,cite,code,blockquote,ul,ol,li,dl,dt,dd,
        span[style],p[style],
        h1,h2,h3,h4,h5,h6,
        img[!src|title|alt|style|width|height|class],
        @[style]',
          'allow_comments' => '1',
          'nofollow_policy' => 'disabled',
          'nofollow_domains' => array(
            0 => 'openacademy.local',
          ),
          'style_color' => array(
            'color' => 'color',
            'background' => 0,
            'background-color' => 0,
            'background-image' => 0,
            'background-repeat' => 0,
            'background-attachment' => 0,
            'background-position' => 0,
          ),
          'style_font' => array(
            'font' => 0,
            'font-family' => 0,
            'font-size' => 0,
            'font-size-adjust' => 0,
            'font-stretch' => 0,
            'font-style' => 0,
            'font-variant' => 0,
            'font-weight' => 0,
          ),
          'style_text' => array(
            'text-align' => 'text-align',
            'text-decoration' => 'text-decoration',
            'text-indent' => 0,
            'text-transform' => 0,
            'letter-spacing' => 0,
            'word-spacing' => 0,
            'white-space' => 0,
            'direction' => 0,
            'unicode-bidi' => 0,
          ),
          'style_box' => array(
            'padding-right' => 'padding-right',
            'padding-left' => 'padding-left',
            'margin' => 0,
            'margin-top' => 0,
            'margin-right' => 0,
            'margin-bottom' => 0,
            'margin-left' => 0,
            'padding' => 0,
            'padding-top' => 0,
            'padding-bottom' => 0,
          ),
          'style_border-1' => array(
            'border' => 0,
            'border-top' => 0,
            'border-right' => 0,
            'border-bottom' => 0,
            'border-left' => 0,
            'border-width' => 0,
            'border-top-width' => 0,
            'border-right-width' => 0,
            'border-bottom-width' => 0,
            'border-left-width' => 0,
          ),
          'style_border-2' => array(
            'border-color' => 0,
            'border-top-color' => 0,
            'border-right-color' => 0,
            'border-bottom-color' => 0,
            'border-left-color' => 0,
            'border-style' => 0,
            'border-top-style' => 0,
            'border-right-style' => 0,
            'border-bottom-style' => 0,
            'border-left-style' => 0,
          ),
          'style_dimension' => array(
            'height' => 0,
            'line-height' => 0,
            'max-height' => 0,
            'max-width' => 0,
            'min-height' => 0,
            'min-width' => 0,
            'width' => 0,
          ),
          'style_positioning' => array(
            'bottom' => 0,
            'clip' => 0,
            'left' => 0,
            'overflow' => 0,
            'right' => 0,
            'top' => 0,
            'vertical-align' => 0,
            'z-index' => 0,
          ),
          'style_layout' => array(
            'clear' => 0,
            'display' => 0,
            'float' => 0,
            'position' => 0,
            'visibility' => 0,
          ),
          'style_list' => array(
            'list-style' => 0,
            'list-style-image' => 0,
            'list-style-position' => 0,
            'list-style-type' => 0,
          ),
          'style_table' => array(
            'border-collapse' => 0,
            'border-spacing' => 0,
            'caption-side' => 0,
            'empty-cells' => 0,
            'table-layout' => 0,
          ),
          'style_user' => array(
            'cursor' => 0,
            'outline' => 0,
            'outline-width' => 0,
            'outline-style' => 0,
            'outline-color' => 0,
            'zoom' => 0,
          ),
          'rule_valid_classes' => array(
            0 => 'wysiwyg-break',
          ),
          'rule_valid_ids' => array(),
          'rule_style_urls' => array(),
        ),
      ),
    ),
  );

  // Exported format: WYSIWYG
  $formats['panopoly_wysiwyg_text'] = array(
    'format' => 'panopoly_wysiwyg_text',
    'name' => 'WYSIWYG',
    'cache' => '1',
    'status' => '1',
    'weight' => '-10',
    'filters' => array(
      'media_filter' => array(
        'weight' => '-49',
        'status' => '1',
        'settings' => array(),
      ),
      'image_resize_filter' => array(
        'weight' => '-48',
        'status' => '1',
        'settings' => array(
          'link' => 0,
          'link_class' => '',
          'link_rel' => '',
          'image_locations' => array(
            'local' => 'local',
            'remote' => 'remote',
          ),
        ),
      ),
      'wysiwyg' => array(
        'weight' => '-46',
        'status' => '1',
        'settings' => array(
          'valid_elements' => 'a[!href|target<_blank|title|style],
        div[style|align<center?justify?left?right],
        br,em,i,strong,cite,code,blockquote,ul,ol,li,dl,dt,dd,
        span[style],p[style],
        h1,h2,h3,h4,h5,h6,
        img[!src|title|alt|style|width|height|class],
        @[style]',
          'allow_comments' => '1',
          'nofollow_policy' => 'disabled',
          'nofollow_domains' => array(
            0 => 'openacademy.local',
          ),
          'style_color' => array(
            'color' => 'color',
            'background' => 0,
            'background-color' => 0,
            'background-image' => 0,
            'background-repeat' => 0,
            'background-attachment' => 0,
            'background-position' => 0,
          ),
          'style_font' => array(
            'font' => 0,
            'font-family' => 0,
            'font-size' => 0,
            'font-size-adjust' => 0,
            'font-stretch' => 0,
            'font-style' => 0,
            'font-variant' => 0,
            'font-weight' => 0,
          ),
          'style_text' => array(
            'text-align' => 'text-align',
            'text-decoration' => 'text-decoration',
            'text-indent' => 0,
            'text-transform' => 0,
            'letter-spacing' => 0,
            'word-spacing' => 0,
            'white-space' => 0,
            'direction' => 0,
            'unicode-bidi' => 0,
          ),
          'style_box' => array(
            'padding-right' => 'padding-right',
            'padding-left' => 'padding-left',
            'margin' => 0,
            'margin-top' => 0,
            'margin-right' => 0,
            'margin-bottom' => 0,
            'margin-left' => 0,
            'padding' => 0,
            'padding-top' => 0,
            'padding-bottom' => 0,
          ),
          'style_border-1' => array(
            'border' => 0,
            'border-top' => 0,
            'border-right' => 0,
            'border-bottom' => 0,
            'border-left' => 0,
            'border-width' => 0,
            'border-top-width' => 0,
            'border-right-width' => 0,
            'border-bottom-width' => 0,
            'border-left-width' => 0,
          ),
          'style_border-2' => array(
            'border-color' => 0,
            'border-top-color' => 0,
            'border-right-color' => 0,
            'border-bottom-color' => 0,
            'border-left-color' => 0,
            'border-style' => 0,
            'border-top-style' => 0,
            'border-right-style' => 0,
            'border-bottom-style' => 0,
            'border-left-style' => 0,
          ),
          'style_dimension' => array(
            'height' => 0,
            'line-height' => 0,
            'max-height' => 0,
            'max-width' => 0,
            'min-height' => 0,
            'min-width' => 0,
            'width' => 0,
          ),
          'style_positioning' => array(
            'bottom' => 0,
            'clip' => 0,
            'left' => 0,
            'overflow' => 0,
            'right' => 0,
            'top' => 0,
            'vertical-align' => 0,
            'z-index' => 0,
          ),
          'style_layout' => array(
            'clear' => 0,
            'display' => 0,
            'float' => 0,
            'position' => 0,
            'visibility' => 0,
          ),
          'style_list' => array(
            'list-style' => 0,
            'list-style-image' => 0,
            'list-style-position' => 0,
            'list-style-type' => 0,
          ),
          'style_table' => array(
            'border-collapse' => 0,
            'border-spacing' => 0,
            'caption-side' => 0,
            'empty-cells' => 0,
            'table-layout' => 0,
          ),
          'style_user' => array(
            'cursor' => 0,
            'outline' => 0,
            'outline-width' => 0,
            'outline-style' => 0,
            'outline-color' => 0,
            'zoom' => 0,
          ),
          'rule_valid_classes' => array(
            0 => 'wysiwyg-break',
          ),
          'rule_valid_ids' => array(),
          'rule_style_urls' => array(),
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => '-44',
        'status' => '1',
        'settings' => array(),
      ),
      'caption_filter' => array(
        'weight' => '-43',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_autop' => array(
        'weight' => '-42',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => '-41',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => '72',
        ),
      ),
    ),
  );

  return $formats;
}
