<?php
/**
 * @file
 * Paragraph image template for ContentMedia plugin.
 *
 * @see \ContentTypes\ContentMedia
 *
 * @var array $content
 */
?>
<?php foreach ($content['items'] as $item): ?>
  <?php if (!empty($item->title)): ?>
    <h2 role="heading">
      <?php print check_plain($item->title); ?>
    </h2>
  <?php endif; ?>

  <?php if (!empty($item->image)): ?>
    <div class="paragraph-image">
      <?php print $item->image; ?>
    </div>
  <?php endif; ?>
<?php endforeach; ?>
