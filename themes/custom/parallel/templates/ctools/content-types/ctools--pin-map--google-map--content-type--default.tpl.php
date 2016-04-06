<?php
/**
 * @file
 * Default template for PinMap\GoogleMap\ContentType plugin.
 *
 * @see \PinMap\GoogleMap\ContentType
 *
 * @var array $content
 */
?>
<div class="grid">
  <div class="row">
    <form action="/" role="search" class="form-element">
      <input type="text" name="pharmacy-search" placeholder="" class="form-text" />
      <label for="pharmacy-search">
        <?php print $content['info']['search']['placeholder']; ?>
      </label>
      <button class="button small">
        <?php print $content['info']['search']['button']; ?>
      </button>
    </form>
  </div>
</div>

<div class="map"></div>
