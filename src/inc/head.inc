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
    <noscript><link rel="stylesheet" href="<?php echo $rootUrl; ?>assets/css/demo-tiles/base2tone-<?php echo $theme; ?>.css" onload="this.rel='stylesheet'"></noscript>
<script><?php include "../inc/head-detect-js.inc"; ?></script>

<link rel="apple-touch-icon" sizes="57x57" href="http://base2t.one/assets/img/favicon/apple-touch-icon-57x57.png">
<link rel="apple-touch-icon" sizes="60x60" href="http://base2t.one/assets/img/favicon/apple-touch-icon-60x60.png">
<link rel="apple-touch-icon" sizes="72x72" href="http://base2t.one/assets/img/favicon/apple-touch-icon-72x72.png">
<link rel="apple-touch-icon" sizes="76x76" href="http://base2t.one/assets/img/favicon/apple-touch-icon-76x76.png">
<link rel="apple-touch-icon" sizes="114x114" href="http://base2t.one/assets/img/favicon/apple-touch-icon-114x114.png">
<link rel="apple-touch-icon" sizes="120x120" href="http://base2t.one/assets/img/favicon/apple-touch-icon-120x120.png">
<link rel="apple-touch-icon" sizes="144x144" href="http://base2t.one/assets/img/favicon/apple-touch-icon-144x144.png">
<link rel="apple-touch-icon" sizes="152x152" href="http://base2t.one/assets/img/favicon/apple-touch-icon-152x152.png">
<link rel="apple-touch-icon" sizes="180x180" href="http://base2t.one/assets/img/favicon/apple-touch-icon-180x180.png">
<link rel="icon" type="image/png" href="http://base2t.one/assets/img/favicon/favicon-32x32.png" sizes="32x32">
<link rel="icon" type="image/png" href="http://base2t.one/assets/img/favicon/favicon-194x194.png" sizes="194x194">
<link rel="icon" type="image/png" href="http://base2t.one/assets/img/favicon/favicon-96x96.png" sizes="96x96">
<link rel="icon" type="image/png" href="http://base2t.one/assets/img/favicon/android-chrome-192x192.png" sizes="192x192">
<link rel="icon" type="image/png" href="http://base2t.one/assets/img/favicon/favicon-16x16.png" sizes="16x16">
<link rel="manifest" href="http://base2t.one/assets/img/favicon/manifest.json">
<link rel="mask-icon" href="http://base2t.one/assets/img/favicon/safari-pinned-tab.svg" color="#44486f">
<link rel="shortcut icon" href="http://base2t.one/assets/img/favicon/favicon.ico">
<meta name="msapplication-TileColor" content="#da532c">
<meta name="msapplication-TileImage" content="http://base2t.one/assets/img/favicon/mstile-144x144.png">
<meta name="msapplication-config" content="http://base2t.one/assets/img/favicon/browserconfig.xml">
<meta name="theme-color" content="#e8e9f8">

  </head>
    <body class="theme-<?php echo $id; ?>">
    <?php ob_end_flush(); function compress_head($buffer) {
  $search = array("/>[[:space:]]+/", "/[[:space:]]+</");
  $replace = array(">","<");
  return preg_replace($search, $replace, $buffer);
}
?>
