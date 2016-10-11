<?php ob_start('compress_circles'); ?><section class="svg-circles"><h3 class="h3">Palettes for Vector Images</h3><svg version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" viewBox="0 0 384 96" class="base-2-tone-space">

<g class="circle-1">
  <g class="circle_a7"><circle fill="#b8b8c7" cx="57" cy="48" r="40"/></g>
  <g class="circle_a6"><circle fill="#a1a1b5" cx="57" cy="48" r="35"/></g>
  <g class="circle_a5"><circle fill="#8a8aa3" cx="57" cy="48" r="30"/></g>
  <g class="circle_a4"><circle fill="#737391" cx="57" cy="48" r="25"/></g>
  <g class="circle_a3"><circle fill="#5b5b76" cx="57" cy="48" r="20"/></g>
  <g class="circle_a2"><circle fill="#515167" cx="57" cy="48" r="15"/></g>
  <g class="circle_a1"><circle fill="#333342" cx="57" cy="48" r="10"/></g>
  <g class="circle_a0"><circle fill="#24242e" cx="57" cy="48" r="5"/></g>
</g>

 <g class="circle-2">
  <g class="circle_b7"><circle fill="#ebebff" cx="147" cy="48" r="40"/></g>
  <g class="circle_b6"><circle fill="#cecee3" cx="147" cy="48" r="35"/></g>
  <g class="circle_b5"><circle fill="#aaaaca" cx="147" cy="48" r="30"/></g>
  <g class="circle_b4"><circle fill="#8a8aad" cx="147" cy="48" r="25"/></g>
  <g class="circle_b3"><circle fill="#767693" cx="147" cy="48" r="20"/></g>
  <g class="circle_b2"><circle fill="#7676f4" cx="147" cy="48" r="15"/></g>
  <g class="circle_b1"><circle fill="#6363ee" cx="147" cy="48" r="10"/></g>
  <g class="circle_b0"><circle fill="#5151e6" cx="147" cy="48" r="5"/></g>
</g>

<g class="circle-3">
  <g class="circle_c7"><circle fill="#fbf9f9" cx="237" cy="48" r="40"/></g>
  <g class="circle_c6"><circle fill="#eae4e1" cx="237" cy="48" r="35"/></g>
  <g class="circle_c5"><circle fill="#d8cfcb" cx="237" cy="48" r="30"/></g>
  <g class="circle_c4"><circle fill="#c3bbb7" cx="237" cy="48" r="25"/></g>
  <g class="circle_c3"><circle fill="#b1a9a5" cx="237" cy="48" r="20"/></g>
  <g class="circle_c2"><circle fill="#a09792" cx="237" cy="48" r="15"/></g>
  <g class="circle_c1"><circle fill="#8e8580" cx="237" cy="48" r="10"/></g>
  <g class="circle_c0"><circle fill="#7b736f" cx="237" cy="48" r="5"/></g>
</g>

<g class="circle-4">
  <g class="circle_d7"><circle fill="#fe8c52" cx="327" cy="48" r="40"/></g>
  <g class="circle_d6"><circle fill="#f88349" cx="327" cy="48" r="35"/></g>
  <g class="circle_d5"><circle fill="#f37b3f" cx="327" cy="48" r="30"/></g>
  <g class="circle_d4"><circle fill="#ec7336" cx="327" cy="48" r="25"/></g>
  <g class="circle_d3"><circle fill="#e66e33" cx="327" cy="48" r="20"/></g>
  <g class="circle_d2"><circle fill="#dd672c" cx="327" cy="48" r="15"/></g>
  <g class="circle_d1"><circle fill="#cb5c25" cx="327" cy="48" r="10"/></g>
  <g class="circle_d0"><circle fill="#b25424" cx="327" cy="48" r="5"/></g>
</g>
</svg>
</section><?php ob_end_flush(); function compress_circles($buffer) {
  $search = array("/>[[:space:]]+/", "/[[:space:]]+</");
  $replace = array(">","<");
  return preg_replace($search, $replace, $buffer);
}
?>

