<?php
/**
 * @file
 * Mobile template for Menu plugin.
 *
 * @see MainMenu\ContentType
 *
 * @var array $content
 */
?>
<?php if (!empty($content['menu'])): ?>
  <nav class="block--mobile-navigation">
    <div class="wrapper-nav">
      <div class="extras">
        <?php print t('Navigation') ?>
      </div>
      <ul class="nav">
        <?php foreach ($content['menu'] as $item): ?>
          <li>
            <a href="#"><?php print $item['title']; ?></a>
            <?php if (!empty($item['subtree'])): ?>
              <ul class="sub-menu">
                <li><a class="close" href=""><?php print t('Back') ?></a></li>
                <?php foreach ($item['subtree'] as $subitem): ?>
                  <li><a href="<?php print $subitem['href']; ?>"><?php print $subitem['title']; ?></a></li>
                <?php endforeach; ?>
              </ul>
            <?php endif; ?>
          </li>
        <?php endforeach;?>
      </ul>
    </div>
  </nav>
<?php endif; ?>
