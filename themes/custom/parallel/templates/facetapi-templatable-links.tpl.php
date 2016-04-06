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
  <div class="filter-list">
    <?php if (!empty($title)): ?>
      <header>
        <h4><?php print $title ?>:</h4>
      </header>
    <?php endif; ?>
    <ul>
      <?php foreach ($items as $item): ?>
        <li<?php print drupal_attributes($item['attributes']); ?>><?php print $item['data']; ?></li>
      <?php endforeach; ?>
    </ul>
  </div>
<?php endif; ?>
