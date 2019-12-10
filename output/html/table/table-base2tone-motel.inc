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
      <td>#242323</td>
      <td>#674c50</td>
      <td>#847875</td>
      <td>#e24f32</td>
    </tr>
    <tr>
      <td>1</td>
      <td>#373434</td>
      <td>#7d5e63</td>
      <td>#978a87</td>
      <td>#ea5f43</td>
    </tr>
    <tr>
      <td>2</td>
      <td>#5a5354</td>
      <td>#956f76</td>
      <td>#a89c99</td>
      <td>#f6684c</td>
    </tr>
    <tr>
      <td>3</td>
      <td>#766b6c</td>
      <td>#a7868b</td>
      <td>#b9aeac</td>
      <td>#f77c64</td>
    </tr>
    <tr>
      <td>4</td>
      <td>#86797b</td>
      <td>#b89da2</td>
      <td>#cac0be</td>
      <td>#f8917c</td>
    </tr>
    <tr>
      <td>5</td>
      <td>#94898b</td>
      <td>#ccb3b7</td>
      <td>#dcd2d0</td>
      <td>#ffa28f</td>
    </tr>
    <tr>
    <td>6</td>
    <td>#a5979a</td>
    <td>#dec9cc</td>
    <td>#ede5e3</td>
    <td>#ffb3a3</td>
    </tr>
    <tr>
    <td>7</td>
    <td>#b3a8aa</td>
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

