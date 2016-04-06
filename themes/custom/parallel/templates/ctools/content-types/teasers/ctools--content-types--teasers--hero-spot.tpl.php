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
<?php if (!empty($content['reference'])): ?>
  <div class="wrapper">
    <div class="block--article-full-width
      <?php if (!empty($content['reference']['category_color'])): ?>
        <?php print $content['reference']['category_color']; ?>
      <?php endif; ?>
    ">
      <div class="background-image"
        <?php if (!empty($content['reference']['file'])): ?>
           style="background-image: url(<?php print $content['reference']['file']->url; ?>)"
        <?php endif; ?>
      >
      <div class="wrapper">
        <div class="article">
          <div class="row">
            <?php if (!empty($content['reference']['title'])): ?>
              <h1 role="heading">
                <?php print $content['reference']['title']; ?>
              </h1>
            <?php endif; ?>

            <?php if (!empty($content['reference']['subheader'])): ?>
              <p class="teaser">
                <?php print strip_tags($content['reference']['subheader']); ?>
              </p>
            <?php endif; ?>

            <?php if (!empty($content['reference']['link'])): ?>
              <a href="<?php print url($content['reference']['link']); ?>" <?php print $content['reference']['link_attributes']; ?>>
                <p class="read-more">
                  <?php print t('Read the article here'); ?>
                </p>
              </a>
            <?php endif; ?>
          </div>
        </div>

        <?php if (!empty($content['reference']['category'])): ?>
          <div class="category
            <?php if (!empty($content['reference']['category_color'])): ?>
              <?php print $content['reference']['category_color']; ?>
            <?php endif; ?>
          ">
            <h3 role="heading">
              <?php print $content['reference']['category']; ?>
            </h3>
          </div>
        <?php endif; ?>
      </div>
    </div>
  </div>
<?php endif; ?>
