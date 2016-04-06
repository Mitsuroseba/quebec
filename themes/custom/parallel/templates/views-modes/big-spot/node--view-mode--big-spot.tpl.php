<?php
/**
 * @file
 * Node template.
 *
 * @var int $nid
 * @var \stdClass $node
 * @var string $node_url
 */
?>
<div class="block--article">
  <article role="article">
    <a href="<?php print $node_url; ?>">
      <?php
        // We hide the comments and links now so that we can render them later.
        hide($content['comments']);
        hide($content['links']);
        print render($content);
      ?>

      <div class="block--ratings">
        <div class="article-ratings">
          <fieldset class="rating">
            <input type="radio" id="star5_" name="rating" value="5">
            <label class="full" for="star5_" title="Awesome - 5 stars"></label>

            <input type="radio" id="star4half_" name="rating" value="4 and a half">
            <label class="half" for="star4half_" title="Pretty good - 4.5 stars"></label>

            <input type="radio" id="star4_" name="rating" value="4">
            <label class="full" for="star4_" title="Pretty good - 4 stars"></label>

            <input type="radio" id="star3half_" name="rating" value="3 and a half">
            <label class="half" for="star3half_" title="Meh - 3.5 stars"></label>

            <input type="radio" id="star3_" name="rating" value="3">
            <label class="full" for="star3_" title="Meh - 3 stars"></label>

            <input type="radio" id="star2half_" name="rating" value="2 and a half">
            <label class="half" for="star2half_" title="Kinda bad - 2.5 stars"></label>

            <input type="radio" id="star2_" name="rating" value="2">
            <label class="full" for="star2_" title="Kinda bad - 2 stars"></label>

            <input type="radio" id="star1half_" name="rating" value="1 and a half">
            <label class="half" for="star1half_" title="Meh - 1.5 stars"></label>

            <input type="radio" id="star1_" name="rating" value="1">
            <label class="full" for="star1_" title="Sucks big time - 1 star"></label>

            <input type="radio" id="starhalf_" name="rating" value="half">
            <label class="half" for="starhalf_" title="Sucks big time - 0.5 stars"></label>
          </fieldset>
        </div>
      </div>
    </a>
  </article>
</div>
