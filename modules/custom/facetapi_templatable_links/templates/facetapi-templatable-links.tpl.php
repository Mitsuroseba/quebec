<?php
/**
 * @file
 * Default theme variant for Facetapi templatable links.
 *
 * @var string $title
 * @var array $items
 */
?>
<?php if (!empty($items)): ?>
  <ul>
    <?php foreach ($items as $item): ?>
      <li<?php print drupal_attributes($item['attributes']); ?>><?php print $item['data']; ?></li>
    <?php endforeach; ?>
  </ul>
<?php endif; ?>
