<?php
/**
 * @file
 * Default template for Teasers plugin.
 *
 * @see ContentTypes\Teasers
 *
 * @var array $content
 */
?>
<div class="block--teaser-spot"
  <?php if (!empty($content['background'])): ?>
    style="background-color: #<?php print $content['background']; ?>"
  <?php endif; ?>
>
  <div class="wrapper">
    <div class="article">
      <h1>
        <?php print $content['title']; ?>
      </h1>
      <p class="teaser">
        <?php print $content['message']; ?>
      </p>
    </div>
  </div>
</div>
