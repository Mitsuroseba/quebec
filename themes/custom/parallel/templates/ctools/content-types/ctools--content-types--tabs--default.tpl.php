<?php
/**
 * @file
 * Default theme variant for tabs pane.
 */
?>
<?php if (!empty($content['rows'])): ?>
  <div class="block--content-tabs" role="tablist">
    <div class="tabs">
      <nav>
        <ul>
          <?php foreach ($content['rows'] as $key => $row): ?>
            <li role="tab">
              <a href="#section-line-<?php print $key; ?>">
                <span>
                  <?php print $row['title']; ?>
                </span>
              </a>
            </li>
          <?php endforeach; ?>
        </ul>
      </nav>

      <div class="content-wrap">
        <?php foreach ($content['rows'] as $key => $row): ?>
          <section id="section-line-<?php print $key; ?>" >
            <div class="content" role="tabpanel">
              <?php print $row['content']; ?>
            </div>
          </section>
        <?php endforeach; ?>
      </div>
    </div>
  </div>
<?php endif; ?>
