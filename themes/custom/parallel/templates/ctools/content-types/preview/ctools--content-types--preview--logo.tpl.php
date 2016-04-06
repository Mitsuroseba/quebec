<?php
/**
 * @file
 * Logo template for Preview plugin.
 *
 * @see \ContentTypes\Preview
 *
 * @var array $content
 */
?>
<?php foreach ($content['items'] as $item): ?>
  <div class="grid">
    <div class="row">
      <div class="l1">
        <div class="menu-btn">
          <div>
            <span></span>
            <span></span>
            <span></span>
          </div>
        </div>

        <a href="<?php print url('<front>'); ?>" rel="home" class="logo">
          <?php print $item->image; ?>
        </a>
      </div>
    </div>
  </div>
<?php endforeach; ?>
