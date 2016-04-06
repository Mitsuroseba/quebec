<?php
/**
 * @file
 * Theme implementation for comments.
 *
 * @var stdClass $comment
 * @var string $title_attributes
 * @var array $content
 */
$author = user_load($comment->uid);
?>
<li>
  <?php print render($title_prefix); ?>
  <h4<?php print $title_attributes; ?>><?php print $comment->subject ?></h4>
  <?php print render($title_suffix); ?>
  <p class="author">
    <?php print format_date($comment->created, 'dd_mm_yyyy') . ' | ' . $author->first_name . ' ' . $author->last_name; ?>
  </p>
  <div class="titletext">
    <p>
      <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['links']);
      print render($content);
      ?>
     </p>
  </div>
</li>
