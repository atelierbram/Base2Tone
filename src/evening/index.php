<?php
$title = 'Evening, Base2Tone Colorschemes';
$type = 'page';
$theme = 'evening';
$themeId = $theme;
$id = 'evening-dark';
$description = 'Base2Tone colorscheme';
$bg = 'dark';
include '../inc/config.inc';
include '../inc/head.inc';
include '../inc/header.inc';
?>
<div class="container-flex" id="main">
<?php
  include '../inc/nav-themes.inc';
  include '../inc/demo-tiles-header.inc';
  include '../inc/demo-tiles.inc';
  include '../inc/code-samples.inc';
ob_start('compress_markup'); ?>
  <section class="svg-interior">
    <h3 class="h3 _mbxl">Templates for illustrations</h3>
    <div class="mw-75vh">
    <?php include '../../output/svg/interior-base2tone-evening.svg.inc'; ?>
  <div class="cf"><a href="../../output/svg/interior-base2tone-<?= $theme ?>.svg.inc" class="button _mtm">download vector image</a><p class="credits small _mtm"><a href="//www.freepik.com/free-vector/house-interior-with-armchair-and-shelves_1056598.htm">Designed by Freepik</a></p>
</div><!-- /.cf --></div><!-- /.mw-75vh -->
</section><?php ob_end_flush(); function compress_markup($buffer) { $search = array("/>[[:space:]]+/", "/[[:space:]]+</"); $replace = array(">","<"); return preg_replace($search, $replace, $buffer); } ?>
    <?php include '../../output/html/table/table-base2tone-evening.inc'; ?>
  </div> <!-- /.content #content -->
</div><!-- /.container-flex #main -->
<?php include '../inc/footer.inc'; ?>
