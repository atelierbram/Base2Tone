<?php ob_start('compress_circles'); ?><section class="svg-circles"><h3 class="h3">Palettes for Vector Images</h3><svg version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" viewBox="0 0 384 96" class="base-2-tone-lake">

<g class="circle-1">
  <g class="circle_a7"><circle fill="#adc8d1" cx="57" cy="48" r="40"/></g>
  <g class="circle_a6"><circle fill="#7ba8b7" cx="57" cy="48" r="35"/></g>
  <g class="circle_a5"><circle fill="#508495" cx="57" cy="48" r="30"/></g>
  <g class="circle_a4"><circle fill="#467686" cx="57" cy="48" r="25"/></g>
  <g class="circle_a3"><circle fill="#3d6876" cx="57" cy="48" r="20"/></g>
  <g class="circle_a2"><circle fill="#335966" cx="57" cy="48" r="15"/></g>
  <g class="circle_a1"><circle fill="#223c44" cx="57" cy="48" r="10"/></g>
  <g class="circle_a0"><circle fill="#192d34" cx="57" cy="48" r="5"/></g>
</g>

 <g class="circle-2">
  <g class="circle_b7"><circle fill="#e1f7ff" cx="147" cy="48" r="40"/></g>
  <g class="circle_b6"><circle fill="#a5d8e9" cx="147" cy="48" r="35"/></g>
  <g class="circle_b5"><circle fill="#7dc2d9" cx="147" cy="48" r="30"/></g>
  <g class="circle_b4"><circle fill="#62b1cb" cx="147" cy="48" r="25"/></g>
  <g class="circle_b3"><circle fill="#499fbc" cx="147" cy="48" r="20"/></g>
  <g class="circle_b2"><circle fill="#3e91ac" cx="147" cy="48" r="15"/></g>
  <g class="circle_b1"><circle fill="#36829b" cx="147" cy="48" r="10"/></g>
  <g class="circle_b0"><circle fill="#2f7289" cx="147" cy="48" r="5"/></g>
</g>

<g class="circle-3">
  <g class="circle_c7"><circle fill="#fafaf9" cx="237" cy="48" r="40"/></g>
  <g class="circle_c6"><circle fill="#e8e7e3" cx="237" cy="48" r="35"/></g>
  <g class="circle_c5"><circle fill="#d5d4cd" cx="237" cy="48" r="30"/></g>
  <g class="circle_c4"><circle fill="#c2c1b7" cx="237" cy="48" r="25"/></g>
  <g class="circle_c3"><circle fill="#b1afa5" cx="237" cy="48" r="20"/></g>
  <g class="circle_c2"><circle fill="#9f9d93" cx="237" cy="48" r="15"/></g>
  <g class="circle_c1"><circle fill="#8d8c81" cx="237" cy="48" r="10"/></g>
  <g class="circle_c0"><circle fill="#7a7971" cx="237" cy="48" r="5"/></g>
</g>

<g class="circle-4">
  <g class="circle_d7"><circle fill="#ffeb66" cx="327" cy="48" r="40"/></g>
  <g class="circle_d6"><circle fill="#e9d763" cx="327" cy="48" r="35"/></g>
  <g class="circle_d5"><circle fill="#d6c65c" cx="327" cy="48" r="30"/></g>
  <g class="circle_d4"><circle fill="#cbbb4d" cx="327" cy="48" r="25"/></g>
  <g class="circle_d3"><circle fill="#c4b031" cx="327" cy="48" r="20"/></g>
  <g class="circle_d2"><circle fill="#b7a21a" cx="327" cy="48" r="15"/></g>
  <g class="circle_d1"><circle fill="#978611" cx="327" cy="48" r="10"/></g>
  <g class="circle_d0"><circle fill="#84740b" cx="327" cy="48" r="5"/></g>
</g>
</svg>
</section><?php ob_end_flush(); function compress_circles($buffer) {
  $search = array("/>[[:space:]]+/", "/[[:space:]]+</");
  $replace = array(">","<");
  return preg_replace($search, $replace, $buffer);
}
?>

