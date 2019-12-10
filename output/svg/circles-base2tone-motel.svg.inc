<?php ob_start('compress_circles'); ?><section class="svg-circles"><h3 class="h3">Palettes for Vector Images</h3><svg version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" viewBox="0 0 384 96" class="base-2-tone-motel">

<g class="circle-1">
  <g class="circle_a7"><circle fill="#b3a8aa" cx="57" cy="48" r="40"/></g>
  <g class="circle_a6"><circle fill="#a5979a" cx="57" cy="48" r="35"/></g>
  <g class="circle_a5"><circle fill="#94898b" cx="57" cy="48" r="30"/></g>
  <g class="circle_a4"><circle fill="#86797b" cx="57" cy="48" r="25"/></g>
  <g class="circle_a3"><circle fill="#766b6c" cx="57" cy="48" r="20"/></g>
  <g class="circle_a2"><circle fill="#5a5354" cx="57" cy="48" r="15"/></g>
  <g class="circle_a1"><circle fill="#373434" cx="57" cy="48" r="10"/></g>
  <g class="circle_a0"><circle fill="#242323" cx="57" cy="48" r="5"/></g>
</g>

 <g class="circle-2">
  <g class="circle_b7"><circle fill="#f0dbdf" cx="147" cy="48" r="40"/></g>
  <g class="circle_b6"><circle fill="#dec9cc" cx="147" cy="48" r="35"/></g>
  <g class="circle_b5"><circle fill="#ccb3b7" cx="147" cy="48" r="30"/></g>
  <g class="circle_b4"><circle fill="#b89da2" cx="147" cy="48" r="25"/></g>
  <g class="circle_b3"><circle fill="#a7868b" cx="147" cy="48" r="20"/></g>
  <g class="circle_b2"><circle fill="#956f76" cx="147" cy="48" r="15"/></g>
  <g class="circle_b1"><circle fill="#7d5e63" cx="147" cy="48" r="10"/></g>
  <g class="circle_b0"><circle fill="#674c50" cx="147" cy="48" r="5"/></g>
</g>

<g class="circle-3">
  <g class="circle_c7"><circle fill="#fbf9f9" cx="237" cy="48" r="40"/></g>
  <g class="circle_c6"><circle fill="#ede5e3" cx="237" cy="48" r="35"/></g>
  <g class="circle_c5"><circle fill="#dcd2d0" cx="237" cy="48" r="30"/></g>
  <g class="circle_c4"><circle fill="#cac0be" cx="237" cy="48" r="25"/></g>
  <g class="circle_c3"><circle fill="#b9aeac" cx="237" cy="48" r="20"/></g>
  <g class="circle_c2"><circle fill="#a89c99" cx="237" cy="48" r="15"/></g>
  <g class="circle_c1"><circle fill="#978a87" cx="237" cy="48" r="10"/></g>
  <g class="circle_c0"><circle fill="#847875" cx="237" cy="48" r="5"/></g>
</g>

<g class="circle-4">
  <g class="circle_d7"><circle fill="#ffc8bd" cx="327" cy="48" r="40"/></g>
  <g class="circle_d6"><circle fill="#ffb3a3" cx="327" cy="48" r="35"/></g>
  <g class="circle_d5"><circle fill="#ffa28f" cx="327" cy="48" r="30"/></g>
  <g class="circle_d4"><circle fill="#f8917c" cx="327" cy="48" r="25"/></g>
  <g class="circle_d3"><circle fill="#f77c64" cx="327" cy="48" r="20"/></g>
  <g class="circle_d2"><circle fill="#f6684c" cx="327" cy="48" r="15"/></g>
  <g class="circle_d1"><circle fill="#ea5f43" cx="327" cy="48" r="10"/></g>
  <g class="circle_d0"><circle fill="#e24f32" cx="327" cy="48" r="5"/></g>
</g>
</svg>
</section><?php ob_end_flush(); function compress_circles($buffer) {
  $search = array("/>[[:space:]]+/", "/[[:space:]]+</");
  $replace = array(">","<");
  return preg_replace($search, $replace, $buffer);
}
?>

