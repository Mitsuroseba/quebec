(function($) {
  'use strict';

  $('.block--title-text .swiper-container').each(function() {
    var $wrapper = $(this);
    var pagination = $wrapper.next('.swiper-pagination');

    if (1 < $wrapper.find('.swiper-slide').length) {
      $wrapper.parallelSwiper({
        pagination: pagination[0],
      });
    }
  });
})(jQuery);
