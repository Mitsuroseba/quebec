<?php
/**
 * @file
 * Template for "Related content" pane of the "Article" to display a list of rows.
 *
 * @var \view $view
 * @var array $rows
 * @var string $wrapper_prefix
 * @var string $wrapper_suffix
 * @var string $list_type_prefix
 * @var string $list_type_suffix
 * @var string[] $classes_array
 */
?>
<?php print $wrapper_prefix; ?>
  <div class="article-spots">
    <?php print $list_type_prefix; ?>
    <?php foreach ($rows as $id => $row): ?>
      <li class="<?php print $classes_array[$id]; ?>" role="listitem">
        <div class="block--article">
          <article role="article">
            <a href="<?php print url('node/' . $view->result[$id]->node_field_data_field_related_content_nid); ?>">
              <?php print $row; ?>
            </a>
          </article>
        </div>
      </li>
    <?php endforeach; ?>
    <?php print $list_type_suffix; ?>
  </div>
<?php print $wrapper_suffix; ?>
