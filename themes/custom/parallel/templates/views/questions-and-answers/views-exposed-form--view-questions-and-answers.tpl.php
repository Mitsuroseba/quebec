<?php
/**
 * @file
 * This template handles the layout of the views exposed filter form.
 *
 * @ingroup views_templates
 *
 * @var array $widgets
 */
?>
<?php if (!empty($q)): ?>
  <?php
  // This ensures that, if clean URLs are off, the 'q' is added first so that
  // it shows up first in the URL.
  print $q;
  ?>
<?php endif; ?>
<div class="block--inline-search">
  <div class="wrapper">
    <div class="form">
      <label><?php print t('Search questions'); ?></label>
      <?php foreach ($widgets as $id => $widget): ?>
        <div id="<?php print $widget->id; ?>-wrapper" class="views-widget-<?php print $id; ?>">
          <div class="views-widget">
            <?php print $widget->widget; ?>
          </div>
        </div>
      <?php endforeach; ?>
      <button><?php print t('Find the answer'); ?></button>
    </div>
  </div>
</div>
