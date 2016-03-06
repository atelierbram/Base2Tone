<?php ob_start('compress_circles'); ?><section class="svg-circles"><h3 class="h3">Palettes for Vector Images</h3><svg version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" viewBox="0 0 384 96" class="">

<g class="circle-1">
  <g class="circle_a7"><circle fill="#b8bfc7" cx="57" cy="48" r="40"/></g>
  <g class="circle_a6"><circle fill="#a1aab5" cx="57" cy="48" r="35"/></g>
  <g class="circle_a5"><circle fill="#8a96a3" cx="57" cy="48" r="30"/></g>
  <g class="circle_a4"><circle fill="#738191" cx="57" cy="48" r="25"/></g>
  <g class="circle_a3"><circle fill="#4a5f78" cx="57" cy="48" r="20"/></g>
  <g class="circle_a2"><circle fill="#405368" cx="57" cy="48" r="15"/></g>
  <g class="circle_a1"><circle fill="#27323f" cx="57" cy="48" r="10"/></g>
  <g class="circle_a0"><circle fill="#1d262f" cx="57" cy="48" r="5"/></g>
</g>

 <g class="circle-2">
  <g class="circle_b7"><circle fill="#ebf4ff" cx="147" cy="48" r="40"/></g>
  <g class="circle_b6"><circle fill="#afd4fe" cx="147" cy="48" r="35"/></g>
  <g class="circle_b5"><circle fill="#7eb6f6" cx="147" cy="48" r="30"/></g>
  <g class="circle_b4"><circle fill="#6e9bcf" cx="147" cy="48" r="25"/></g>
  <g class="circle_b3"><circle fill="#57718e" cx="147" cy="48" r="20"/></g>
  <g class="circle_b2"><circle fill="#34659d" cx="147" cy="48" r="15"/></g>
  <g class="circle_b1"><circle fill="#1757a1" cx="147" cy="48" r="10"/></g>
  <g class="circle_b0"><circle fill="#004a9e" cx="147" cy="48" r="5"/></g>
</g>

<g class="circle-3">
  <g class="circle_c7"><circle fill="#f9fbfa" cx="237" cy="48" r="40"/></g>
  <g class="circle_c6"><circle fill="#e1eae7" cx="237" cy="48" r="35"/></g>
  <g class="circle_c5"><circle fill="#cbd7d3" cx="237" cy="48" r="30"/></g>
  <g class="circle_c4"><circle fill="#b7c2be" cx="237" cy="48" r="25"/></g>
  <g class="circle_c3"><circle fill="#a6b0ad" cx="237" cy="48" r="20"/></g>
  <g class="circle_c2"><circle fill="#939f9b" cx="237" cy="48" r="15"/></g>
  <g class="circle_c1"><circle fill="#818d89" cx="237" cy="48" r="10"/></g>
  <g class="circle_c0"><circle fill="#717a77" cx="237" cy="48" r="5"/></g>
</g>

<g class="circle-4">
  <g class="circle_d7"><circle fill="#47ebb4" cx="327" cy="48" r="40"/></g>
  <g class="circle_d6"><circle fill="#2aeaaa" cx="327" cy="48" r="35"/></g>
  <g class="circle_d5"><circle fill="#14e19d" cx="327" cy="48" r="30"/></g>
  <g class="circle_d4"><circle fill="#0fc78a" cx="327" cy="48" r="25"/></g>
  <g class="circle_d3"><circle fill="#0db57d" cx="327" cy="48" r="20"/></g>
  <g class="circle_d2"><circle fill="#0aa370" cx="327" cy="48" r="15"/></g>
  <g class="circle_d1"><circle fill="#088c60" cx="327" cy="48" r="10"/></g>
  <g class="circle_d0"><circle fill="#067953" cx="327" cy="48" r="5"/></g>
</g>
</svg>
</section><?php ob_end_flush(); function compress_circles($buffer) {
  $search = array("/>[[:space:]]+/", "/[[:space:]]+</");
  $replace = array(">","<");
  return preg_replace($search, $replace, $buffer);
}
?>

