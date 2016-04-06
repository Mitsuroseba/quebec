<?php
/**
 * @file
 * Field definitions.
 */

/**
 * Default fields schema.
 *
 * @param string $entity_type
 *   The type of entity.
 * @param string $bundle
 *   The type of entity bundle.
 *
 * @return array
 *   Field definitions.
 */
function squiz_fields_schema($entity_type, $bundle) {
  $fields = [];

  $fields['squiz_type'] = [
    'type' => 'list_text',
    // Instance settings below.
    'label' => 'Quiz type',
    'required' => TRUE,
    'bundle' => $bundle,
    'entity_type' => $entity_type,
    'default_value' => [['value' => SQUIZ_QUESTION_TYPE_SUM]],
    'settings' => [
      'allowed_values' => [
        SQUIZ_QUESTION_TYPE_SUM => 'Amount question value',
        SQUIZ_QUESTION_TYPE_MAX => 'The maximum count of a specific question value',
      ],
    ],
    'widget' => [
      'type' => 'options_buttons',
      // @todo Remove this weight.
      'weight' => 6,
    ]
  ];

  // Parent: "squiz_items".
  $fields['squiz_items'] = [
    'type' => 'field_collection',
    // Instance settings below.
    'label' => 'Quiz Items',
    'bundle' => $bundle,
    'entity_type' => $entity_type,
    'display' => [
      'default' => [
        'type' => 'field_collection_squiz_form',
      ],
    ],
  ];

  // Nesting: squiz_items => squiz_question.
  $fields['squiz_items']['#children']['squiz_question'] = [
    'type' => 'text',
    // Instance settings below.
    'label' => 'Question',
    'required' => TRUE,
  ];

  // Nesting: squiz_items => squiz_available.
  $fields['squiz_items']['#children']['squiz_available'] = [
    'type' => 'number_integer',
    // Instance settings below.
    'label' => 'Availability',
    'description' => 'This question will be available only when user will have more or equal of specified value.',
  ];

  // Nesting: squiz_items => squiz_variants.
  $fields['squiz_items']['#children']['squiz_variants'] = [
    'type' => 'text',
    'cardinality' => 3,
    // Instance settings below.
    'label' => 'Variants',
    'required' => TRUE,
  ];

  // Parent: "squiz_results".
  $fields['squiz_results'] = [
    'type' => 'field_collection',
    // Instance settings below.
    'label' => 'Results',
    'bundle' => $bundle,
    'entity_type' => $entity_type,
  ];

  // Nesting: squiz_results => squiz_question_value.
  $fields['squiz_results']['#children']['squiz_question_value'] = [
    'type' => 'number_integer',
    // Instance settings below.
    'label' => 'Value of question',
    'description' => 'The value of question which meets more often.',
    'required' => TRUE,
  ];

  // Nesting: squiz_results => squiz_range.
  $fields['squiz_results']['#children']['squiz_range'] = [
    'type' => 'range_integer',
    // Instance settings below.
    'label' => 'Range',
    'required' => TRUE,
    'settings' => [
      'max' => '',
      'min' => 0,
    ],
    'widget' => [
      'type' => 'range',
    ],
  ];

  // Nesting: squiz_results => squiz_message.
  $fields['squiz_results']['#children']['squiz_message'] = [
    'type' => 'text_long',
    // Instance settings below.
    'label' => 'Message',
    'required' => TRUE,
  ];

  return $fields;
}

/**
 * Create fields tree recursively.
 *
 * @param array[] $fields
 *   Field definitions.
 * @param bool $delete
 *   Indicates that fields should be removed previously.
 */
function squiz_create_fields(array $fields, $delete = FALSE) {
  foreach ($fields as $field_name => $field) {
    $field['locked'] = TRUE;
    $field['field_name'] = $field_name;

    foreach (['widget', 'settings'] as $property) {
      $field += [$property => []];
    }

    switch ($field['type']) {
      case 'field_collection':
        // Set unlimited cardinality by default.
        $field += [
          'cardinality' => -1,
        ];

        // Set an embed widget by default.
        $field['widget'] += [
          'type' => 'field_collection_embed',
        ];
        break;

      case 'number_integer':
        $field['widget'] += [
          'type' => 'number',
        ];

        $field['settings'] += [
          'max' => '',
          'min' => 1,
          'prefix' => '',
          'suffix' => '',
          'max_length' => 10,
        ];
        break;

      case 'text_long':
        $field['widget'] += [
          'type' => 'text_textarea',
        ];

        $field['settings'] += [
          'text_processing' => TRUE,
          'allowed_formats_toggle' => TRUE,
        ];
        break;

      case 'text':
        $field['widget'] += [
          'type' => 'text_textfield',
        ];

        $field['settings'] += [
          'allowed_formats_toggle' => TRUE,
        ];
        break;
    }

    if ($delete) {
      field_delete_field($field_name);
      field_delete_instance($field, FALSE);
    }

    if (!field_info_field($field_name)) {
      field_create_field($field);
    }

    if (!field_info_instance($field['entity_type'], $field_name, $field['bundle'])) {
      field_create_instance($field);
    }

    if (!empty($field['#children'])) {
      // Build fields tree.
      foreach ($field['#children'] as $i => $child) {
        $field['#children'][$i] += [
          'bundle' => $field_name,
          'entity_type' => 'field_collection_item',
        ];
      }

      call_user_func(__FUNCTION__, $field['#children']);
    }
  }
}
