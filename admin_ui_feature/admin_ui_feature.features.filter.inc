<?php
/**
 * @file
 * admin_ui_feature.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function admin_ui_feature_filter_default_formats() {
  $formats = array();

  // Exported format: Full HTML.
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => 1,
    'filters' => array(
      'filter_autop' => array(
        'weight' => 1,
        'status' => 1,
        'settings' => array(),
      ),
      'media_filter' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
      'pathologic' => array(
        'weight' => 50,
        'status' => 1,
        'settings' => array(
          'local_paths' => 'http://fitspire.oxy.minasanor.genero.fi
http://fitspire.toffe.minasanor.genero.fi
http://fitspire.marcus.minasanor.genero.fi
http://fitspire.aunion.minasanor.genero.fi',
          'protocol_style' => 'path',
        ),
      ),
    ),
  );

  // Exported format: Unrestricted (any HTML attributes).
  $formats['unrestricted_any_html_attributes_'] = array(
    'format' => 'unrestricted_any_html_attributes_',
    'name' => 'Unrestricted (any HTML attributes)',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_autop' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'media_filter' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
      'pathologic' => array(
        'weight' => 50,
        'status' => 1,
        'settings' => array(
          'local_paths' => 'http://fitspire.oxy.minasanor.genero.fi
http://fitspire.toffe.minasanor.genero.fi
http://fitspire.marcus.minasanor.genero.fi
http://fitspire.aunion.minasanor.genero.fi',
          'protocol_style' => 'path',
        ),
      ),
    ),
  );

  return $formats;
}
