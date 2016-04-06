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
  <div class="article-spots">
    <ul role="list">
      <?php foreach (element_children($content['node']) as $child): ?>
        <li role="listitem">
          <?php print render($content['node'][$child]); ?>
        </li>
      <?php endforeach; ?>
    </ul>
  </div>
<?php endif; ?>
