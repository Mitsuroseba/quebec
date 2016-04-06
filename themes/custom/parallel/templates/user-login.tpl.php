<?php
/**
 * @file
 * Template for the user login form.
 *
 * @var array $form
 */
?>
<div class="form-container">
  <?php print render($form['name']); ?>
</div>

<div class="form-container">
  <?php foreach (['pass', 'form_id', 'form_build_id', 'form_token', 'actions'] as $field_name): ?>
    <?php print render($form[$field_name]); ?>
  <?php endforeach; ?>
</div>
