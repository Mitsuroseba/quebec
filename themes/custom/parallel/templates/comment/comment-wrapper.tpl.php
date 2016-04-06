<?php
/**
 * @file
 * Theme implementation to provide an HTML container for comments.
 * 
 * @var array $content
 */
?>
<?php if (!empty(element_children($content['comments']))) : ?>
  <div class="block--user_comments">
    <div class="wrapper">
      <?php if ($content['comments']) : ?>
        <?php print render($title_prefix); ?>
        <h3 role="heading" class="title"><?php print t('User Comments'); ?>:</h3>
        <?php print render($title_suffix); ?>
      <?php endif; ?>
      <ul>
        <?php print render($content['comments']); ?>
      </ul>
    </div>
  </div>
<?php endif; ?>
<?php print render($content['comment_form']); ?>
