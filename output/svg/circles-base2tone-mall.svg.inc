<?php ob_start('compress_circles'); ?><section class="svg-circles"><h3 class="h3">Palettes for Vector Images</h3><svg version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" viewBox="0 0 384 96" class="base-2-tone-mall">

<g class="circle-1">
  <g class="circle_a7"><circle fill="#acaab1" cx="57" cy="48" r="40"/></g>
  <g class="circle_a6"><circle fill="#97959d" cx="57" cy="48" r="35"/></g>
  <g class="circle_a5"><circle fill="#838188" cx="57" cy="48" r="30"/></g>
  <g class="circle_a4"><circle fill="#6a686e" cx="57" cy="48" r="25"/></g>
  <g class="circle_a3"><circle fill="#5e5c60" cx="57" cy="48" r="20"/></g>
  <g class="circle_a2"><circle fill="#515053" cx="57" cy="48" r="15"/></g>
  <g class="circle_a1"><circle fill="#2b2b2c" cx="57" cy="48" r="10"/></g>
  <g class="circle_a0"><circle fill="#1e1e1f" cx="57" cy="48" r="5"/></g>
</g>

 <g class="circle-2">
  <g class="circle_b7"><circle fill="#f4f0ff" cx="147" cy="48" r="40"/></g>
  <g class="circle_b6"><circle fill="#e5dbff" cx="147" cy="48" r="35"/></g>
  <g class="circle_b5"><circle fill="#d3c2ff" cx="147" cy="48" r="30"/></g>
  <g class="circle_b4"><circle fill="#c5adff" cx="147" cy="48" r="25"/></g>
  <g class="circle_b3"><circle fill="#b294ff" cx="147" cy="48" r="20"/></g>
  <g class="circle_b2"><circle fill="#a17efc" cx="147" cy="48" r="15"/></g>
  <g class="circle_b1"><circle fill="#936df3" cx="147" cy="48" r="10"/></g>
  <g class="circle_b0"><circle fill="#855ee8" cx="147" cy="48" r="5"/></g>
</g>

<g class="circle-3">
  <g class="circle_c7"><circle fill="#f8fafc" cx="237" cy="48" r="40"/></g>
  <g class="circle_c6"><circle fill="#dee6ed" cx="237" cy="48" r="35"/></g>
  <g class="circle_c5"><circle fill="#c8d2da" cx="237" cy="48" r="30"/></g>
  <g class="circle_c4"><circle fill="#b5bdc4" cx="237" cy="48" r="25"/></g>
  <g class="circle_c3"><circle fill="#a2abb3" cx="237" cy="48" r="20"/></g>
  <g class="circle_c2"><circle fill="#909aa2" cx="237" cy="48" r="15"/></g>
  <g class="circle_c1"><circle fill="#7e8891" cx="237" cy="48" r="10"/></g>
  <g class="circle_c0"><circle fill="#6d767e" cx="237" cy="48" r="5"/></g>
</g>

<g class="circle-4">
  <g class="circle_d7"><circle fill="#b3dbff" cx="327" cy="48" r="40"/></g>
  <g class="circle_d6"><circle fill="#9ed2ff" cx="327" cy="48" r="35"/></g>
  <g class="circle_d5"><circle fill="#8ac8ff" cx="327" cy="48" r="30"/></g>
  <g class="circle_d4"><circle fill="#75bfff" cx="327" cy="48" r="25"/></g>
  <g class="circle_d3"><circle fill="#69b5f7" cx="327" cy="48" r="20"/></g>
  <g class="circle_d2"><circle fill="#5aabf2" cx="327" cy="48" r="15"/></g>
  <g class="circle_d1"><circle fill="#479eeb" cx="327" cy="48" r="10"/></g>
  <g class="circle_d0"><circle fill="#3692e2" cx="327" cy="48" r="5"/></g>
</g>
</svg>
</section><?php ob_end_flush(); function compress_circles($buffer) {
  $search = array("/>[[:space:]]+/", "/[[:space:]]+</");
  $replace = array(">","<");
  return preg_replace($search, $replace, $buffer);
}
?>

