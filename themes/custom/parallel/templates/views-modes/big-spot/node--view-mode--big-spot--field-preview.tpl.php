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
  <p class="category lime">
    <?php print node_type_get_name($node); ?>
  </p>

  <div class="image-wrapper">
    <?php print render($items[0]); ?>
  </div>

  <h1 role="heading">
    <?php print $node->title; ?>
  </h1>

  <p class="author">
    <?php print format_date($node->created, 'dd_mm_yyyy'); ?> | <?php print $account->first_name . ' ' . $account->last_name; ?>
  </p>
<?php endif; ?>
