<?php ob_start('compress_circles'); ?><section class="svg-circles"><h3 class="h3">Palettes for Vector Images</h3><svg version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" viewBox="0 0 384 96" class="{{ slug ">

<g class="circle-1">
  <g class="circle_a7"><circle fill="#b3adb3" cx="57" cy="48" r="40"/></g>
  <g class="circle_a6"><circle fill="#9e999f" cx="57" cy="48" r="35"/></g>
  <g class="circle_a5"><circle fill="#89858a" cx="57" cy="48" r="30"/></g>
  <g class="circle_a4"><circle fill="#6f6b70" cx="57" cy="48" r="25"/></g>
  <g class="circle_a3"><circle fill="#635f63" cx="57" cy="48" r="20"/></g>
  <g class="circle_a2"><circle fill="#575158" cx="57" cy="48" r="15"/></g>
  <g class="circle_a1"><circle fill="#2f2d2f" cx="57" cy="48" r="10"/></g>
  <g class="circle_a0"><circle fill="#222022" cx="57" cy="48" r="5"/></g>
</g>

 <g class="circle-2">
  <g class="circle_b7"><circle fill="#fdebff" cx="147" cy="48" r="40"/></g>
  <g class="circle_b6"><circle fill="#eaa8f0" cx="147" cy="48" r="35"/></g>
  <g class="circle_b5"><circle fill="#db8de2" cx="147" cy="48" r="30"/></g>
  <g class="circle_b4"><circle fill="#cb79d2" cx="147" cy="48" r="25"/></g>
  <g class="circle_b3"><circle fill="#9a819c" cx="147" cy="48" r="20"/></g>
  <g class="circle_b2"><circle fill="#8f6c93" cx="147" cy="48" r="15"/></g>
  <g class="circle_b1"><circle fill="#845e87" cx="147" cy="48" r="10"/></g>
  <g class="circle_b0"><circle fill="#a21fad" cx="147" cy="48" r="5"/></g>
</g>

<g class="circle-3">
  <g class="circle_c7"><circle fill="#fbfaf9" cx="237" cy="48" r="40"/></g>
  <g class="circle_c6"><circle fill="#eae6e1" cx="237" cy="48" r="35"/></g>
  <g class="circle_c5"><circle fill="#d6d2cc" cx="237" cy="48" r="30"/></g>
  <g class="circle_c4"><circle fill="#c1bdb9" cx="237" cy="48" r="25"/></g>
  <g class="circle_c3"><circle fill="#aeaba7" cx="237" cy="48" r="20"/></g>
  <g class="circle_c2"><circle fill="#9d9a95" cx="237" cy="48" r="15"/></g>
  <g class="circle_c1"><circle fill="#8b8884" cx="237" cy="48" r="10"/></g>
  <g class="circle_c0"><circle fill="#787673" cx="237" cy="48" r="5"/></g>
</g>

<g class="circle-4">
  <g class="circle_d7"><circle fill="#ffd599" cx="327" cy="48" r="40"/></g>
  <g class="circle_d6"><circle fill="#e6c699" cx="327" cy="48" r="35"/></g>
  <g class="circle_d5"><circle fill="#d9b98c" cx="327" cy="48" r="30"/></g>
  <g class="circle_d4"><circle fill="#cc8c33" cx="327" cy="48" r="25"/></g>
  <g class="circle_d3"><circle fill="#c38022" cx="327" cy="48" r="20"/></g>
  <g class="circle_d2"><circle fill="#b87414" cx="327" cy="48" r="15"/></g>
  <g class="circle_d1"><circle fill="#aa6709" cx="327" cy="48" r="10"/></g>
  <g class="circle_d0"><circle fill="#995900" cx="327" cy="48" r="5"/></g>
</g>
</svg>
</section><?php ob_end_flush(); function compress_circles($buffer) {
  $search = array("/>[[:space:]]+/", "/[[:space:]]+</");
  $replace = array(">","<");
  return preg_replace($search, $replace, $buffer);
}
?>

