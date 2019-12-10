<?php ob_start('compress_circles'); ?><section class="svg-circles"><h3 class="h3">Palettes for Vector Images</h3><svg version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" viewBox="0 0 384 96" class="base-2-tone-porch">

<g class="circle-1">
  <g class="circle_a7"><circle fill="#b3aab5" cx="57" cy="48" r="40"/></g>
  <g class="circle_a6"><circle fill="#9f95a3" cx="57" cy="48" r="35"/></g>
  <g class="circle_a5"><circle fill="#8b808e" cx="57" cy="48" r="30"/></g>
  <g class="circle_a4"><circle fill="#716774" cx="57" cy="48" r="25"/></g>
  <g class="circle_a3"><circle fill="#645a68" cx="57" cy="48" r="20"/></g>
  <g class="circle_a2"><circle fill="#574e5a" cx="57" cy="48" r="15"/></g>
  <g class="circle_a1"><circle fill="#302a32" cx="57" cy="48" r="10"/></g>
  <g class="circle_a0"><circle fill="#221e24" cx="57" cy="48" r="5"/></g>
</g>

 <g class="circle-2">
  <g class="circle_b7"><circle fill="#f2e3f7" cx="147" cy="48" r="40"/></g>
  <g class="circle_b6"><circle fill="#dfcbe6" cx="147" cy="48" r="35"/></g>
  <g class="circle_b5"><circle fill="#cdacd7" cx="147" cy="48" r="30"/></g>
  <g class="circle_b4"><circle fill="#ba95c6" cx="147" cy="48" r="25"/></g>
  <g class="circle_b3"><circle fill="#a77cb6" cx="147" cy="48" r="20"/></g>
  <g class="circle_b2"><circle fill="#9466a3" cx="147" cy="48" r="15"/></g>
  <g class="circle_b1"><circle fill="#7e548c" cx="147" cy="48" r="10"/></g>
  <g class="circle_b0"><circle fill="#674573" cx="147" cy="48" r="5"/></g>
</g>

<g class="circle-3">
  <g class="circle_c7"><circle fill="#fcf9f8" cx="237" cy="48" r="40"/></g>
  <g class="circle_c6"><circle fill="#ede3de" cx="237" cy="48" r="35"/></g>
  <g class="circle_c5"><circle fill="#dacfc8" cx="237" cy="48" r="30"/></g>
  <g class="circle_c4"><circle fill="#c4bbb5" cx="237" cy="48" r="25"/></g>
  <g class="circle_c3"><circle fill="#b3a9a2" cx="237" cy="48" r="20"/></g>
  <g class="circle_c2"><circle fill="#a29790" cx="237" cy="48" r="15"/></g>
  <g class="circle_c1"><circle fill="#91857e" cx="237" cy="48" r="10"/></g>
  <g class="circle_c0"><circle fill="#7e736d" cx="237" cy="48" r="5"/></g>
</g>

<g class="circle-4">
  <g class="circle_d7"><circle fill="#ffc29e" cx="327" cy="48" r="40"/></g>
  <g class="circle_d6"><circle fill="#fcb58d" cx="327" cy="48" r="35"/></g>
  <g class="circle_d5"><circle fill="#f8aa7c" cx="327" cy="48" r="30"/></g>
  <g class="circle_d4"><circle fill="#f39b68" cx="327" cy="48" r="25"/></g>
  <g class="circle_d3"><circle fill="#ec8d55" cx="327" cy="48" r="20"/></g>
  <g class="circle_d2"><circle fill="#e17f47" cx="327" cy="48" r="15"/></g>
  <g class="circle_d1"><circle fill="#d97136" cx="327" cy="48" r="10"/></g>
  <g class="circle_d0"><circle fill="#c46731" cx="327" cy="48" r="5"/></g>
</g>
</svg>
</section><?php ob_end_flush(); function compress_circles($buffer) {
  $search = array("/>[[:space:]]+/", "/[[:space:]]+</");
  $replace = array(">","<");
  return preg_replace($search, $replace, $buffer);
}
?>

