<?php
/**
 * @file
 * Template for area plugin for Views.
 *
 * @see \views_handler_area_search_result
 *
 * @var \view $view
 */
?>
<div class="block--title-text searchpage">
  <article>
    <h1 role="heading"><?php print t('Search results'); ?></h1>
    <div class="content">
      <p><?php print t('You searched for !search', ['!search' => '<span class="highlighted-color">\'' . $view->exposed_raw_input['search_api_views_fulltext'] . '\'</span>'], ['html' => TRUE]); ?></p>
      <p><?php print t('Found @count results', ['@count' => $view->total_rows]); ?></p>
    </div>
  </article>
</div>
