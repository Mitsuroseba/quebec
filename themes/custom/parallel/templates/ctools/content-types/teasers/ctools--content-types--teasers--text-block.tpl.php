<?php
/**
 * @file
 * Text block template for Teasers plugin.
 *
 * @see ContentTypes\Teasers
 *
 * @var array $content
 */
?>
<?php if (!empty($content['reference'])): ?>
  <div class="block--title-text">
    <article>
      <?php if (!empty($content['reference']['images'])): ?>
        <div class="image-wrapper <?php print $content['image_align']; ?>">
          <div class="swiper-container block--slideshow">
            <div class="swiper-wrapper">
              <?php foreach ($content['reference']['images'] as $image): ?>
                <div class="swiper-slide">
                  <?php print $image['image']; ?>
                </div>
              <?php endforeach; ?>
            </div>
          </div>

          <?php if (1 < count($content['reference']['images'])): ?>
            <div class="swiper-pagination"></div>
          <?php endif; ?>
        </div>
      <?php endif; ?>

      <?php if (!empty($content['reference']['title'])): ?>
        <h1 role="heading">
          <?php print check_plain($content['reference']['title']); ?>
        </h1>
      <?php endif; ?>

      <?php if (!empty($content['reference']['content'])): ?>
        <div class="content">
          <?php print $content['reference']['content']; ?>
        </div>
      <?php endif; ?>
    </article>
  </div>
<?php endif; ?>
