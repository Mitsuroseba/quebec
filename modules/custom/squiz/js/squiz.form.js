(function($, moduleName) {
  'use strict';

  Drupal.behaviors[moduleName] = {
    attach: function() {
      var squiz = Drupal.settings[moduleName];
      var $form = $('#squiz_items_form > form');
      var $questions = $form.find('.squiz-item');
      var $answerGroups = $questions.find('.radio-group');
      var $allRadioButtons = $answerGroups.find('.form-radio');

      $allRadioButtons.bind('click', (function click() {
        /**
         * An associative array where key - is a number of answer and
         * value - count of selections from all questions for this answer.
         *
         * @type {Object}
         */
        var answerGroups = {};
        /**
         * Number of questions without answer.
         *
         * @type {number}
         */
        var unchecked = 0;
        /**
         * Number of questions with answer.
         *
         * @type {number}
         */
        var checked = 0;
        /**
         * Sum of all answers.
         *
         * @type {number}
         */
        var sum = 0;

        // Sum all numbers of checked radio buttons.
        $allRadioButtons.filter(':checked').each(function() {
          sum += parseInt(this.value, 10);
        });

        $(this).closest('.radio-group').find('.error-message').hide();

        $questions.each(function(i) {
          /**
           * One of questions.
           *
           * @type {jQuery}
           */
          var $question = $questions.eq(i);
          /**
           * The number which should be equal or more of
           * an amount of answers on previous questions.
           *
           * @type {Number}
           */
          var neededValue = $question.data('available');
          /**
           * The answers on current question.
           *
           * @type {jQuery}
           */
          var $questionAnswers = $question.find('.form-radio');

          // Show/hide question only if needed value is greater than zero.
          if (neededValue > 0) {
            if (sum >= neededValue) {
              $question.show();
            }
            else {
              // Hide question group and uncheck it's radio button.
              $question.hide();
              $questionAnswers.prop('checked', false);
            }
          }

          // Group the answers if user already chosen the variant of
          // current question.
          if ($questionAnswers.is(':checked')) {
            var item = $questionAnswers.filter(':checked').val();

            // Initialize answers counter.
            if (!answerGroups.hasOwnProperty(item)) {
              answerGroups[item] = 0;
            }

            answerGroups[item]++;
            checked++;
          }
          else {
            unchecked++;
          }
        });

        // Process quiz types.
        // The respective answers belong each at a time to one of three
        // possible groups of results (types of relaxation). The majority
        // of the answers ticked leads to the result. Should there be draw
        // of two types after the tenth question (4-4-2 or 5-5), the user
        // get’s to answer an eleventh questions. This additional questions
        // has to be programmed in a way that only two of the three possible
        // response options show up – the ones that correlate to the answer
        // types that were most ticked previously. Finally the majority is
        // decisive.
        if (squiz.types.SQUIZ_QUESTION_TYPE_MAX === squiz.type) {
          var $lastQuestion = $questions.last();
          var $lastQuestionAnswers = $lastQuestion.find('.form-radio');
          var duplicates = [];

          $.each(answerGroups, function(answerNumber, answerCount) {
            if (!duplicates.hasOwnProperty(answerCount)) {
              duplicates[answerCount] = [];
            }

            duplicates[answerCount].push(answerNumber);
          });

          switch (unchecked) {
            // Initial state - all questions don't have the answers.
            case $questions.length:
              $lastQuestion.hide();
              $lastQuestionAnswers.attr('disabled', true);
              break;

            // Here will be unchecked the last question.
            case 1:
              $.each(duplicates[duplicates.length - 1], function(i, answer) {
                $lastQuestionAnswers.eq(answer - 1).attr('disabled', false);
              });

              $lastQuestion[$lastQuestionAnswers.not(':disabled').length > 1 ? 'show' : 'hide']();
              break;

            // Prevent hiding the last question.
            case 0:
              $lastQuestion.show();
              break;
          }
        }

        return click;
      })());

      // Process submit buttons.
      $form.find('.load-result').each(function() {
        if (!Drupal.ajax.hasOwnProperty(this.id)) {
          return;
        }

        // Obtain necessary AJAX instance.
        var ajax = Drupal.ajax[this.id];

        // Reattach event to take a full control on it.
        $(this).unbind(ajax.event).bind(ajax.event, function(event) {
          event.preventDefault();

          var selectedItems = [];

          $questions.each(function(i) {
            var $question = $questions.eq(i);

            if ($question.is(':visible')) {
              var $answersGroup = $answerGroups.eq(i);
              var selected = Boolean($answersGroup.find('.form-radio').filter(':checked').val());

              $answersGroup.find('.error-message')[selected ? 'hide' : 'show']();

              if (selected) {
                selectedItems.push(selected);
              }
            }
          });

          if ($questions.filter(':visible').length === selectedItems.length) {
            ajax.eventResponse(this, event);
          }
        });
      });
    }
  };
})(jQuery, 'squiz');
