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
      <td>#292824</td>
      <td>#5c553d</td>
      <td>#847b75</td>
      <td>#bc672f</td>
    </tr>
    <tr>
      <td>1</td>
      <td>#3d3a34</td>
      <td>#6e6445</td>
      <td>#978d87</td>
      <td>#d37231</td>
    </tr>
    <tr>
      <td>2</td>
      <td>#615e51</td>
      <td>#81744b</td>
      <td>#a89f99</td>
      <td>#dd7c3c</td>
    </tr>
    <tr>
      <td>3</td>
      <td>#7e7967</td>
      <td>#958550</td>
      <td>#b9b1ac</td>
      <td>#e58748</td>
    </tr>
    <tr>
      <td>4</td>
      <td>#908974</td>
      <td>#ac9753</td>
      <td>#cac3be</td>
      <td>#ec9255</td>
    </tr>
    <tr>
      <td>5</td>
      <td>#9f9884</td>
      <td>#c6b57b</td>
      <td>#dcd5d0</td>
      <td>#f29d63</td>
    </tr>
    <tr>
    <td>6</td>
    <td>#ada794</td>
    <td>#ddd0a6</td>
    <td>#ede7e3</td>
    <td>#f8a872</td>
    </tr>
    <tr>
    <td>7</td>
    <td>#bbb6a5</td>
    <td>#f2ecd9</td>
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

