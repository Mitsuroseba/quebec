<?php
/**
 * @file
 * Links template for comment.
 * 
 * @var array $links
 */
?>
<?php foreach ($links as $link) : ?>
  <?php if (isset($link['href'])) : ?>
    <?php print l($link['title'], $link['href'], $link); ?>
  <?php endif; ?>
<?php endforeach; ?>
