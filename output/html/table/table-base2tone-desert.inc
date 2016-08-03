<?php ob_start('compress_table'); ?><section class="tables">
<h3 class="h3 _mbs">Color Hex Values Table</h3>
<table>
<thead>
  <tr>
    <th></th><th>A</th><th>B</th><th>C</th><th>D</th>
  </tr>
</thead>
  <tbody>
    <tr>
      <td>0</td>
      <td>#292724</td>
      <td>#5c523d</td>
      <td>#847b75</td>
      <td>#bc672f</td>
    </tr>
    <tr>
      <td>1</td>
      <td>#3d3a34</td>
      <td>#6e6045</td>
      <td>#978d87</td>
      <td>#d37231</td>
    </tr>
    <tr>
      <td>2</td>
      <td>#615c51</td>
      <td>#816f4b</td>
      <td>#a89f99</td>
      <td>#dd7c3c</td>
    </tr>
    <tr>
      <td>3</td>
      <td>#7e7767</td>
      <td>#957e50</td>
      <td>#b9b1ac</td>
      <td>#e58748</td>
    </tr>
    <tr>
      <td>4</td>
      <td>#908774</td>
      <td>#ac8e53</td>
      <td>#cac3be</td>
      <td>#ec9255</td>
    </tr>
    <tr>
      <td>5</td>
      <td>#9f9684</td>
      <td>#c6ad7b</td>
      <td>#dcd5d0</td>
      <td>#f29d63</td>
    </tr>
    <tr>
    <td>6</td>
    <td>#ada594</td>
    <td>#ddcba6</td>
    <td>#ede7e3</td>
    <td>#f8a872</td>
    </tr>
    <tr>
    <td>7</td>
    <td>#bbb4a5</td>
    <td>#f2ead9</td>
    <td>#fbfaf9</td>
    <td>#ffb380</td>
    </tr>
  </tbody>
</table><?php ob_end_flush(); function compress_table($buffer) {
  $search = array("/>[[:space:]]+/", "/[[:space:]]+</");
  $replace = array(">","<");
  return preg_replace($search, $replace, $buffer);
}
?>

