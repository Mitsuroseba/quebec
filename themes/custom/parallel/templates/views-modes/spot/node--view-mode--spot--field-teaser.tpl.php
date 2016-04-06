<?php
/**
 * @file
 * Field template.
 *
 * @var array[] $items
 */
?>
<?php if (!empty($items)): ?>
  <p class="teaser">
    <?php print render($items); ?>
  </p>
<?php endif; ?>
