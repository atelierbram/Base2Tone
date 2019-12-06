<?php ob_start('compress_circles'); ?><section class="svg-circles"><h3 class="h3">Palettes for Vector Images</h3><svg version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" viewBox="0 0 384 96" class="base-2-tone-suburb">

<g class="circle-1">
  <g class="circle_a7"><circle fill="#9fa2b7" cx="57" cy="48" r="40"/></g>
  <g class="circle_a6"><circle fill="#878ba6" cx="57" cy="48" r="35"/></g>
  <g class="circle_a5"><circle fill="#6e7396" cx="57" cy="48" r="30"/></g>
  <g class="circle_a4"><circle fill="#5b6080" cx="57" cy="48" r="25"/></g>
  <g class="circle_a3"><circle fill="#4f5472" cx="57" cy="48" r="20"/></g>
  <g class="circle_a2"><circle fill="#444864" cx="57" cy="48" r="15"/></g>
  <g class="circle_a1"><circle fill="#292c3d" cx="57" cy="48" r="10"/></g>
  <g class="circle_a0"><circle fill="#1e202f" cx="57" cy="48" r="5"/></g>
</g>

 <g class="circle-2">
  <g class="circle_b7"><circle fill="#ebedff" cx="147" cy="48" r="40"/></g>
  <g class="circle_b6"><circle fill="#d2d8fe" cx="147" cy="48" r="35"/></g>
  <g class="circle_b5"><circle fill="#b9c2fe" cx="147" cy="48" r="30"/></g>
  <g class="circle_b4"><circle fill="#a0acfe" cx="147" cy="48" r="25"/></g>
  <g class="circle_b3"><circle fill="#8696fd" cx="147" cy="48" r="20"/></g>
  <g class="circle_b2"><circle fill="#7586f5" cx="147" cy="48" r="15"/></g>
  <g class="circle_b1"><circle fill="#6375ee" cx="147" cy="48" r="10"/></g>
  <g class="circle_b0"><circle fill="#5165e6" cx="147" cy="48" r="5"/></g>
</g>

<g class="circle-3">
  <g class="circle_c7"><circle fill="#fbf9fa" cx="237" cy="48" r="40"/></g>
  <g class="circle_c6"><circle fill="#eae1e5" cx="237" cy="48" r="35"/></g>
  <g class="circle_c5"><circle fill="#d7cbd0" cx="237" cy="48" r="30"/></g>
  <g class="circle_c4"><circle fill="#c2b7bc" cx="237" cy="48" r="25"/></g>
  <g class="circle_c3"><circle fill="#b0a6aa" cx="237" cy="48" r="20"/></g>
  <g class="circle_c2"><circle fill="#9f9398" cx="237" cy="48" r="15"/></g>
  <g class="circle_c1"><circle fill="#8d8186" cx="237" cy="48" r="10"/></g>
  <g class="circle_c0"><circle fill="#7a7175" cx="237" cy="48" r="5"/></g>
</g>

<g class="circle-4">
  <g class="circle_d7"><circle fill="#ffb3d2" cx="327" cy="48" r="40"/></g>
  <g class="circle_d6"><circle fill="#ff99c3" cx="327" cy="48" r="35"/></g>
  <g class="circle_d5"><circle fill="#fe81b5" cx="327" cy="48" r="30"/></g>
  <g class="circle_d4"><circle fill="#fb6fa9" cx="327" cy="48" r="25"/></g>
  <g class="circle_d3"><circle fill="#f764a1" cx="327" cy="48" r="20"/></g>
  <g class="circle_d2"><circle fill="#f25a99" cx="327" cy="48" r="15"/></g>
  <g class="circle_d1"><circle fill="#e44e8c" cx="327" cy="48" r="10"/></g>
  <g class="circle_d0"><circle fill="#d14781" cx="327" cy="48" r="5"/></g>
</g>
</svg>
</section><?php ob_end_flush(); function compress_circles($buffer) {
  $search = array("/>[[:space:]]+/", "/[[:space:]]+</");
  $replace = array(">","<");
  return preg_replace($search, $replace, $buffer);
}
?>

