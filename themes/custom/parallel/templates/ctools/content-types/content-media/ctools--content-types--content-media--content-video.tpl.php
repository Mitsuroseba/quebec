<?php
/**
 * @file
 * Paragraph video template for ContentMedia plugin.
 *
 * @see \ContentTypes\ContentMedia
 *
 * @var array $content
 */
?>
<?php if (!empty($content['items'])): ?>
  <div class="modules--video">
    <?php foreach ($content['items'] as $item): ?>
      <?php if (!empty($item->title)): ?>
        <h2 role="heading">
          <?php print check_plain($item->title); ?>
        </h2>
      <?php endif; ?>

      <?php if (!empty($item->video)): ?>
        <section class="content-media" role="region">
          <?php print $item->video['html']; ?>
        </section>
      <?php endif; ?>
    <?php endforeach; ?>
  </div>
<?php endif; ?>
