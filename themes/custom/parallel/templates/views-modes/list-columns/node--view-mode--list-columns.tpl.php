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
<article role="article" class="article">
  <a href="<?php print $node_url; ?>">
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      print render($content);
    ?>
  </a>
</article>
