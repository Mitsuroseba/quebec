<?php
/**
 * @file
 * Error template for Preview plugin.
 *
 * @see \ContentTypes\Preview
 *
 * @var array $content
 */
?>
<?php foreach ($content['items'] as $item): ?>
  <div class="error-message">
    <div class="wrapper">
      <?php if (!empty($content['info']['message']['message'])): ?>
        <?php print $content['info']['message']['message']['value']; ?>
      <?php endif; ?>

      <?php if (!empty($item->image)): ?>
        <?php print $item->image; ?>
      <?php endif; ?>
    <div>
  </div>
<?php endforeach; ?>
