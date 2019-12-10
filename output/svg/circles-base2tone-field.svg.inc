<?php ob_start('compress_circles'); ?><section class="svg-circles"><h3 class="h3">Palettes for Vector Images</h3><svg version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" viewBox="0 0 384 96" class="base-2-tone-field">

<g class="circle-1">
  <g class="circle_a7"><circle fill="#a4b7b4" cx="57" cy="48" r="40"/></g>
  <g class="circle_a6"><circle fill="#8ea4a0" cx="57" cy="48" r="35"/></g>
  <g class="circle_a5"><circle fill="#78918d" cx="57" cy="48" r="30"/></g>
  <g class="circle_a4"><circle fill="#667a77" cx="57" cy="48" r="25"/></g>
  <g class="circle_a3"><circle fill="#5a6d6a" cx="57" cy="48" r="20"/></g>
  <g class="circle_a2"><circle fill="#42524f" cx="57" cy="48" r="15"/></g>
  <g class="circle_a1"><circle fill="#242e2c" cx="57" cy="48" r="10"/></g>
  <g class="circle_a0"><circle fill="#18201e" cx="57" cy="48" r="5"/></g>
</g>

 <g class="circle-2">
  <g class="circle_b7"><circle fill="#a8fff1" cx="147" cy="48" r="40"/></g>
  <g class="circle_b6"><circle fill="#88f2e0" cx="147" cy="48" r="35"/></g>
  <g class="circle_b5"><circle fill="#65e6d1" cx="147" cy="48" r="30"/></g>
  <g class="circle_b4"><circle fill="#40ddc3" cx="147" cy="48" r="25"/></g>
  <g class="circle_b3"><circle fill="#25d0b4" cx="147" cy="48" r="20"/></g>
  <g class="circle_b2"><circle fill="#0fbda0" cx="147" cy="48" r="15"/></g>
  <g class="circle_b1"><circle fill="#089b83" cx="147" cy="48" r="10"/></g>
  <g class="circle_b0"><circle fill="#037764" cx="147" cy="48" r="5"/></g>
</g>

<g class="circle-3">
  <g class="circle_c7"><circle fill="#f9fbfa" cx="237" cy="48" r="40"/></g>
  <g class="circle_c6"><circle fill="#e3e8e5" cx="237" cy="48" r="35"/></g>
  <g class="circle_c5"><circle fill="#c7d1cb" cx="237" cy="48" r="30"/></g>
  <g class="circle_c4"><circle fill="#aebcb4" cx="237" cy="48" r="25"/></g>
  <g class="circle_c3"><circle fill="#9daaa2" cx="237" cy="48" r="20"/></g>
  <g class="circle_c2"><circle fill="#8a9990" cx="237" cy="48" r="15"/></g>
  <g class="circle_c1"><circle fill="#78877e" cx="237" cy="48" r="10"/></g>
  <g class="circle_c0"><circle fill="#68736d" cx="237" cy="48" r="5"/></g>
</g>

<g class="circle-4">
  <g class="circle_d7"><circle fill="#85ffb8" cx="327" cy="48" r="40"/></g>
  <g class="circle_d6"><circle fill="#69f7a4" cx="327" cy="48" r="35"/></g>
  <g class="circle_d5"><circle fill="#55ec94" cx="327" cy="48" r="30"/></g>
  <g class="circle_d4"><circle fill="#3be381" cx="327" cy="48" r="25"/></g>
  <g class="circle_d3"><circle fill="#25d46e" cx="327" cy="48" r="20"/></g>
  <g class="circle_d2"><circle fill="#15c15d" cx="327" cy="48" r="15"/></g>
  <g class="circle_d1"><circle fill="#0eaa4f" cx="327" cy="48" r="10"/></g>
  <g class="circle_d0"><circle fill="#00943e" cx="327" cy="48" r="5"/></g>
</g>
</svg>
</section><?php ob_end_flush(); function compress_circles($buffer) {
  $search = array("/>[[:space:]]+/", "/[[:space:]]+</");
  $replace = array(">","<");
  return preg_replace($search, $replace, $buffer);
}
?>

