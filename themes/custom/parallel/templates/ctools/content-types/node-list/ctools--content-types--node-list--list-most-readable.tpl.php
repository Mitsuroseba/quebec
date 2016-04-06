<?php
/**
 * @file
 * Theme variant for NodeList plugin.
 *
 * @see \ContentTypes\NodeList
 *
 * @var array $content
 */
?>
<?php if (!empty($content['node'])): ?>
  <div class="block--article__list">
    <?php if (!empty($content['override_title_text'])): ?>
      <div class="headline">
        <h2 role="heading">
          <?php print $content['override_title_text']; ?>
        </h2>
      </div>
    <?php endif; ?>

    <ul role="list">
      <?php foreach (element_children($content['node']) as $child): ?>
        <li role="listitem">
          <?php print render($content['node'][$child]); ?>
        </li>
      <?php endforeach; ?>
    </ul>

    <?php if (!empty($content['parameters']['read_more']['link']['url'])): ?>
        <div class="read-more">
          <a href="<?php print url($content['parameters']['read_more']['link']['url']); ?>">
            <?php print $content['parameters']['read_more']['link']['title']; ?>
          </a>
        </div>
    <?php endif; ?>
  </div>
<?php endif; ?>
