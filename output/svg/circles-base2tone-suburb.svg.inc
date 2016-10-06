<?php ob_start('compress_circles'); ?><section class="svg-circles"><h3 class="h3">Palettes for Vector Images</h3><svg version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" viewBox="0 0 384 96" class="{{ slug ">

<g class="circle-1">
  <g class="circle_a7"><circle fill="#a6aab9" cx="57" cy="48" r="40"/></g>
  <g class="circle_a6"><circle fill="#9094a7" cx="57" cy="48" r="35"/></g>
  <g class="circle_a5"><circle fill="#797e96" cx="57" cy="48" r="30"/></g>
  <g class="circle_a4"><circle fill="#5e6587" cx="57" cy="48" r="25"/></g>
  <g class="circle_a3"><circle fill="#51587b" cx="57" cy="48" r="20"/></g>
  <g class="circle_a2"><circle fill="#444b6f" cx="57" cy="48" r="15"/></g>
  <g class="circle_a1"><circle fill="#292e47" cx="57" cy="48" r="10"/></g>
  <g class="circle_a0"><circle fill="#1e2338" cx="57" cy="48" r="5"/></g>
</g>

 <g class="circle-2">
  <g class="circle_b7"><circle fill="#e1e6ff" cx="147" cy="48" r="40"/></g>
  <g class="circle_b6"><circle fill="#c3cdfe" cx="147" cy="48" r="35"/></g>
  <g class="circle_b5"><circle fill="#a5b3fe" cx="147" cy="48" r="30"/></g>
  <g class="circle_b4"><circle fill="#6d85fd" cx="147" cy="48" r="25"/></g>
  <g class="circle_b3"><circle fill="#4a68fc" cx="147" cy="48" r="20"/></g>
  <g class="circle_b2"><circle fill="#3b5af1" cx="147" cy="48" r="15"/></g>
  <g class="circle_b1"><circle fill="#2c4be8" cx="147" cy="48" r="10"/></g>
  <g class="circle_b0"><circle fill="#2040df" cx="147" cy="48" r="5"/></g>
</g>

<g class="circle-3">
  <g class="circle_c7"><circle fill="#f9fbfb" cx="237" cy="48" r="40"/></g>
  <g class="circle_c6"><circle fill="#e1e8ea" cx="237" cy="48" r="35"/></g>
  <g class="circle_c5"><circle fill="#cbd4d7" cx="237" cy="48" r="30"/></g>
  <g class="circle_c4"><circle fill="#b7c0c2" cx="237" cy="48" r="25"/></g>
  <g class="circle_c3"><circle fill="#a6aeb0" cx="237" cy="48" r="20"/></g>
  <g class="circle_c2"><circle fill="#939c9f" cx="237" cy="48" r="15"/></g>
  <g class="circle_c1"><circle fill="#818b8d" cx="237" cy="48" r="10"/></g>
  <g class="circle_c0"><circle fill="#71787a" cx="237" cy="48" r="5"/></g>
</g>

<g class="circle-4">
  <g class="circle_d7"><circle fill="#71d7f4" cx="327" cy="48" r="40"/></g>
  <g class="circle_d6"><circle fill="#63d3f2" cx="327" cy="48" r="35"/></g>
  <g class="circle_d5"><circle fill="#5acded" cx="327" cy="48" r="30"/></g>
  <g class="circle_d4"><circle fill="#51c6e6" cx="327" cy="48" r="25"/></g>
  <g class="circle_d3"><circle fill="#49bedf" cx="327" cy="48" r="20"/></g>
  <g class="circle_d2"><circle fill="#42b7d7" cx="327" cy="48" r="15"/></g>
  <g class="circle_d1"><circle fill="#36a9c9" cx="327" cy="48" r="10"/></g>
  <g class="circle_d0"><circle fill="#289dbd" cx="327" cy="48" r="5"/></g>
</g>
</svg>
</section><?php ob_end_flush(); function compress_circles($buffer) {
  $search = array("/>[[:space:]]+/", "/[[:space:]]+</");
  $replace = array(">","<");
  return preg_replace($search, $replace, $buffer);
}
?>

