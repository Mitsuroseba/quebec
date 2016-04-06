<?php
/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @var \view $view
 * @var string $wrapper_prefix
 * @var string $wrapper_suffix
 * @var string $list_type_prefix
 * @var string $list_type_suffix
 * @var string[] $classes_array
 *
 * WARNING! Parameter 'custom_data' checked for 'empty_result' because this value
 * can be specified if not found any node within a radius search. The value
 * 'empty_result' assigned in file srcipt.js.
 */
?>
<?php print $wrapper_prefix; ?>
  <?php if (!empty($view->exposed_raw_input['custom_data'])): ?>
    <header>
      <?php if ('empty_result' === $view->exposed_raw_input['custom_data']): ?>
        <h3 role="heading" class="equery-text">
          <?php print t('No found pharmacies in your area'); ?>
        </h3>
      <?php else: ?>
        <h3 role="heading" class="query-text">
          <?php print t('Results for "@query"', ['@query' => $view->exposed_raw_input['custom_data']]); ?>
        </h3>

        <p>
          <?php print t('There were found @number pharmacies in your area', ['@number' => count($view->result)]); ?>
        </p>
      <?php endif; ?>
    </header>
  <?php endif; ?>

  <div class="grid">
    <div class="row">
      <?php print $list_type_prefix; ?>
      <?php foreach ($rows as $id => $row): ?>
        <li class="<?php print $classes_array[$id]; ?>">
          <div class="content">
            <?php print $row; ?>
          </div>
        </li>
      <?php endforeach; ?>
      <?php print $list_type_suffix; ?>
    </div>
  </div>
<?php print $wrapper_suffix; ?>
