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
  <div class="block--video__list">
    <div class="wrapper">
      <?php if (!empty($content['override_title_text'])): ?>
        <div class="headline">
          <h2 role="heading">
            <?php print $content['override_title_text']; ?>
          </h2>
        </div>
      <?php endif; ?>

      <ul role="tree">
        <?php foreach (element_children($content['node']) as $child): ?>
          <li role="treeitem"<?php print empty($content['node'][$child]['#node']->sticky) ? '' : 'class="large"'; ?>>
            <?php print render($content['node'][$child]); ?>
          </li>
        <?php endforeach; ?>

        <?php if (!empty($content['parameters']['read_more']['link']['url'])): ?>
          <li role="treeitem">
            <div class="video archive-link">
              <a href="<?php print url($content['parameters']['read_more']['link']['url']); ?>">
                <div class="content">
                  <h4 role="heading"><?php print $content['parameters']['read_more']['link']['title']; ?></h4>
                </div>
              </a>
            </div>
          </li>
        <?php endif; ?>
      </ul>
    </div>
  </div>
<?php endif; ?>
