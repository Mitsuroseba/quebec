<?php
/**
 * @file
 * Template for the user login block.
 *
 * @var array $form
 */
?>
<div class="block--golfbox-login">
  <header>
    <h3 role="heading">
      <?php print t('Golfbox'); ?>
    </h3>
  </header>

  <div class="wrapper">
    <div class="form">
      <?php foreach (['name', 'pass', 'form_id', 'form_build_id', 'form_token'] as $field_name): ?>
        <?php print render($form[$field_name]); ?>
      <?php endforeach; ?>

      <button class="form-submit">
        <?php print t('Login'); ?>
      </button>

      <ul class="login-links" role="list">
        <?php foreach (['<front>' => t('Help with login')] as $path => $title): ?>
          <li role="listitem">
            <a href="<?php print url($path); ?>">
              <?php print $title; ?>
            </a>
          </li>
        <?php endforeach; ?>
      </ul>
    </div>
  </div>
</div>
