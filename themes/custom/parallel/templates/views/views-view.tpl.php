<?php
/**
 * @file
 * Main view template.
 *
 * @var string $title
 * @var string $header
 * @var string $exposed
 * @var string $attachment_before
 * @var string $rows
 * @var string $empty
 * @var string $pager
 * @var string $attachment_after
 * @var string $more
 * @var string $footer
 * @var string $feed_icon
 * @var string $dom_id
 * @var string $css_class
 */
?>
<div class="view-<?php print $view->name; ?> <?php print $view->current_display; ?> view-dom-id-<?php print $dom_id; ?> <?php print $css_class; ?>">
  <?php if (!empty($title)): ?>
    <h2 role="heading">
      <?php print $title; ?>
    </h2>
  <?php endif; ?>

  <?php if (!empty($header)): ?>
    <?php print $header; ?>
  <?php endif; ?>

  <?php if (!empty($exposed)): ?>
    <?php print $exposed; ?>
  <?php endif; ?>

  <?php if (!empty($attachment_before)): ?>
    <?php print $attachment_before; ?>
  <?php endif; ?>

  <?php if (!empty($rows)): ?>
    <?php print $rows; ?>
  <?php elseif (!empty($empty)): ?>
    <?php print $empty; ?>
  <?php endif; ?>

  <?php if (!empty($pager)): ?>
    <?php print $pager; ?>
  <?php endif; ?>

  <?php if (!empty($attachment_after)): ?>
    <?php print $attachment_after; ?>
  <?php endif; ?>

  <?php if (!empty($more)): ?>
    <?php print $more; ?>
  <?php endif; ?>

  <?php if (!empty($footer)): ?>
    <?php print $footer; ?>
  <?php endif; ?>

  <?php if (!empty($feed_icon)): ?>
    <?php print $feed_icon; ?>
  <?php endif; ?>
</div>
