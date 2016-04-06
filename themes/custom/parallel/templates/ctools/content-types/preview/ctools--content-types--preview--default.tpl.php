<?php
/**
 * @file
 * Default template for Preview plugin.
 *
 * @see \ContentTypes\Preview
 *
 * @var array $content
 */
?>
<?php if (!empty($content['items'])): ?>
  <div class="image-wrapper content-images">
    <div class="swiper-container block--slideshow">
      <div class="swiper-wrapper">
        <?php foreach ($content['items'] as $item): ?>
          <div class="swiper-slide">
            <?php print $item->image; ?>
          </div>
        <?php endforeach; ?>
      </div>
    </div>

    <?php if (!empty($content['multiple_item'])): ?>
      <div class="swiper-pagination"></div>
    <?php endif; ?>
  </div>
<?php endif; ?>
