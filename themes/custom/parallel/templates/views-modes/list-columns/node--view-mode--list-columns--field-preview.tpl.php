<?php
/**
 * @file
 * Field template.
 *
 * @var array[] $items
 * @var \stdClass $node
 */
$account = user_load($node->uid);
?>
<?php if (!empty($items)): ?>
  <div class="image-wrapper">
    <?php print render($items[0]); ?>
  </div>

  <p class="date">
    <?php print format_date($node->created, 'dd_mm_yyyy'); ?> | <?php print $account->first_name . ' ' . $account->last_name; ?>
  </p>

  <h4 role="heading">
    <?php print $node->title; ?>
  </h4>
<?php endif; ?>
