<?php ob_start('compress_head'); ?>
<!doctype html>
<html lang="en" class="no-js core no-flexbox wf-inactive bg-<?php echo $bg; ?>">
  <head>
    <meta charset="utf-8">
    <title>Base2Tone - <?php echo $title; ?></title>
  <meta name="description" content="<?php echo $description; ?>">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <style><?php include "../inc/demo-head-css.inc"; ?></style>
    <link rel="preload" href="<?php echo $rootUrl; ?>assets/css/demo-tiles/base2tone-<?php echo $theme; ?>.css" as="style" onload="this.rel='stylesheet'">
    <noscript><link rel="stylesheet" href="<?php echo $rootUrl; ?>assets/css/demo-tiles/base2tone-<?php echo $theme; ?>.css"></noscript>
  <script><?php include "../inc/head-detect-js.inc"; ?></script>
  <link rel="apple-touch-icon" sizes="180x180" href="http://base2t.one/assets/img/favicon/apple-touch-icon.png?v=2">
  <link rel="icon" type="image/png" sizes="32x32" href="http://base2t.one/assets/img/favicon/favicon-32x32.png?v=2">
  <link rel="icon" type="image/png" sizes="16x16" href="http://base2t.one/assets/img/favicon/favicon-16x16.png?v=2">
  <link rel="manifest" href="http://base2t.one/assets/img/favicon/manifest.json?v=2">
  <link rel="mask-icon" href="http://base2t.one/assets/img/favicon/safari-pinned-tab.svg?v=2" color="#7b736f">
  <link rel="shortcut icon" href="http://base2t.one/assets/img/favicon/favicon.ico?v=2">
  <meta name="apple-mobile-web-app-title" content="Base2Tone">
  <meta name="application-name" content="Base2Tone">
  <meta name="msapplication-config" content="http://base2t.one/assets/img/favicon/browserconfig.xml?v=2">
  <meta name="theme-color" content="#fbf9f9">
  </head>
  <body class="theme-<?php echo $id; ?>">
    <?php ob_end_flush(); function compress_head($buffer) {
  $search = array("/>[[:space:]]+/", "/[[:space:]]+</");
  $replace = array(">","<");
  return preg_replace($search, $replace, $buffer);
}
?>
