<?php
/**
 * @file
 * HTML frame.
 *
 * @var \stdClass $language
 * @var string $rdf_namespaces
 * @var string $head
 * @var string $head_title
 * @var string $styles
 * @var string $scripts
 * @var string $classes
 * @var string $page_top
 * @var string $page
 * @var string $page_bottom
 */
?>
<!DOCTYPE html>
<!--[if lt IE 7]><html class="no-js lt-ie9 lt-ie8 lt-ie7"><![endif]-->
<!--[if IE 7]><html class="no-js lt-ie9 lt-ie8"><![endif]-->
<!--[if IE 8]><html class="no-js lt-ie9"><![endif]-->
<!--[if gt IE 8]><html class="no-js"><![endif]-->
<html lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>">
<head <?php print $rdf_namespaces; ?>>
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
  <meta name="HandheldFriendly" content="True" />
  <meta name="MobileOptimized" content="320" />
  <meta name="viewport" content="width=device-width, initial-scale=1.0, user-scalable=no" />
  <meta name="theme-color" content="#015eaf" />
  <meta name="apple-mobile-web-app-capable" content="yes" />
  <meta name="apple-mobile-web-app-status-bar-style" content="black-translucent" />
  <meta http-equiv="cleartype" content="on" />
  <!--[if lt IE 9]>
    <script src="//html5shiv.googlecode.com/svn/trunk/html5.js"></script>
  <![endif]-->
  <?php print $styles; ?>
  <?php print $scripts; ?>
</head>
<body class="<?php print $classes; ?>" role="document">
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>
  <div id="overlay" hidden></div>
</body>
</html>
