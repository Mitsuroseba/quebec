<?php
/**
 * @file
 * Menu.
 *
 * @see MainMenu\ContentType
 *
 * @var array $content
 */
?>
<?php if (!empty($content['menu'])): ?>
  <nav class="wrapper">
    <ul class="nav">
      <?php foreach ($content['menu'] as $item): ?>
        <li>
          <a href="#"><?php print $item['title']; ?></a>
          <?php if (!empty($item['subtree'])): ?>
            <ul>
              <?php foreach ($item['subtree'] as $subitem): ?>
                <li><a href="<?php print $subitem['href']; ?>"><?php print $subitem['title']; ?></a></li>
              <?php endforeach; ?>
            </ul>
          <?php endif; ?>
        </li>
      <?php endforeach;?>
    </ul>
  </nav>
<?php endif; ?>
