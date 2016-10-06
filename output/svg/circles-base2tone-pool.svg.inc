<?php ob_start('compress_circles'); ?><section class="svg-circles"><h3 class="h3">Palettes for Vector Images</h3><svg version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" viewBox="0 0 384 96" class="{{ slug ">

<g class="circle-1">
  <g class="circle_a7"><circle fill="#afa7b9" cx="57" cy="48" r="40"/></g>
  <g class="circle_a6"><circle fill="#9a90a7" cx="57" cy="48" r="35"/></g>
  <g class="circle_a5"><circle fill="#857897" cx="57" cy="48" r="30"/></g>
  <g class="circle_a4"><circle fill="#706383" cx="57" cy="48" r="25"/></g>
  <g class="circle_a3"><circle fill="#635775" cx="57" cy="48" r="20"/></g>
  <g class="circle_a2"><circle fill="#574b68" cx="57" cy="48" r="15"/></g>
  <g class="circle_a1"><circle fill="#372f42" cx="57" cy="48" r="10"/></g>
  <g class="circle_a0"><circle fill="#2a2433" cx="57" cy="48" r="5"/></g>
</g>

 <g class="circle-2">
  <g class="circle_b7"><circle fill="#f3ebff" cx="147" cy="48" r="40"/></g>
  <g class="circle_b6"><circle fill="#e4d2fe" cx="147" cy="48" r="35"/></g>
  <g class="circle_b5"><circle fill="#d6b9fe" cx="147" cy="48" r="30"/></g>
  <g class="circle_b4"><circle fill="#c7a0fe" cx="147" cy="48" r="25"/></g>
  <g class="circle_b3"><circle fill="#b886fd" cx="147" cy="48" r="20"/></g>
  <g class="circle_b2"><circle fill="#aa75f5" cx="147" cy="48" r="15"/></g>
  <g class="circle_b1"><circle fill="#9d63ee" cx="147" cy="48" r="10"/></g>
  <g class="circle_b0"><circle fill="#8f51e6" cx="147" cy="48" r="5"/></g>
</g>

<g class="circle-3">
  <g class="circle_c7"><circle fill="#fbf9f9" cx="237" cy="48" r="40"/></g>
  <g class="circle_c6"><circle fill="#eae1e1" cx="237" cy="48" r="35"/></g>
  <g class="circle_c5"><circle fill="#d7cccb" cx="237" cy="48" r="30"/></g>
  <g class="circle_c4"><circle fill="#c2b8b7" cx="237" cy="48" r="25"/></g>
  <g class="circle_c3"><circle fill="#b0a6a6" cx="237" cy="48" r="20"/></g>
  <g class="circle_c2"><circle fill="#9f9393" cx="237" cy="48" r="15"/></g>
  <g class="circle_c1"><circle fill="#8d8281" cx="237" cy="48" r="10"/></g>
  <g class="circle_c0"><circle fill="#7a7171" cx="237" cy="48" r="5"/></g>
</g>

<g class="circle-4">
  <g class="circle_d7"><circle fill="#ffb6b3" cx="327" cy="48" r="40"/></g>
  <g class="circle_d6"><circle fill="#ff9e99" cx="327" cy="48" r="35"/></g>
  <g class="circle_d5"><circle fill="#fc8983" cx="327" cy="48" r="30"/></g>
  <g class="circle_d4"><circle fill="#f87972" cx="327" cy="48" r="25"/></g>
  <g class="circle_d3"><circle fill="#f36f68" cx="327" cy="48" r="20"/></g>
  <g class="circle_d2"><circle fill="#ed655e" cx="327" cy="48" r="15"/></g>
  <g class="circle_d1"><circle fill="#d95f59" cx="327" cy="48" r="10"/></g>
  <g class="circle_d0"><circle fill="#cf504a" cx="327" cy="48" r="5"/></g>
</g>
</svg>
</section><?php ob_end_flush(); function compress_circles($buffer) {
  $search = array("/>[[:space:]]+/", "/[[:space:]]+</");
  $replace = array(">","<");
  return preg_replace($search, $replace, $buffer);
}
?>

