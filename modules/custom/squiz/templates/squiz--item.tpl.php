<?php
/**
 * @file
 * Quiz item.
 *
 * @var int $id
 * @var array $elements
 */
?>
<?php if (!empty($elements['#title'])): ?>
  <h5 role="heading">
    <?php print $id; ?>. <?php print $elements['#title']; ?>
  </h5>
<?php endif; ?>

<ul role="list" class="radio-group">
  <?php foreach (element_children($elements) as $child): ?>
    <li role="listitem">
      <?php print render($elements[$child]); ?>
    </li>
  <?php endforeach; ?>
  <li class="error-message" hidden>
    <?php print t('You have forgotten to answer this question'); ?>
  </li>
</ul>
