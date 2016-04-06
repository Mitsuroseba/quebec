<?php
/**
 * @file
 * Footer content theme variant for Templatable Region style plugin.
 *
 * @see Styles\TemplatableRegion
 *
 * @var array $settings
 * @var string[] $panes
 */
?>
<?php if (!empty($panes)): ?>
  <div class="block--footer">
    <div class="wrapper">
      <?php foreach ($panes as $pid => $content): ?>
        <?php print $content; ?>
      <?php endforeach; ?>
    </div>
  </div>
<?php endif; ?>
