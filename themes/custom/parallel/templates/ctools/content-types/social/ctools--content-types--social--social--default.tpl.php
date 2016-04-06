<?php
/**
 * @file
 * Default template for Social plugin.
 *
 * @see \ContentTypes\Social
 *
 * @var array $content
 */
?>
<?php if (!empty($content['items'])): ?>
  <div class="nav--extras social-services">
    <ul role="list">
      <?php foreach ($content['items'] as $name => $url): ?>
        <li role="listitem" class="nav-buttons <?php print $name; ?>">
          <a role="link" href="<?php print $url; ?>" target="_blank">
            <span>
              <?php print $name; ?>
            </span>
          </a>
        </li>
      <?php endforeach; ?>
    </ul>
  </div>
<?php endif; ?>
