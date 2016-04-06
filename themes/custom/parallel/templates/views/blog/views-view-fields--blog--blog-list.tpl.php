<?php
/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * @var array $fields
 * @var \stdClass $row
 */
$account = user_load($row->users_node_uid);
?>
<a role="link" href="<?php print $fields['path']->content; ?>">
  <div class="image-wrapper" role="presentation">
    <?php if (empty($fields['picture']->content)): ?>
      <img src="<?php print PARALLEL_THEME_URL; ?>/images/icons/default-author.png" width="64" height="64" />
    <?php else: ?>
      <?php print $fields['picture']->content; ?>
    <?php endif; ?>
  </div>

  <div class="content-wrapper">
    <h5 role="heading">
      <?php print $fields['title']->content; ?>
    </h5>

    <?php if (!empty($account->first_name) && !empty($account->last_name)): ?>
      <p class="author">
        <?php
          print t('Author: @first_name @last_name', [
            '@first_name' => $account->first_name,
            '@last_name' => $account->last_name,
          ]);
        ?>
      </p>
    <?php endif; ?>

    <?php if (!empty($fields['body']->content)): ?>
      <p class="teaser">
        <?php print $fields['body']->content; ?>
      </p>
    <?php endif; ?>

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
  </div>
</a>
