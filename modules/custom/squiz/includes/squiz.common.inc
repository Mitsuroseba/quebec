<?php
/**
 * @file
 * Auxiliary functionality.
 */

/**
 * Load and wrap field collection items.
 *
 * @param array|\FieldCollectionItemEntity[] $items
 *   An array with "value" and "revision_id" keys.
 *
 * @return \stdClass[]
 *   Wrapped items.
 */
function squiz_field_collection_items(array $items) {
  foreach ($items as $i => $item) {
    $item = $item instanceof \FieldCollectionItemEntity ? $item : field_collection_field_get_entity($item);
    $values = [];

    if (!empty($item)) {
      $wrapper = entity_metadata_wrapper('field_collection_item', $item);

      foreach (field_info_instances($wrapper->type(), $item->field_name) as $field_name => $instance) {
        $values[$field_name] = $wrapper->{$field_name}->value();
      }
    }

    if (empty($values)) {
      unset($items[$i]);
    }
    else {
      $items[$i] = (object) $values;
    }
  }

  return $items;
}

/**
 * Wrap form into additional element.
 *
 * @param array $form
 *   Form elements.
 * @param string $wrapper_id
 *   Custom ID for wrapper of form.
 * @param string $key
 *   Form element name.
 *
 * @return string[]
 *   Wrapper callback and element name.
 */
function squiz_form_wrap(array &$form, $wrapper_id, $key = '') {
  $element =& $form;

  if (isset($form[$key]) && is_array($form[$key])) {
    $element =& $form[$key];
    $wrapper_id .= "_$key";
  }

  if (isset($element['#prefix'], $element['#suffix'])) {
    foreach (element_children($element) as $child) {
      if (isset($element[$child]['#ajax'])) {
        $wrapper_id = $element[$child]['#ajax']['wrapper'];
        break;
      }
    }
  }
  else {
    $element['#prefix'] = '<div id="' . $wrapper_id . '">';
    $element['#suffix'] = '</div>';
  }

  return [
    'return' => $key,
    'wrapper' => $wrapper_id,
    'callback' => 'squiz_form_ajax',
  ];
}

/**
 * Detect the type of quiz.
 *
 * @param array $form
 *   Form elements.
 * @param array $form_state
 *   Form state.
 *
 * @return int
 *   One of type constants.
 */
function squiz_form_quiz_type(array &$form, array &$form_state) {
  if (empty($form_state['input']['squiz_type'])) {
    if (squiz_form_has_entity($form)) {
      $squiz_type = field_get_items($form['#entity_type'], $form['#entity'], 'squiz_type', LANGUAGE_NONE);

      if (FALSE !== $squiz_type) {
        $squiz_type = $squiz_type[0]['value'];
      }
    }
  }
  else {
    $squiz_type = $form_state['input']['squiz_type'][LANGUAGE_NONE];
  }

  return empty($squiz_type) ? SQUIZ_QUESTION_TYPE_SUM : (int) $squiz_type;
}

/**
 * Check for entity and entity type properties in a form implementation.
 *
 * @param array $form
 *   Form elements.
 *
 * @return bool
 *   Result of checking.
 */
function squiz_form_has_entity(array $form) {
  return isset($form['#entity_type'], $form['#entity']);
}

/**
 * Checking validity of a form.
 *
 * @param array $form
 *   Form elements.
 *
 * @return bool
 *   Result of checking.
 */
function squiz_form_is_valid(array $form) {
  squiz_load_include('fields');

  // Form is valid when contains necessary fields and information about entity.
  return (bool) array_intersect_key($form, squiz_fields_schema('EMPTY', 'EMPTY')) && squiz_form_has_entity($form);
}

/**
 * AJAX form callback.
 *
 * @see ajax_form_callback()
 *
 * @internal
 * @inheritdoc
 */
function squiz_form_ajax(array $form, array &$form_state) {
  $data = $form_state['triggering_element']['#ajax'];

  return isset($data['return'], $form[$data['return']]) ? $form[$data['return']] : $form;
}

/**
 * Attach quiz fields to bundle of an entity.
 *
 * @example
 * squiz_attach('taxonomy_term', 'countries');
 * squiz_attach('node', 'questionnaires');
 *
 * @param string $entity_type
 *   The type of entity.
 * @param string $bundle
 *   The type of entity bundle.
 * @param bool $recreate
 *   Remove and create fields and their instances. All data will be lost.
 */
function squiz_attach($entity_type, $bundle, $recreate = FALSE) {
  $entity_info = entity_get_info($entity_type);

  if (!empty($entity_info) && !empty($entity_info['bundles'][$bundle])) {
    squiz_load_include('fields');
    squiz_create_fields(squiz_fields_schema($entity_type, $bundle), $recreate);
  }
}

/**
 * Iterate through the field collection items of the form.
 *
 * @param array $element
 *   Field collection form element.
 * @param callable $callback
 *   Processing callback.
 */
function squiz_form_field_collection_iterator(array &$element, callable $callback) {
  $total = $element[LANGUAGE_NONE]['#max_delta'];

  for ($current = 0; $current <= $total; $current++) {
    $callback($element[LANGUAGE_NONE][$current], $current, $total);
  }
}
