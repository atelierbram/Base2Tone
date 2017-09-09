<?php
$title = 'Meadow, Base2Tone Colorschemes';
$type = 'page';
$theme = 'meadow';
$themeId = $theme;
$id = 'meadow-dark';
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
  include '../../output/svg/interior-base2tone-meadow.svg.inc';
  // include '../../output/svg/circles-base2tone-meadow.svg.inc';
  include '../../output/html/table/table-base2tone-meadow.inc';
?>
  </div> <!-- /.content #content -->
</div><!-- /.container-flex #main -->
<?php include '../inc/footer.inc'; ?>
