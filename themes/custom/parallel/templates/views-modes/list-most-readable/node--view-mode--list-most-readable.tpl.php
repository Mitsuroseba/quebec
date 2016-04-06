<?php
/**
 * @file
 * Node template.
 *
 * @var int $nid
 * @var \stdClass $node
 * @var string $node_url
 */
$account = user_load($node->uid);
?>
<article role="article" class="article">
  <a href="<?php print $node_url; ?>">
    <p class="date">
      <?php print format_date($node->created, 'dd_mm_yyyy'); ?> | <?php print $account->first_name . ' ' . $account->last_name; ?>
    </p>

    <h4 role="heading">
      <?php print $node->title; ?>
    </h4>
  </a>
</article>
