<?php
/**
 * @file
 * Search result row template.
 *
 * @var array $fields
 * @var \stdClass $row
 */
$account = user_load($row->_entity_properties['entity object']->uid);
?>
<?php if(!empty($fields['url']->content)): ?>
  <a href="<?php print $fields['url']->content; ?>">
    <article role="article">
      <header>
        <?php print $fields['created']->content; ?>
        <?php if (!empty($account->first_name) && !empty($account->last_name)): ?>
          <p class="author">
            <?php print $account->first_name . ' ' . $account->last_name; ?>
          </p>
        <?php endif; ?>
        <?php print $fields['title']->content; ?>
      </header>
      <?php if(!empty($fields['field_video']->content)): ?>
        <div class="video-wrapper">
          <?php print $fields['field_video']->content; ?>
        </div>
      <?php elseif (!empty($fields['field_preview']->content)): ?>
        <div class="video-wrapper">
          <?php print $fields['field_preview']->content; ?>
        </div>
      <?php endif; ?>
      <?php if(!empty($fields['body']->content)): ?>
        <div class="content">
          <?php print $fields['body']->content; ?>
          <div class="block--ratings">
            <div class="article-ratings">
              <fieldset class="rating">
                <input type="radio" id="star5_0" name="rating" value="5"><label class="full" for="star5_0" title="Awesome - 5 stars"></label>
                <input type="radio" id="star4half_0" name="rating" value="4 and a half"><label class="half" for="star4half_0" title="Pretty good - 4.5 stars"></label>
                <input type="radio" id="star4_0" name="rating" value="4"><label class="full" for="star4_0" title="Pretty good - 4 stars"></label>
                <input type="radio" id="star3half_0" name="rating" value="3 and a half"><label class="half" for="star3half_0" title="Meh - 3.5 stars"></label>
                <input type="radio" id="star3_0" name="rating" value="3"><label class="full" for="star3_0" title="Meh - 3 stars"></label>
                <input type="radio" id="star2half_0" name="rating" value="2 and a half"><label class="half" for="star2half_0" title="Kinda bad - 2.5 stars"></label>
                <input type="radio" id="star2_0" name="rating" value="2"><label class="full" for="star2_0" title="Kinda bad - 2 stars"></label>
                <input type="radio" id="star1half_0" name="rating" value="1 and a half"><label class="half" for="star1half_0" title="Meh - 1.5 stars"></label>
                <input type="radio" id="star1_0" name="rating" value="1"><label class="full" for="star1_0" title="Sucks big time - 1 star"></label>
                <input type="radio" id="starhalf_0" name="rating" value="half"><label class="half" for="starhalf_0" title="Sucks big time - 0.5 stars"></label>
              </fieldset>
            </div>
          </div>
        </div>
      <?php endif; ?>
    </article>
  </a>
<?php endif; ?>
