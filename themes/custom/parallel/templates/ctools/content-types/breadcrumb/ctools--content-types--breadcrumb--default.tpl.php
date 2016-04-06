<?php
/**
 * @file
 * Default template for Breadcrumb plugin.
 *
 * @see \ContentTypes\Breadcrumb
 *
 * @var array $content
 */
?>
<?php if (!empty($content['breadcrumbs'])): ?>
  <div class="block--breadcrumbs">
    <div class="wrapper">
      <ul>
        <li class="static">
          <?php print t('You are here:'); ?>
        </li>

        <?php foreach ($content['breadcrumbs'] as $breadcrumb): ?>
          <li>
            <?php print $breadcrumb; ?>
          </li>
        <?php endforeach; ?>
      </ul>
    </div>
  </div>
<?php endif; ?>
