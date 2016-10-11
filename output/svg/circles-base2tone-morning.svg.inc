<?php ob_start('compress_circles'); ?><section class="svg-circles"><h3 class="h3">Palettes for Vector Images</h3><svg version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" viewBox="0 0 384 96" class="base-2-tone-morning">

<g class="circle-1">
  <g class="circle_a7"><circle fill="#a9afbc" cx="57" cy="48" r="40"/></g>
  <g class="circle_a6"><circle fill="#8d95a5" cx="57" cy="48" r="35"/></g>
  <g class="circle_a5"><circle fill="#7e889a" cx="57" cy="48" r="30"/></g>
  <g class="circle_a4"><circle fill="#707a8f" cx="57" cy="48" r="25"/></g>
  <g class="circle_a3"><circle fill="#656e81" cx="57" cy="48" r="20"/></g>
  <g class="circle_a2"><circle fill="#4f5664" cx="57" cy="48" r="15"/></g>
  <g class="circle_a1"><circle fill="#31363f" cx="57" cy="48" r="10"/></g>
  <g class="circle_a0"><circle fill="#232834" cx="57" cy="48" r="5"/></g>
</g>

 <g class="circle-2">
  <g class="circle_b7"><circle fill="#dee6f7" cx="147" cy="48" r="40"/></g>
  <g class="circle_b6"><circle fill="#b7c9eb" cx="147" cy="48" r="35"/></g>
  <g class="circle_b5"><circle fill="#93abdc" cx="147" cy="48" r="30"/></g>
  <g class="circle_b4"><circle fill="#728fcb" cx="147" cy="48" r="25"/></g>
  <g class="circle_b3"><circle fill="#3d75e6" cx="147" cy="48" r="20"/></g>
  <g class="circle_b2"><circle fill="#1659df" cx="147" cy="48" r="15"/></g>
  <g class="circle_b1"><circle fill="#0b3c9d" cx="147" cy="48" r="10"/></g>
  <g class="circle_b0"><circle fill="#063289" cx="147" cy="48" r="5"/></g>
</g>

<g class="circle-3">
  <g class="circle_c7"><circle fill="#faf8f5" cx="237" cy="48" r="40"/></g>
  <g class="circle_c6"><circle fill="#e3dcce" cx="237" cy="48" r="35"/></g>
  <g class="circle_c5"><circle fill="#cdc4b1" cx="237" cy="48" r="30"/></g>
  <g class="circle_c4"><circle fill="#b6ad9a" cx="237" cy="48" r="25"/></g>
  <g class="circle_c3"><circle fill="#9c927c" cx="237" cy="48" r="20"/></g>
  <g class="circle_c2"><circle fill="#867b65" cx="237" cy="48" r="15"/></g>
  <g class="circle_c1"><circle fill="#69604f" cx="237" cy="48" r="10"/></g>
  <g class="circle_c0"><circle fill="#544d40" cx="237" cy="48" r="5"/></g>
</g>

<g class="circle-4">
  <g class="circle_d7"><circle fill="#e5ddcd" cx="327" cy="48" r="40"/></g>
  <g class="circle_d6"><circle fill="#d1c2a3" cx="327" cy="48" r="35"/></g>
  <g class="circle_d5"><circle fill="#c6b28b" cx="327" cy="48" r="30"/></g>
  <g class="circle_d4"><circle fill="#b29762" cx="327" cy="48" r="25"/></g>
  <g class="circle_d3"><circle fill="#9a7c42" cx="327" cy="48" r="20"/></g>
  <g class="circle_d2"><circle fill="#896724" cx="327" cy="48" r="15"/></g>
  <g class="circle_d1"><circle fill="#594212" cx="327" cy="48" r="10"/></g>
  <g class="circle_d0"><circle fill="#2d2006" cx="327" cy="48" r="5"/></g>
</g>
</svg>
</section><?php ob_end_flush(); function compress_circles($buffer) {
  $search = array("/>[[:space:]]+/", "/[[:space:]]+</");
  $replace = array(">","<");
  return preg_replace($search, $replace, $buffer);
}
?>

