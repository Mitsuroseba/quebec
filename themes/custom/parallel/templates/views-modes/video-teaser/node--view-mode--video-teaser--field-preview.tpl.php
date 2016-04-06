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

  <div class="content">
    <h4 role="heading"><?php print $node->title; ?></h4>
    <p class="date"><?php print format_date($node->created, 'dd_mm_yyyy'); ?></p>
  </div>
<?php endif; ?>
