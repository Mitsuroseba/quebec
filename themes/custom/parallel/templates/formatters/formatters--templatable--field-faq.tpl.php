<?php
/**
 * @file
 * Theme for "Question and answer" field formatter.
 *
 * @var array $settings
 * @var array[] $items
 */
?>
<?php if (!empty($items)): ?>
  <div class="block--accordion">
    <ul>
      <?php foreach ($items as $item): ?>
        <li class="accordion-container">
          <div class="accordion-container__btn">
            <h5>
              <?php print $item['entity']->title; ?>
            </h5>
          </div>
          <div class="accordion-container__content">
            <div class="accordion-container__content-inner">
              <p class="question">
                "<?php print $item['entity']->field_question[LANGUAGE_NONE][0]['value']; ?>"
              </p>
              <p class="answer">
                <?php print $item['entity']->field_answer[LANGUAGE_NONE][0]['value']; ?>
              </p>
            </div>
          </div>
        </li>
      <?php endforeach; ?>
    </ul>
  </div>
<?php endif; ?>
