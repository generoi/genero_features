<?php
/**
 * @file
 * blog_feature.features.ckeditor_profile.inc
 */

/**
 * Implements hook_ckeditor_profile_defaults().
 */
function blog_feature_ckeditor_profile_defaults() {
  $data = array(
    'Filtered' => array(
      'name' => 'Filtered',
      'settings' => array(
        'ss' => 2,
        'default' => 't',
        'show_toggle' => 'f',
        'uicolor' => 'default',
        'uicolor_user' => 'default',
        'toolbar' => '[
    [\'Bold\',\'Italic\',\'-\',\'NumberedList\',\'BulletedList\',\'-\',\'Link\',\'Unlink\']
]',
        'expand' => 'f',
        'width' => '100%',
        'lang' => 'en',
        'auto_lang' => 't',
        'language_direction' => 'default',
        'allowed_content' => 't',
        'extraAllowedContent' => '',
        'enter_mode' => 'p',
        'shift_enter_mode' => 'br',
        'font_format' => 'p;h3;h4;h5;h6',
        'custom_formatting' => 'f',
        'formatting' => array(
          'custom_formatting_options' => array(
            'indent' => 'indent',
            'breakBeforeOpen' => 'breakBeforeOpen',
            'breakAfterOpen' => 'breakAfterOpen',
            'breakAfterClose' => 'breakAfterClose',
            'breakBeforeClose' => 0,
            'pre_indent' => 0,
          ),
        ),
        'css_mode' => 'none',
        'css_path' => '',
        'css_style' => 'theme',
        'styles_path' => '',
        'filebrowser' => 'none',
        'filebrowser_image' => '',
        'filebrowser_flash' => '',
        'UserFilesPath' => '%b%f/',
        'UserFilesAbsolutePath' => '%d%b%f/',
        'forcePasteAsPlainText' => 't',
        'html_entities' => 'f',
        'scayt_autoStartup' => 'f',
        'theme_config_js' => 't',
        'js_conf' => '',
        'loadPlugins' => array(),
      ),
      'input_formats' => array(
        'filtered_html' => 'Filtered HTML',
      ),
    ),
    'Full' => array(
      'name' => 'Full',
      'settings' => array(
        'ss' => 2,
        'default' => 't',
        'show_toggle' => 'f',
        'uicolor' => 'default',
        'uicolor_user' => 'default',
        'toolbar' => '[
    [\'Cut\',\'Copy\',\'Paste\',\'SpellChecker\',\'Scayt\',\'-\',\'Undo\',\'Redo\',\'-\',\'RemoveFormat\'],
    [\'Table\',\'Iframe\',\'Media\',\'-\',\'Link\',\'Unlink\'],
    \'/\',
    [\'Format\',\'Bold\',\'Italic\',\'Underline\',\'Strike\',\'Blockquote\',\'-\',\'NumberedList\',\'BulletedList\',\'-\',\'JustifyLeft\',\'JustifyCenter\',\'JustifyRight\',\'JustifyBlock\']
]',
        'expand' => 't',
        'width' => '100%',
        'lang' => 'en',
        'auto_lang' => 't',
        'language_direction' => 'default',
        'allowed_content' => 't',
        'extraAllowedContent' => '',
        'enter_mode' => 'p',
        'shift_enter_mode' => 'br',
        'font_format' => 'p;h1;h2;h3;h4;h5;h6',
        'custom_formatting' => 'f',
        'formatting' => array(
          'custom_formatting_options' => array(
            'indent' => 'indent',
            'breakBeforeOpen' => 'breakBeforeOpen',
            'breakAfterOpen' => 'breakAfterOpen',
            'breakAfterClose' => 'breakAfterClose',
            'breakBeforeClose' => 0,
            'pre_indent' => 0,
          ),
        ),
        'css_mode' => 'none',
        'css_path' => '',
        'css_style' => 'theme',
        'styles_path' => '',
        'filebrowser' => 'none',
        'filebrowser_image' => '',
        'filebrowser_flash' => '',
        'UserFilesPath' => '%b%f/',
        'UserFilesAbsolutePath' => '%d%b%f/',
        'forcePasteAsPlainText' => 't',
        'html_entities' => 'f',
        'scayt_autoStartup' => 'f',
        'theme_config_js' => 't',
        'js_conf' => '',
        'loadPlugins' => array(
          'media' => array(
            'name' => 'media',
            'desc' => 'Plugin for inserting images from Drupal media module',
            'path' => '%plugin_dir%media/',
            'buttons' => array(
              'Media' => array(
                'label' => 'Media',
                'icon' => 'images/icon.gif',
              ),
            ),
            'default' => 'f',
          ),
          'pasteformat' => array(
            'name' => 'pasteformat',
            'desc' => 'Paste Format: Plugin to cleanup pasted text',
            'path' => '%base_path%sites/all/modules/contrib/pasteformat/plugins/pasteformat/',
            'buttons' => FALSE,
          ),
        ),
      ),
      'input_formats' => array(
        'full_html' => 'Full HTML',
      ),
    ),
  );
  return $data;
}
