<?php ob_start('compress_circles'); ?><section class="svg-circles"><h3 class="h3">Palettes for Vector Images</h3><svg version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" viewBox="0 0 384 96" class="{{ slug ">

<g class="circle-1">
  <g class="circle_a7"><circle fill="#bab8c7" cx="57" cy="48" r="40"/></g>
  <g class="circle_a6"><circle fill="#a4a1b5" cx="57" cy="48" r="35"/></g>
  <g class="circle_a5"><circle fill="#8e8aa3" cx="57" cy="48" r="30"/></g>
  <g class="circle_a4"><circle fill="#787391" cx="57" cy="48" r="25"/></g>
  <g class="circle_a3"><circle fill="#6c6783" cx="57" cy="48" r="20"/></g>
  <g class="circle_a2"><circle fill="#545167" cx="57" cy="48" r="15"/></g>
  <g class="circle_a1"><circle fill="#363342" cx="57" cy="48" r="10"/></g>
  <g class="circle_a0"><circle fill="#2a2734" cx="57" cy="48" r="5"/></g>
</g>

 <g class="circle-2">
  <g class="circle_b7"><circle fill="#eeebff" cx="147" cy="48" r="40"/></g>
  <g class="circle_b6"><circle fill="#d9d2fe" cx="147" cy="48" r="35"/></g>
  <g class="circle_b5"><circle fill="#c4b9fe" cx="147" cy="48" r="30"/></g>
  <g class="circle_b4"><circle fill="#afa0fe" cx="147" cy="48" r="25"/></g>
  <g class="circle_b3"><circle fill="#9a86fd" cx="147" cy="48" r="20"/></g>
  <g class="circle_b2"><circle fill="#8a75f5" cx="147" cy="48" r="15"/></g>
  <g class="circle_b1"><circle fill="#7a63ee" cx="147" cy="48" r="10"/></g>
  <g class="circle_b0"><circle fill="#6a51e6" cx="147" cy="48" r="5"/></g>
</g>

<g class="circle-3">
  <g class="circle_c7"><circle fill="#fbfaf9" cx="237" cy="48" r="40"/></g>
  <g class="circle_c6"><circle fill="#ebe6e0" cx="237" cy="48" r="35"/></g>
  <g class="circle_c5"><circle fill="#d8d1ca" cx="237" cy="48" r="30"/></g>
  <g class="circle_c4"><circle fill="#c3bdb6" cx="237" cy="48" r="25"/></g>
  <g class="circle_c3"><circle fill="#b2aba4" cx="237" cy="48" r="20"/></g>
  <g class="circle_c2"><circle fill="#a19991" cx="237" cy="48" r="15"/></g>
  <g class="circle_c1"><circle fill="#90877f" cx="237" cy="48" r="10"/></g>
  <g class="circle_c0"><circle fill="#7c756e" cx="237" cy="48" r="5"/></g>
</g>

<g class="circle-4">
  <g class="circle_d7"><circle fill="#ffcc99" cx="327" cy="48" r="40"/></g>
  <g class="circle_d6"><circle fill="#ffc285" cx="327" cy="48" r="35"/></g>
  <g class="circle_d5"><circle fill="#ffb870" cx="327" cy="48" r="30"/></g>
  <g class="circle_d4"><circle fill="#ffad5c" cx="327" cy="48" r="25"/></g>
  <g class="circle_d3"><circle fill="#ffa142" cx="327" cy="48" r="20"/></g>
  <g class="circle_d2"><circle fill="#e09142" cx="327" cy="48" r="15"/></g>
  <g class="circle_d1"><circle fill="#cb823a" cx="327" cy="48" r="10"/></g>
  <g class="circle_d0"><circle fill="#b37537" cx="327" cy="48" r="5"/></g>
</g>
</svg>
</section><?php ob_end_flush(); function compress_circles($buffer) {
  $search = array("/>[[:space:]]+/", "/[[:space:]]+</");
  $replace = array(">","<");
  return preg_replace($search, $replace, $buffer);
}
?>

