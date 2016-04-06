<?php
/**
 * @file
 * Sponsor template for Preview plugin.
 *
 * @see \ContentTypes\Preview
 *
 * @var array $content
 */
?>
<?php if (!empty($content['items'])): ?>
  <?php if (!empty($content['multiple_item'])): ?>
    <div class="block--slideshow" id="sponsors_slideshow">
      <div class="swiper-container">
        <ul class="swiper-wrapper slides" role="list">
  <?php else: ?>
    <div class="block--sponsor">
      <ul class="block--sponsor__logo" role="list">
  <?php endif; ?>

      <?php foreach ($content['items'] as $item): ?>
        <li class="swiper-slide" role="listitem">
          <a href="<?php print url(empty($item->link) ? '<front>' : $item->link); ?>">
            <?php if (!empty($item->title)): ?>
              <p>
                <?php print check_plain($item->title); ?>
              </p>
            <?php endif; ?>

            <?php if (!empty($item->image)): ?>
              <?php print $item->image; ?>
            <?php endif; ?>
          </a>
        </li>
      <?php endforeach; ?>

  <?php if (!empty($content['multiple_item'])): ?>
        </ul>
      </div>
    </div>
  <?php else: ?>
      </ul>
    </div>
  <?php endif; ?>
<?php endif; ?>
