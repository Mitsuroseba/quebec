<?php
/**
 * @file
 * Node template.
 *
 * @var int $nid
 * @var \stdClass $node
 * @var string $node_url
 * @var array $content
 */
?>
<div class="block--article">
  <article role="article">
    <a href="<?php print $node_url; ?>">
      <?php
        // We hide the comments and links now so that we can render them later.
        hide($content['comments']);
        hide($content['links']);
        print render($content);
      ?>

      <p class="standard-link">
        <?php print t('Read more'); ?>
      </p>
    </a>
  </article>
</div>
