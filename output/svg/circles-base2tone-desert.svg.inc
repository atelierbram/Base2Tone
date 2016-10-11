<?php ob_start('compress_circles'); ?><section class="svg-circles"><h3 class="h3">Palettes for Vector Images</h3><svg version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" viewBox="0 0 384 96" class="base-2-tone-desert">

<g class="circle-1">
  <g class="circle_a7"><circle fill="#bbb4a5" cx="57" cy="48" r="40"/></g>
  <g class="circle_a6"><circle fill="#ada594" cx="57" cy="48" r="35"/></g>
  <g class="circle_a5"><circle fill="#9f9684" cx="57" cy="48" r="30"/></g>
  <g class="circle_a4"><circle fill="#908774" cx="57" cy="48" r="25"/></g>
  <g class="circle_a3"><circle fill="#7e7767" cx="57" cy="48" r="20"/></g>
  <g class="circle_a2"><circle fill="#615c51" cx="57" cy="48" r="15"/></g>
  <g class="circle_a1"><circle fill="#3d3a34" cx="57" cy="48" r="10"/></g>
  <g class="circle_a0"><circle fill="#292724" cx="57" cy="48" r="5"/></g>
</g>

 <g class="circle-2">
  <g class="circle_b7"><circle fill="#f2ead9" cx="147" cy="48" r="40"/></g>
  <g class="circle_b6"><circle fill="#ddcba6" cx="147" cy="48" r="35"/></g>
  <g class="circle_b5"><circle fill="#c6ad7b" cx="147" cy="48" r="30"/></g>
  <g class="circle_b4"><circle fill="#ac8e53" cx="147" cy="48" r="25"/></g>
  <g class="circle_b3"><circle fill="#957e50" cx="147" cy="48" r="20"/></g>
  <g class="circle_b2"><circle fill="#816f4b" cx="147" cy="48" r="15"/></g>
  <g class="circle_b1"><circle fill="#6e6045" cx="147" cy="48" r="10"/></g>
  <g class="circle_b0"><circle fill="#5c523d" cx="147" cy="48" r="5"/></g>
</g>

<g class="circle-3">
  <g class="circle_c7"><circle fill="#fbfaf9" cx="237" cy="48" r="40"/></g>
  <g class="circle_c6"><circle fill="#ede7e3" cx="237" cy="48" r="35"/></g>
  <g class="circle_c5"><circle fill="#dcd5d0" cx="237" cy="48" r="30"/></g>
  <g class="circle_c4"><circle fill="#cac3be" cx="237" cy="48" r="25"/></g>
  <g class="circle_c3"><circle fill="#b9b1ac" cx="237" cy="48" r="20"/></g>
  <g class="circle_c2"><circle fill="#a89f99" cx="237" cy="48" r="15"/></g>
  <g class="circle_c1"><circle fill="#978d87" cx="237" cy="48" r="10"/></g>
  <g class="circle_c0"><circle fill="#847b75" cx="237" cy="48" r="5"/></g>
</g>

<g class="circle-4">
  <g class="circle_d7"><circle fill="#ffb380" cx="327" cy="48" r="40"/></g>
  <g class="circle_d6"><circle fill="#f8a872" cx="327" cy="48" r="35"/></g>
  <g class="circle_d5"><circle fill="#f29d63" cx="327" cy="48" r="30"/></g>
  <g class="circle_d4"><circle fill="#ec9255" cx="327" cy="48" r="25"/></g>
  <g class="circle_d3"><circle fill="#e58748" cx="327" cy="48" r="20"/></g>
  <g class="circle_d2"><circle fill="#dd7c3c" cx="327" cy="48" r="15"/></g>
  <g class="circle_d1"><circle fill="#d37231" cx="327" cy="48" r="10"/></g>
  <g class="circle_d0"><circle fill="#bc672f" cx="327" cy="48" r="5"/></g>
</g>
</svg>
</section><?php ob_end_flush(); function compress_circles($buffer) {
  $search = array("/>[[:space:]]+/", "/[[:space:]]+</");
  $replace = array(">","<");
  return preg_replace($search, $replace, $buffer);
}
?>

