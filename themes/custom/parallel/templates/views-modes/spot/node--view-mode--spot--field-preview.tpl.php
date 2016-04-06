<?php
/**
 * @file
 * Field template.
 *
 * @var array[] $items
 * @var \stdClass $node
 */
?>
<?php if (!empty($items)): ?>
  <div class="image-wrapper">
    <?php print render($items[0]); ?>
  </div>

  <h1 role="heading">
    <?php print $node->title; ?>
  </h1>
<?php endif; ?>
