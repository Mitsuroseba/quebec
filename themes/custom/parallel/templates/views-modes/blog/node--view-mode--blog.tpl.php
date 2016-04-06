<?php
/**
 * @file
 * Node template.
 *
 * @var int $uid
 * @var int $picture
 * @var \stdClass $node
 * @var array $content
 */
$account = user_load($uid);
?>
<div class="block--blog_post">
  <article role="article">
    <div role="presentation" class="image-wrapper">
      <?php if (empty($picture)): ?>
        <img src="<?php print PARALLEL_THEME_URL; ?>/images/icons/default-author.png" width="124" height="124" />
      <?php else: ?>
        <?php print media_file($picture, ['image_style' => '124x124']); ?>
      <?php endif; ?>
    </div>

    <div class="header-wrapper">
      <h1 role="heading">
        <?php print $node->title; ?>
      </h1>
      <p class="author">
        <?php print format_date($node->created, 'dd_mm_yyyy'); ?> | <?php print $account->first_name . ' ' . $account->last_name; ?>
      </p>
    </div>

    <div class="title-text">
      <?php
        // We hide the comments and links now so that we can render them later.
        hide($content['comments']);
        hide($content['links']);
        print render($content);
      ?>
    </div>

    <div class="block--ratings">
      <div class="article-ratings">
        <fieldset class="rating">
          <input type="radio" id="star5_" name="rating" value="5"><label class="full" for="star5_" title="Awesome - 5 stars"></label>
          <input type="radio" id="star4half_" name="rating" value="4 and a half"><label class="half" for="star4half_" title="Pretty good - 4.5 stars"></label>
          <input type="radio" id="star4_" name="rating" value="4"><label class="full" for="star4_" title="Pretty good - 4 stars"></label>
          <input type="radio" id="star3half_" name="rating" value="3 and a half"><label class="half" for="star3half_" title="Meh - 3.5 stars"></label>
          <input type="radio" id="star3_" name="rating" value="3"><label class="full" for="star3_" title="Meh - 3 stars"></label>
          <input type="radio" id="star2half_" name="rating" value="2 and a half"><label class="half" for="star2half_" title="Kinda bad - 2.5 stars"></label>
          <input type="radio" id="star2_" name="rating" value="2"><label class="full" for="star2_" title="Kinda bad - 2 stars"></label>
          <input type="radio" id="star1half_" name="rating" value="1 and a half"><label class="half" for="star1half_" title="Meh - 1.5 stars"></label>
          <input type="radio" id="star1_" name="rating" value="1"><label class="full" for="star1_" title="Sucks big time - 1 star"></label>
          <input type="radio" id="starhalf_" name="rating" value="half"><label class="half" for="starhalf_" title="Sucks big time - 0.5 stars"></label>
        </fieldset>
      </div>
    </div>
  </article>
</div>
