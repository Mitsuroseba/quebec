<?php
/**
 * @file
 * Simple Quiz Form.
 */

/**
 * Implements hook_form().
 *
 * @internal
 * @inheritdoc
 */
function squiz_items_form(array $form, array &$form_state, array $items, array $results, $entity_type, $entity, $file) {
  $form_state['build_info']['files'][$file] = $file;

  $form['#entity_type'] = $entity_type;
  $form['#results'] = $results;
  $form['#entity'] = $entity;

  // Can't affect on attribute using "TRUE" or "FALSE".
  $disabled = empty($form_state['#disabled']) ? [] : ['disabled' => TRUE];
  $result = empty($form_state['#result']) ? [] : $form_state['#result'];

  $form['questions'] = [
    '#type' => 'squiz_items',
  ];

  foreach ($items as $i => $item) {
    $form['questions'][] = [
      '#type' => 'squiz_item',
      '#title' => $item['question'],
      '#options' => $item['options'],
      '#available' => $item['available'],
      '#attributes' => $disabled + [],
    ];
  }

  $form['submit'] = [
    '#type' => 'submit',
    '#value' => empty($disabled) ? t('Show result') : t('Your result'),
    '#attributes' => $disabled + [
      'class' => ['button', 'load-result'],
    ],
    '#ajax' => squiz_form_wrap($form, __FUNCTION__) + [
      'event' => 'click',
    ],
  ];

  $form['result'] = $result + [
    '#type' => 'squiz_result',
  ];

  foreach (['js'] as $asset) {
    $form['#attached'][$asset][] = squiz_load_include('form', $asset, $asset);
  }

  $form['#attached']['js'][] = [
    'type' => 'setting',
    'data' => [
      'squiz' => [
        'type' => squiz_form_quiz_type($form, $form_state),
        'types' => drupal_map_assoc(['SQUIZ_QUESTION_TYPE_MAX', 'SQUIZ_QUESTION_TYPE_SUM'], 'constant'),
      ],
    ],
  ];

  return $form;
}

/**
 * Implements hook_form_submit().
 *
 * @internal
 * @inheritdoc
 */
function squiz_items_form_submit(array $form, array &$form_state) {
  switch (squiz_form_quiz_type($form, $form_state)) {
    case SQUIZ_QUESTION_TYPE_SUM:
      $sum = array_sum($form_state['values']['questions']);

      foreach ($form['#results'] as $result) {
        if (filter_var($sum, FILTER_VALIDATE_INT, [
          'options' => [
            'min_range' => $result->squiz_range['from'],
            'max_range' => $result->squiz_range['to'],
          ],
        ])) {
          $form_state['#result'] = [
            '#message' => $result->squiz_message,
            '#result' => $sum,
          ];
          break;
        }
      }
      break;

    case SQUIZ_QUESTION_TYPE_MAX:
      // @code
      // [
      //   '<VALUE>' => '<AMOUNT OF SELECTIONS>',
      // ]
      // @endcode
      $values = array_count_values($form_state['values']['questions']);
      // Get maximal from array values.
      $max = max($values);
      // Get key by value.
      $value = array_flip($values)[$max];

      foreach ($form['#results'] as $result) {
        if ($value == $result->squiz_question_value) {
          $form_state['#result'] = [
            '#message' => $result->squiz_message,
            '#result' => $result->squiz_question_value,
          ];
          break;
        }
      }
      break;
  }

  // Disable all form elements (form could be submitted only once).
  $form_state['#disabled'] = TRUE;
  $form_state['rebuild'] = TRUE;
}
