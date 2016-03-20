<?php
$title = 'Base2Tone Colorschemes';
$type = 'index';
$theme = 'space';
$themeId = 'space-index';
$id = 'space-dark';
$description = 'Base2Tone Colorschemes, 2 base hues - 32 variations > 1 theme';
$bg = 'dark';
$swaptext1 = 'Coming Soon';
$swaptext2 = 'Base2Tone';
include '../inc/config.inc';
include '../inc/head.inc';
include '../inc/header.inc';
?>
<div class="container-flex" id="main">
<?php
  include '../inc/nav-themes.inc';
  include '../inc/intro.inc';
  include '../inc/demo-tiles-header_index.inc';
  include '../inc/demo-tiles.inc';
  include '../inc/code-samples.inc';
  include '../../output/svg/circles-base2tone-space-svg.inc';
  include '../../output/html/table/table-base2tone-space.inc';
?>
  </div> <!-- /.content #content -->
</div><!-- /.container-flex #main -->
<?php include '../inc/footer.inc'; ?>
