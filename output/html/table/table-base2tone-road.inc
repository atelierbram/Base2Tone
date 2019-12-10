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
      <td>#282425</td>
      <td>#584145</td>
      <td>#847875</td>
      <td>#e24f32</td>
    </tr>
    <tr>
      <td>1</td>
      <td>#3b3536</td>
      <td>#664d51</td>
      <td>#978a87</td>
      <td>#ea5f43</td>
    </tr>
    <tr>
      <td>2</td>
      <td>#5f5355</td>
      <td>#75575c</td>
      <td>#a89c99</td>
      <td>#f6684c</td>
    </tr>
    <tr>
      <td>3</td>
      <td>#7c6a6d</td>
      <td>#856067</td>
      <td>#b9aeac</td>
      <td>#f77c64</td>
    </tr>
    <tr>
      <td>4</td>
      <td>#8c787b</td>
      <td>#946b72</td>
      <td>#cac0be</td>
      <td>#f8917c</td>
    </tr>
    <tr>
      <td>5</td>
      <td>#9a898c</td>
      <td>#b48e94</td>
      <td>#dcd2d0</td>
      <td>#ffa28f</td>
    </tr>
    <tr>
    <td>6</td>
    <td>#aa979a</td>
    <td>#d1b3b8</td>
    <td>#ede5e3</td>
    <td>#ffb3a3</td>
    </tr>
    <tr>
    <td>7</td>
    <td>#b8a8ab</td>
    <td>#f0dbdf</td>
    <td>#fbf9f9</td>
    <td>#ffc8bd</td>
    </tr>
  </tbody>
</table><?php ob_end_flush(); function compress_table($buffer) {
  $search = array("/>[[:space:]]+/", "/[[:space:]]+</");
  $replace = array(">","<");
  return preg_replace($search, $replace, $buffer);
}
?>

