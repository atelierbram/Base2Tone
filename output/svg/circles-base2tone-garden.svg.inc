<?php ob_start('compress_circles'); ?><section class="svg-circles"><h3 class="h3">Palettes for Vector Images</h3><svg version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" viewBox="0 0 384 96" class="base-2-tone-garden">

<g class="circle-1">
  <g class="circle_a7"><circle fill="#aab1aa" cx="57" cy="48" r="40"/></g>
  <g class="circle_a6"><circle fill="#969c96" cx="57" cy="48" r="35"/></g>
  <g class="circle_a5"><circle fill="#828782" cx="57" cy="48" r="30"/></g>
  <g class="circle_a4"><circle fill="#696d69" cx="57" cy="48" r="25"/></g>
  <g class="circle_a3"><circle fill="#5d605c" cx="57" cy="48" r="20"/></g>
  <g class="circle_a2"><circle fill="#505350" cx="57" cy="48" r="15"/></g>
  <g class="circle_a1"><circle fill="#2b2c2a" cx="57" cy="48" r="10"/></g>
  <g class="circle_a0"><circle fill="#1e1f1e" cx="57" cy="48" r="5"/></g>
</g>

 <g class="circle-2">
  <g class="circle_b7"><circle fill="#dcf0db" cx="147" cy="48" r="40"/></g>
  <g class="circle_b6"><circle fill="#b7e3b5" cx="147" cy="48" r="35"/></g>
  <g class="circle_b5"><circle fill="#90d98c" cx="147" cy="48" r="30"/></g>
  <g class="circle_b4"><circle fill="#6bcc66" cx="147" cy="48" r="25"/></g>
  <g class="circle_b3"><circle fill="#4cb946" cx="147" cy="48" r="20"/></g>
  <g class="circle_b2"><circle fill="#3fac39" cx="147" cy="48" r="15"/></g>
  <g class="circle_b1"><circle fill="#25931f" cx="147" cy="48" r="10"/></g>
  <g class="circle_b0"><circle fill="#1c8217" cx="147" cy="48" r="5"/></g>
</g>

<g class="circle-3">
  <g class="circle_c7"><circle fill="#fbfaf8" cx="237" cy="48" r="40"/></g>
  <g class="circle_c6"><circle fill="#ece5df" cx="237" cy="48" r="35"/></g>
  <g class="circle_c5"><circle fill="#dbd0c7" cx="237" cy="48" r="30"/></g>
  <g class="circle_c4"><circle fill="#c7bcb2" cx="237" cy="48" r="25"/></g>
  <g class="circle_c3"><circle fill="#b7aa9f" cx="237" cy="48" r="20"/></g>
  <g class="circle_c2"><circle fill="#a7988b" cx="237" cy="48" r="15"/></g>
  <g class="circle_c1"><circle fill="#978678" cx="237" cy="48" r="10"/></g>
  <g class="circle_c0"><circle fill="#837467" cx="237" cy="48" r="5"/></g>
</g>

<g class="circle-4">
  <g class="circle_d7"><circle fill="#e0cab8" cx="327" cy="48" r="40"/></g>
  <g class="circle_d6"><circle fill="#d9af8c" cx="327" cy="48" r="35"/></g>
  <g class="circle_d5"><circle fill="#dba070" cx="327" cy="48" r="30"/></g>
  <g class="circle_d4"><circle fill="#db9257" cx="327" cy="48" r="25"/></g>
  <g class="circle_d3"><circle fill="#dd843c" cx="327" cy="48" r="20"/></g>
  <g class="circle_d2"><circle fill="#d97726" cx="327" cy="48" r="15"/></g>
  <g class="circle_d1"><circle fill="#c96a1d" cx="327" cy="48" r="10"/></g>
  <g class="circle_d0"><circle fill="#bd5d0f" cx="327" cy="48" r="5"/></g>
</g>
</svg>
</section><?php ob_end_flush(); function compress_circles($buffer) {
  $search = array("/>[[:space:]]+/", "/[[:space:]]+</");
  $replace = array(">","<");
  return preg_replace($search, $replace, $buffer);
}
?>

