<?php ob_start('compress_circles'); ?><section class="svg-circles"><h3 class="h3">Palettes for Vector Images</h3><svg version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" viewBox="0 0 384 96" class="{{ slug ">

<g class="circle-1">
  <g class="circle_a7"><circle fill="#7b9eb7" cx="57" cy="48" r="40"/></g>
  <g class="circle_a6"><circle fill="#7b9eb7" cx="57" cy="48" r="35"/></g>
  <g class="circle_a5"><circle fill="#507895" cx="57" cy="48" r="30"/></g>
  <g class="circle_a4"><circle fill="#466b86" cx="57" cy="48" r="25"/></g>
  <g class="circle_a3"><circle fill="#3d5e76" cx="57" cy="48" r="20"/></g>
  <g class="circle_a2"><circle fill="#335166" cx="57" cy="48" r="15"/></g>
  <g class="circle_a1"><circle fill="#223644" cx="57" cy="48" r="10"/></g>
  <g class="circle_a0"><circle fill="#192834" cx="57" cy="48" r="5"/></g>
</g>

 <g class="circle-2">
  <g class="circle_b7"><circle fill="#d1ecff" cx="147" cy="48" r="40"/></g>
  <g class="circle_b6"><circle fill="#afddfe" cx="147" cy="48" r="35"/></g>
  <g class="circle_b5"><circle fill="#8dcefc" cx="147" cy="48" r="30"/></g>
  <g class="circle_b4"><circle fill="#47adf5" cx="147" cy="48" r="25"/></g>
  <g class="circle_b3"><circle fill="#4299d7" cx="147" cy="48" r="20"/></g>
  <g class="circle_b2"><circle fill="#277fbe" cx="147" cy="48" r="15"/></g>
  <g class="circle_b1"><circle fill="#2172ab" cx="147" cy="48" r="10"/></g>
  <g class="circle_b0"><circle fill="#1b6498" cx="147" cy="48" r="5"/></g>
</g>

<g class="circle-3">
  <g class="circle_c7"><circle fill="#fafbf9" cx="237" cy="48" r="40"/></g>
  <g class="circle_c6"><circle fill="#e6e8e3" cx="237" cy="48" r="35"/></g>
  <g class="circle_c5"><circle fill="#d1d6cd" cx="237" cy="48" r="30"/></g>
  <g class="circle_c4"><circle fill="#bdc3b7" cx="237" cy="48" r="25"/></g>
  <g class="circle_c3"><circle fill="#abb1a5" cx="237" cy="48" r="20"/></g>
  <g class="circle_c2"><circle fill="#99a092" cx="237" cy="48" r="15"/></g>
  <g class="circle_c1"><circle fill="#878e80" cx="237" cy="48" r="10"/></g>
  <g class="circle_c0"><circle fill="#757b6f" cx="237" cy="48" r="5"/></g>
</g>

<g class="circle-4">
  <g class="circle_d7"><circle fill="#a6f655" cx="327" cy="48" r="40"/></g>
  <g class="circle_d6"><circle fill="#99eb47" cx="327" cy="48" r="35"/></g>
  <g class="circle_d5"><circle fill="#8cdd3c" cx="327" cy="48" r="30"/></g>
  <g class="circle_d4"><circle fill="#80bf40" cx="327" cy="48" r="25"/></g>
  <g class="circle_d3"><circle fill="#73b234" cx="327" cy="48" r="20"/></g>
  <g class="circle_d2"><circle fill="#66a329" cx="327" cy="48" r="15"/></g>
  <g class="circle_d1"><circle fill="#59931f" cx="327" cy="48" r="10"/></g>
  <g class="circle_d0"><circle fill="#4d8217" cx="327" cy="48" r="5"/></g>
</g>
</svg>
</section><?php ob_end_flush(); function compress_circles($buffer) {
  $search = array("/>[[:space:]]+/", "/[[:space:]]+</");
  $replace = array(">","<");
  return preg_replace($search, $replace, $buffer);
}
?>

