<?php
/**
 * @file
 * Default template for Spot plugin.
 *
 * @see ContentTypes\Spot
 *
 * @var array $content
 */
?>
<?php if (!empty($content)): ?>
  <div class="block--article">
    <article role="article">
      <a href="<?php print url($content['link']); ?>">
        <?php if (!empty($content['image'])): ?>
          <div class="image-wrapper" role="presentation">
            <?php print $content['image']; ?>
          </div>
        <?php endif; ?>

        <h1 role="heading">
          <?php print check_plain($content['title']); ?>
        </h1>

        <p class="teaser">
          <?php print check_plain($content['text']); ?>
        </p>

        <p class="standard-link">
          <?php print check_plain(t('Link text goes here')); ?>
        </p>
      </a>
    </article>
  </div>
<?php endif; ?>
