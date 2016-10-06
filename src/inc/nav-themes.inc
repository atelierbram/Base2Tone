<?php ob_start('compress_nav'); ?>
<nav class="nav-themes" id="navThemes">
  <ul class="nav_list nav-themes_list">
    <li class='<?php if ($themeId=="space-index") echo "current"; ?> li-index'><a href="<?php echo $rootUrl; ?>">Home</a></li>
    <li class='<?php if ($themeId=="evening") echo "current"; ?> li-evening'><a href="<?php echo $rootUrl; ?>demo/evening/">Evening</a></li>
    <li class='<?php if ($themeId=="morning") echo "current"; ?> li-morning'><a href="<?php echo $rootUrl; ?>demo/morning/">Morning</a></li>
    <li class='<?php if ($themeId=="sea") echo "current"; ?> li-sea'><a href="<?php echo $rootUrl; ?>demo/sea/">Sea</a></li>
    <li class='<?php if ($themeId=="space") echo "current"; ?> li-space'><a href="<?php echo $rootUrl; ?>demo/space/">Space</a></li>
    <li class='<?php if ($themeId=="earth") echo "current"; ?> li-earth'><a href="<?php echo $rootUrl; ?>demo/earth/">Earth</a></li>
    <li class='<?php if ($themeId=="forest") echo "current"; ?> li-forest'><a href="<?php echo $rootUrl; ?>demo/forest/">Forest</a></li>
    <li class='<?php if ($themeId=="desert") echo "current"; ?> li-desert'><a href="<?php echo $rootUrl; ?>demo/desert/">Desert</a></li>
    <li class='<?php if ($themeId=="lake") echo "current"; ?> li-lake'><a href="<?php echo $rootUrl; ?>demo/lake/">Lake</a></li>
    <li class='<?php if ($themeId=="meadow") echo "current"; ?> li-meadow'><a href="<?php echo $rootUrl; ?>demo/meadow/">Meadow</a></li>
    <li class='<?php if ($themeId=="drawbridge") echo "current"; ?> li-drawbridge'><a href="<?php echo $rootUrl; ?>demo/drawbridge/">Drawbridge</a></li>
    <li class='<?php if ($themeId=="pool") echo "current"; ?> li-pool'><a href="<?php echo $rootUrl; ?>demo/pool/">Pool</a></li>
    <li class='<?php if ($themeId=="heath") echo "current"; ?> li-heath'><a href="<?php echo $rootUrl; ?>demo/heath/">Heath</a></li>
    <li class='<?php if ($themeId=="cave") echo "current"; ?> li-cave'><a href="<?php echo $rootUrl; ?>demo/cave/">Cave</a></li>
  </ul>
</nav>
<?php ob_end_flush(); function compress_nav($buffer) {
  $search = array("/>[[:space:]]+/", "/[[:space:]]+</");
  $replace = array(">","<");
  return preg_replace($search, $replace, $buffer);
}
?>
