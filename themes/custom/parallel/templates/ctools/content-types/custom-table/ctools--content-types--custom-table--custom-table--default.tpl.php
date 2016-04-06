<?php
/**
 * @file
 * Default template for CustomTable plugin.
 *
 * @see \ContentTypes\CustomTable
 *
 * @var array $content
 */
?>
<?php if (!empty($content['head'])): ?>
  <div class="tablelist">
    <table class="tablelist">
      <?php if (!empty($content['override_title_text'])): ?>
        <caption>
          <?php print $content['override_title_text']; ?>
        </caption>
      <?php endif; ?>
      <thead>
        <tr>
          <?php foreach ($content['head'] as $info): ?>
            <th class="align-<?php print $info['align']; ?>">
              <?php print $info['head']; ?>
            </th>
          <?php endforeach; ?>
        </tr>
      </thead>
      <tbody>
        <?php foreach ($content['body'] as $group): ?>
          <tr class="item-row odd">
            <?php foreach ($group as $i => $value): ?>
              <td class="align-<?php print $content['head'][$i]['align']; ?>">
                <p>
                  <?php print $value; ?>
                </p>
              </td>
            <?php endforeach; ?>
          </tr>
        <?php endforeach; ?>
      </tbody>
    </table>
  </div>
<?php endif; ?>
