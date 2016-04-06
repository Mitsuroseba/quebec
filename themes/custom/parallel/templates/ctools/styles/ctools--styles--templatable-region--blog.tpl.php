<?php
/**
 * @file
 * Theme variant for Templatable Region style plugin.
 *
 * @see \Styles\TemplatableRegion
 *
 * @var array $settings
 * @var string[] $panes
 */
?>
<?php if (!empty($panes)): ?>
  <div class="block--blog_post">
    <article role="article">
      <?php foreach ($panes as $pid => $content): ?>
        <?php print $content; ?>
      <?php endforeach; ?>
    </article>
  </div>
<?php endif; ?>
