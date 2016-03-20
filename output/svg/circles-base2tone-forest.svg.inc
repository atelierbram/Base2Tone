<?php ob_start('compress_circles'); ?><section class="svg-circles"><h3 class="h3">Palettes for Vector Images</h3><svg version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" viewBox="0 0 384 96" class="{{ slug ">

<g class="circle-1">
  <g class="circle_a7"><circle fill="#b8c7b8" cx="57" cy="48" r="40"/></g>
  <g class="circle_a6"><circle fill="#a1b5a1" cx="57" cy="48" r="35"/></g>
  <g class="circle_a5"><circle fill="#687d68" cx="57" cy="48" r="30"/></g>
  <g class="circle_a4"><circle fill="#5e6e5e" cx="57" cy="48" r="25"/></g>
  <g class="circle_a3"><circle fill="#535f53" cx="57" cy="48" r="20"/></g>
  <g class="circle_a2"><circle fill="#485148" cx="57" cy="48" r="15"/></g>
  <g class="circle_a1"><circle fill="#353b35" cx="57" cy="48" r="10"/></g>
  <g class="circle_a0"><circle fill="#2a2d2a" cx="57" cy="48" r="5"/></g>
</g>

 <g class="circle-2">
  <g class="circle_b7"><circle fill="#f0fff0" cx="147" cy="48" r="40"/></g>
  <g class="circle_b6"><circle fill="#c8e4c8" cx="147" cy="48" r="35"/></g>
  <g class="circle_b5"><circle fill="#b3d6b3" cx="147" cy="48" r="30"/></g>
  <g class="circle_b4"><circle fill="#8fae8f" cx="147" cy="48" r="25"/></g>
  <g class="circle_b3"><circle fill="#687d68" cx="147" cy="48" r="20"/></g>
  <g class="circle_b2"><circle fill="#5c705c" cx="147" cy="48" r="15"/></g>
  <g class="circle_b1"><circle fill="#4f634f" cx="147" cy="48" r="10"/></g>
  <g class="circle_b0"><circle fill="#435643" cx="147" cy="48" r="5"/></g>
</g>

<g class="circle-3">
  <g class="circle_c7"><circle fill="#fbfbf8" cx="237" cy="48" r="40"/></g>
  <g class="circle_c6"><circle fill="#eaecdf" cx="237" cy="48" r="35"/></g>
  <g class="circle_c5"><circle fill="#d7dac8" cx="237" cy="48" r="30"/></g>
  <g class="circle_c4"><circle fill="#c3c6b3" cx="237" cy="48" r="25"/></g>
  <g class="circle_c3"><circle fill="#b2b5a1" cx="237" cy="48" r="20"/></g>
  <g class="circle_c2"><circle fill="#a1a58d" cx="237" cy="48" r="15"/></g>
  <g class="circle_c1"><circle fill="#90947a" cx="237" cy="48" r="10"/></g>
  <g class="circle_c0"><circle fill="#7d816a" cx="237" cy="48" r="5"/></g>
</g>

<g class="circle-4">
  <g class="circle_d7"><circle fill="#e5fb79" cx="327" cy="48" r="40"/></g>
  <g class="circle_d6"><circle fill="#daf06a" cx="327" cy="48" r="35"/></g>
  <g class="circle_d5"><circle fill="#cbe25a" cx="327" cy="48" r="30"/></g>
  <g class="circle_d4"><circle fill="#bfd454" cx="327" cy="48" r="25"/></g>
  <g class="circle_d3"><circle fill="#b1c44f" cx="327" cy="48" r="20"/></g>
  <g class="circle_d2"><circle fill="#a2b34d" cx="327" cy="48" r="15"/></g>
  <g class="circle_d1"><circle fill="#818b4b" cx="327" cy="48" r="10"/></g>
  <g class="circle_d0"><circle fill="#656b47" cx="327" cy="48" r="5"/></g>
</g>
</svg>
</section><?php ob_end_flush(); function compress_circles($buffer) {
  $search = array("/>[[:space:]]+/", "/[[:space:]]+</");
  $replace = array(">","<");
  return preg_replace($search, $replace, $buffer);
}
?>

