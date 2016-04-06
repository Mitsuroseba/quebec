<?php
/**
 * @file
 * Quiz result.
 *
 * @var array[] $elements
 */
?>
<?php if (!empty($elements['#message'])): ?>
  <div class="__results result" data-result="<?php print $elements['#result']; ?>">
    <div class="evaluation">
      <div class="wrapper">
        <?php print $elements['#message']['value']; ?>
      </div>
    </div>
  </div>
<?php endif; ?>
