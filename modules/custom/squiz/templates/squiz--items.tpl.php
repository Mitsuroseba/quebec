<?php
/**
 * @file
 * Quiz items.
 *
 * @var array[] $elements
 */
?>
<ul role="listbox" class="squiz-items">
  <?php foreach (element_children($elements) as $child): ?>
    <li role="listitem" class="squiz-item" data-available="<?php print (int) $elements[$child]['#available']; ?>">
      <?php print render($elements[$child]); ?>
    </li>
  <?php endforeach; ?>
</ul>
