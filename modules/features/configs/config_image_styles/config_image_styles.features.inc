<?php
/**
 * @file
 * config_image_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function config_image_styles_image_default_styles() {
  $styles = array();

  // Exported image style: 100x56.
  $styles['100x56'] = array(
    'label' => '100x56',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 56,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 100x80.
  $styles['100x80'] = array(
    'label' => '100x80',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 100,
          'height' => 80,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 124x124.
  $styles['124x124'] = array(
    'label' => '124x124',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 124,
          'height' => 124,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 150x100.
  $styles['150x100'] = array(
    'label' => '150x100',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 150,
          'height' => 100,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 150x110.
  $styles['150x110'] = array(
    'label' => '150x110',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 150,
          'height' => 110,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 17x25.
  $styles['17x25'] = array(
    'label' => '17x25',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 17,
          'height' => 25,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 220x120.
  $styles['220x120'] = array(
    'label' => '220x120',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 220,
          'height' => 120,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 260x173.
  $styles['260x173'] = array(
    'label' => '260x173',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 260,
          'height' => 173,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 285x160.
  $styles['285x160'] = array(
    'label' => '285x160',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 285,
          'height' => 160,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 290x180.
  $styles['290x180'] = array(
    'label' => '290x180',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 290,
          'height' => 180,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 500x300.
  $styles['500x300'] = array(
    'label' => '500x300',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 500,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 600x340.
  $styles['600x340'] = array(
    'label' => '600x340',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 600,
          'height' => 340,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 64x64.
  $styles['64x64'] = array(
    'label' => '64x64',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 64,
          'height' => 64,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 760x350.
  $styles['760x350'] = array(
    'label' => '760x350',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 760,
          'height' => 350,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
