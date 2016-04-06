<?php
/**
 * @file
 * Theme variant for Templatable Region style plugin.
 *
 * @see \Styles\TemplatableRegion
 *
 * @var bool $is_admin
 * @var array $settings
 * @var string[] $panes
 */
?>
<?php if (!empty($panes)): ?>
  <div class="section--featured__right">
    <?php foreach ($panes as $pid => $content): ?>
      <?php print $content; ?>
    <?php endforeach; ?>
  </div>
<?php endif; ?>

<?php if (!$is_admin): ?>
  </section>
<?php endif; ?>
