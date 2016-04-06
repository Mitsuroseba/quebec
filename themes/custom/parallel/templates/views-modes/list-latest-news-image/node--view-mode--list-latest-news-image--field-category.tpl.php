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
  <p class="category">
    <?php print render($items[0]); ?>
  </p>

  <h4 role="heading">
    <?php print $node->title; ?>
  </h4>
<?php endif; ?>

