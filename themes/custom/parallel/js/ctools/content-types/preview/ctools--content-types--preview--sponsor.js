(function($) {
  'use strict';

  $('#sponsors_slideshow .swiper-container').each(function() {
    var $wrapper = $(this);

    if (1 < $wrapper.find('.swiper-slide').length) {
      $wrapper.parallelSwiper({
        autoHeight: true
      });
    }
  });
})(jQuery);
