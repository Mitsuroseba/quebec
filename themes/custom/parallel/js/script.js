(function($) {
  'use strict';

  Theme.has('html', function($body, settings) {
    var $header = $body.find('header'),
        $moduleSearch = $header.find('.block--search'),
        $searchInput = $moduleSearch.find('input'),
        $searchTrigger = $header.find('.nav--extras .search'),
        $mobileNav = $header.find('.block--mobile-navigation'),
        $mobileMenuTopLinks = $mobileNav.find('ul li a'),
        $mobileMenuCloseLinks = $mobileNav.find('.sub-menu .close'),
        $tabs = $('.block--content-tabs .tabs');

    filtering.init();

    if ($tabs.length) {
      new CBPFWTabs($tabs);
    }

    $body.find('.masonry').each(function() {
      var masonry = new Masonry(this);

      Breakpoint.set(function(width) {
        masonry.render(width <= 480 ? 1 : (width <= 1024 ? 2 : 3));
      });

      masonry.show();
    });

    $searchTrigger.on('click', function(event) {
      event.preventDefault();
      $moduleSearch.toggleClass('active');
      // Show keyboard on mobile devices.
      $searchInput.focus();
    });

    // Mobile menu events.
    $('.menu-btn').on('click', function(event){
      event.preventDefault();

      $('.menu-btn div').toggleClass('active');
      $('body').toggleClass('expand-menu');
    });

    $mobileMenuTopLinks.on('click', function(event) {
      event.preventDefault();

      $(this).parent().find('.sub-menu').addClass('active');
    });

    $mobileMenuCloseLinks.on('click', function(event) {
      event.preventDefault();

      $('.sub-menu').removeClass('active');
    });

    // Accordion.
    var accordionBtn = $('.accordion-container__btn');

    accordionBtn.click(function() {
      var $this = $(this),
          $parent = $this.parent(),
          $accordionContent = $('.accordion-container__content'),
          animSpeed = 300;

      if (!$parent.hasClass('selected')) {
        $('.accordion-container').removeClass('selected');
        $accordionContent.stop().animate({height: 0}, animSpeed);
        $parent.addClass('selected');
        $parent.find($accordionContent).stop().animate({
          height: $parent.find('.accordion-container__content-inner').outerHeight()
        }, animSpeed);
      }
    });

    // Banners.
    var setLayout = function() {
      var scrollTop = $(window).scrollTop(),
          topBannerHeight = $('#topbanner').innerHeight(),
          header = $('#header'),
          skyWrapper = $('.block--skyscraber');

      if (document.body.classList.contains('admin-menu')) {
        // Todo $('#admin-menu').innerHeight() == null.
        topBannerHeight += 21;
      }

      if(scrollTop > topBannerHeight) {
        scrollTop = topBannerHeight;
      }

      header.css('top', topBannerHeight - scrollTop);
      skyWrapper.find('.container').css('top', 381 - scrollTop);
    };

    setLayout();
    $(window).scroll(function () {
      setLayout();
    });
  });

  // Do not care about DOM ready.

  Theme.has('front', function() {
    var $left = $('#panels-ipe-regionid-left');
    var $right = $('#panels-ipe-regionid-right');

    if ($left.length && $right.length) {
      $left.add($right).wrapAll('<div class="section--featured" />');
    }
  });

  // Simple "resize" event. Callback (not "resize" event) will be executed
  // after page load.
  Breakpoint.set(function(width, height) {

  });

  // The value of "tablet" breakpoint is 980px (see $breakpoints variable in
  // scss/_variables.scss). Callback will be executed when window width will
  // be equal or less than 980px.
  Breakpoint.set({to: 'tablet'}, function(width, height, value, name) {

  });
})(jQuery);
