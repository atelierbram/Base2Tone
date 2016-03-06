<?php ob_start('compress_circles'); ?><section class="svg-circles"><h3 class="h3">Palettes for Vector Images</h3><svg version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" viewBox="0 0 384 96" class="">

<g class="circle-1">
  <g class="circle_a7"><circle fill="#b3adaf" cx="57" cy="48" r="40"/></g>
  <g class="circle_a6"><circle fill="#9f999b" cx="57" cy="48" r="35"/></g>
  <g class="circle_a5"><circle fill="#8a8586" cx="57" cy="48" r="30"/></g>
  <g class="circle_a4"><circle fill="#706b6d" cx="57" cy="48" r="25"/></g>
  <g class="circle_a3"><circle fill="#635f60" cx="57" cy="48" r="20"/></g>
  <g class="circle_a2"><circle fill="#565254" cx="57" cy="48" r="15"/></g>
  <g class="circle_a1"><circle fill="#2f2d2e" cx="57" cy="48" r="10"/></g>
  <g class="circle_a0"><circle fill="#222021" cx="57" cy="48" r="5"/></g>
</g>

 <g class="circle-2">
  <g class="circle_b7"><circle fill="#ffebf2" cx="147" cy="48" r="40"/></g>
  <g class="circle_b6"><circle fill="#f0a8c1" cx="147" cy="48" r="35"/></g>
  <g class="circle_b5"><circle fill="#e28dab" cx="147" cy="48" r="30"/></g>
  <g class="circle_b4"><circle fill="#d27998" cx="147" cy="48" r="25"/></g>
  <g class="circle_b3"><circle fill="#9c818b" cx="147" cy="48" r="20"/></g>
  <g class="circle_b2"><circle fill="#936c7a" cx="147" cy="48" r="15"/></g>
  <g class="circle_b1"><circle fill="#875e6d" cx="147" cy="48" r="10"/></g>
  <g class="circle_b0"><circle fill="#ad1f51" cx="147" cy="48" r="5"/></g>
</g>

<g class="circle-3">
  <g class="circle_c7"><circle fill="#fbfaf9" cx="237" cy="48" r="40"/></g>
  <g class="circle_c6"><circle fill="#eae7e1" cx="237" cy="48" r="35"/></g>
  <g class="circle_c5"><circle fill="#d6d3cc" cx="237" cy="48" r="30"/></g>
  <g class="circle_c4"><circle fill="#c1beb9" cx="237" cy="48" r="25"/></g>
  <g class="circle_c3"><circle fill="#aeaca7" cx="237" cy="48" r="20"/></g>
  <g class="circle_c2"><circle fill="#9d9b95" cx="237" cy="48" r="15"/></g>
  <g class="circle_c1"><circle fill="#8b8984" cx="237" cy="48" r="10"/></g>
  <g class="circle_c0"><circle fill="#787673" cx="237" cy="48" r="5"/></g>
</g>

<g class="circle-4">
  <g class="circle_d7"><circle fill="#fce19c" cx="327" cy="48" r="40"/></g>
  <g class="circle_d6"><circle fill="#e6d099" cx="327" cy="48" r="35"/></g>
  <g class="circle_d5"><circle fill="#d9c38c" cx="327" cy="48" r="30"/></g>
  <g class="circle_d4"><circle fill="#cca133" cx="327" cy="48" r="25"/></g>
  <g class="circle_d3"><circle fill="#c39622" cx="327" cy="48" r="20"/></g>
  <g class="circle_d2"><circle fill="#b88914" cx="327" cy="48" r="15"/></g>
  <g class="circle_d1"><circle fill="#aa7c09" cx="327" cy="48" r="10"/></g>
  <g class="circle_d0"><circle fill="#996e00" cx="327" cy="48" r="5"/></g>
</g>
</svg>
</section><?php ob_end_flush(); function compress_circles($buffer) {
  $search = array("/>[[:space:]]+/", "/[[:space:]]+</");
  $replace = array(">","<");
  return preg_replace($search, $replace, $buffer);
}
?>

