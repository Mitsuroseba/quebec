<?php
/**
 * @file
 * Default template for ApsisSubscription plugin.
 *
 * @see ContentTypes\ApsisSubscription
 *
 * @var array $content
 */
?>
<?php if (!empty($content['action'])): ?>
  <div class="wrapper">
    <div class="block--subscription"
      <?php if (!empty($content['image'])): ?>
        style="background-image: url(<?php print file_create_url($content['image']->uri); ?>)"
      <?php endif; ?>>
      <div class="wrapper">
        <header>
          <h2>
            <?php print t('Sign up for our newsletter'); ?>
          </h2>
          <h5>
            <?php print t('and stay updated in the world of golf'); ?>
          </h5>
        </header>
        <form class="subscription-form" name="SubscriberForm" action="<?php print $content['action']; ?>" onsubmit="return CorrectEmailaddress(this);" method="post" target="iframe-form" class="anpform" id="SubscriberForm">
          <div class="form-container">
            <input type="text" name="pf_SubscriberName" placeholder="<?php print t('Write your name'); ?>">
          </div>
          <div class="form-container">
            <input type="text" name="pf_Email" value="" size="30" placeholder="<?php print t('And your email'); ?>">
            <input type="submit" name="Submit" class="button" value="<?php print t('Sign Up'); ?>">
            <input type="hidden" name="pf_FormType" value="OptInForm">
            <input type="hidden" name="pf_OptInMethod" value="SingleOptInMethod">
            <input type="hidden" name="pf_CounterDemogrFields" value="2">
            <input type="hidden" name="pf_CounterMailinglists" value="1">
            <input type="hidden" name="pf_Version" value="2">

            <input type="hidden" name="pf_AccountId" value="18067">
            <input type="hidden" name="pf_ListById" value="1">
            <input type="hidden" name="pf_MailinglistName1" value="1032145">
          </div>
        </form>
      </div>
    </div>
  </div>
<?php endif; ?>
