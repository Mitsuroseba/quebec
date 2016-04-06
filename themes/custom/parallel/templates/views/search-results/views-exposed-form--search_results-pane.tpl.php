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
<div class="nav--extras">
  <ul>
    <li class="nav-buttons search" id="initSearch">
      <a href="">
        <span><?php print t('Search'); ?></span>
      </a>
    </li>
  </ul>
</div>
<div class="tooltip block--search">
  <div class="wrapper">
    <div class="form">
      <label><?php print t('Search on golf.dk:'); ?></label>
      <?php foreach ($widgets as $id => $widget): ?>
        <div id="<?php print $widget->id; ?>-wrapper" class="views-widget-<?php print $id; ?>">
          <?php if (!empty($widget->label)): ?>
            <label for="<?php print $widget->id; ?>">
              <?php print $widget->label; ?>
            </label>
          <?php endif; ?>
          <?php if (!empty($widget->operator)): ?>
            <div class="views-operator">
              <?php print $widget->operator; ?>
            </div>
          <?php endif; ?>
          <div class="views-widget">
            <?php print $widget->widget; ?>
          </div>
          <?php if (!empty($widget->description)): ?>
            <div class="description">
              <?php print $widget->description; ?>
            </div>
          <?php endif; ?>
        </div>
      <?php endforeach; ?>
      <button><?php print t('Search'); ?></button>
    </div>
  </div>
</div>
