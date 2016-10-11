<?php ob_start('compress_circles'); ?><section class="svg-circles"><h3 class="h3">Palettes for Vector Images</h3><svg version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" viewBox="0 0 384 96" class="base-2-tone-earth">

<g class="circle-1">
  <g class="circle_a7"><circle fill="#c7beb8" cx="57" cy="48" r="40"/></g>
  <g class="circle_a6"><circle fill="#b5a9a1" cx="57" cy="48" r="35"/></g>
  <g class="circle_a5"><circle fill="#a3948a" cx="57" cy="48" r="30"/></g>
  <g class="circle_a4"><circle fill="#796b63" cx="57" cy="48" r="25"/></g>
  <g class="circle_a3"><circle fill="#6a5f58" cx="57" cy="48" r="20"/></g>
  <g class="circle_a2"><circle fill="#5b534d" cx="57" cy="48" r="15"/></g>
  <g class="circle_a1"><circle fill="#3f3a37" cx="57" cy="48" r="10"/></g>
  <g class="circle_a0"><circle fill="#322d29" cx="57" cy="48" r="5"/></g>
</g>

 <g class="circle-2">
  <g class="circle_b7"><circle fill="#fff3eb" cx="147" cy="48" r="40"/></g>
  <g class="circle_b6"><circle fill="#dfb99f" cx="147" cy="48" r="35"/></g>
  <g class="circle_b5"><circle fill="#a48774" cx="147" cy="48" r="30"/></g>
  <g class="circle_b4"><circle fill="#967e6e" cx="147" cy="48" r="25"/></g>
  <g class="circle_b3"><circle fill="#88786d" cx="147" cy="48" r="20"/></g>
  <g class="circle_b2"><circle fill="#816d5f" cx="147" cy="48" r="15"/></g>
  <g class="circle_b1"><circle fill="#786254" cx="147" cy="48" r="10"/></g>
  <g class="circle_b0"><circle fill="#6f5849" cx="147" cy="48" r="5"/></g>
</g>

<g class="circle-3">
  <g class="circle_c7"><circle fill="#f2efe8" cx="237" cy="48" r="40"/></g>
  <g class="circle_c6"><circle fill="#e2dcd0" cx="237" cy="48" r="35"/></g>
  <g class="circle_c5"><circle fill="#cfc9b9" cx="237" cy="48" r="30"/></g>
  <g class="circle_c4"><circle fill="#bbb4a5" cx="237" cy="48" r="25"/></g>
  <g class="circle_c3"><circle fill="#aaa392" cx="237" cy="48" r="20"/></g>
  <g class="circle_c2"><circle fill="#9a927e" cx="237" cy="48" r="15"/></g>
  <g class="circle_c1"><circle fill="#88806d" cx="237" cy="48" r="10"/></g>
  <g class="circle_c0"><circle fill="#736d5e" cx="237" cy="48" r="5"/></g>
</g>

<g class="circle-4">
  <g class="circle_d7"><circle fill="#fcc440" cx="327" cy="48" r="40"/></g>
  <g class="circle_d6"><circle fill="#f1be46" cx="327" cy="48" r="35"/></g>
  <g class="circle_d5"><circle fill="#e6b84d" cx="327" cy="48" r="30"/></g>
  <g class="circle_d4"><circle fill="#d9b154" cx="327" cy="48" r="25"/></g>
  <g class="circle_d3"><circle fill="#cda956" cx="327" cy="48" r="20"/></g>
  <g class="circle_d2"><circle fill="#bfa05a" cx="327" cy="48" r="15"/></g>
  <g class="circle_d1"><circle fill="#b3944d" cx="327" cy="48" r="10"/></g>
  <g class="circle_d0"><circle fill="#9c8349" cx="327" cy="48" r="5"/></g>
</g>
</svg>
</section><?php ob_end_flush(); function compress_circles($buffer) {
  $search = array("/>[[:space:]]+/", "/[[:space:]]+</");
  $replace = array(">","<");
  return preg_replace($search, $replace, $buffer);
}
?>

