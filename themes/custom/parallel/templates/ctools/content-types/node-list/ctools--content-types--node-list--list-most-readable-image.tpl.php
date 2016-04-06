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
  <div class="block--article__list enable-image">
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
  </div>
<?php endif; ?>
