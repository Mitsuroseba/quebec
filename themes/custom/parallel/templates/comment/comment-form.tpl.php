<?php
/**
 * @file
 * Comment form.
 * 
 * @var array $form
 */
?>
<div class="block--comments">
  <div class="wrapper">
    <h5 role="heading"><?php print t('Join the debate'); ?></h5>

    <div class="form">
      <div class="form-element">
        <?php $form['subject']['#attributes']['placeholder'][] = t('Write a subject here'); ?>
        <?php print render($form['subject']); ?>
      </div>

      <div class="form-element">
        <?php $form['comment_body'][LANGUAGE_NONE][0]['value']['#attributes']['placeholder'][] = t('And your comment here'); ?>
        <?php print render($form['comment_body']); ?>
      </div>

      <div class="form-element">
        <button name="op" type="submit"><?php print t('Post new comment'); ?></button>
      </div>
    </div>
  </div>
  <?php foreach (['form_build_id', 'form_token', 'form_id'] as $field_name): ?>
    <?php print render($form[$field_name]); ?>
  <?php endforeach; ?>
</div>
