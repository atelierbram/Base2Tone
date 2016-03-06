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
  </head>
    <body class="theme-<?php echo $id; ?>">
    <?php ob_end_flush(); function compress_head($buffer) {
  $search = array("/>[[:space:]]+/", "/[[:space:]]+</");
  $replace = array(">","<");
  return preg_replace($search, $replace, $buffer);
}
?>
