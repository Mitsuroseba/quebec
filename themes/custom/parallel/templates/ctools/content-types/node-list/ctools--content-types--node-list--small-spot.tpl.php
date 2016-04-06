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
  <div class="articles-dynamic">
    <ul role="list" class="masonry">
      <?php foreach (element_children($content['node']) as $i => $child): ?>
        <?php foreach ($content['parameters']['advertisement']['advertisement'] as $item): ?>
          <?php if ($i == ($item['number'] - 1)): ?>
            <li role="listitem">
              <div class="block--banner">
                <?php print $item['text']; ?>
                <p class="info-text"><?php print t('Advertisement'); ?></p>
              </div>
            </li>
          <?php continue 2; ?>
          <?php endif; ?>
        <?php endforeach; ?>

        <li role="listitem">
          <?php print render($content['node'][$child]); ?>
        </li>
      <?php endforeach; ?>
    </ul>
  </div>
<?php endif; ?>
