<?php
/**
 * @file
 * Template for "Blog block" pane of the "Blog" to display a list of rows.
 *
 * @var array $rows
 * @var string $wrapper_prefix
 * @var string $wrapper_suffix
 * @var string $list_type_prefix
 * @var string $list_type_suffix
 * @var string[] $classes_array
 */
?>
<?php print $wrapper_prefix; ?>
  <div class="block--blog-list">
    <div class="wrapper">
      <h1 role="heading">
        <?php print t('Blog'); ?>
      </h1>

      <?php print $list_type_prefix; ?>
      <?php foreach ($rows as $id => $row): ?>
        <li class="<?php print $classes_array[$id]; ?>" role="listitem">
          <?php print $row; ?>
        </li>
      <?php endforeach; ?>
      <?php print $list_type_suffix; ?>
    </div>
  </div>
<?php print $wrapper_suffix; ?>
