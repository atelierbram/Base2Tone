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
      <td>#192d34</td>
      <td>#2f7289</td>
      <td>#7a7971</td>
      <td>#84740b</td>
    </tr>
    <tr>
      <td>1</td>
      <td>#223c44</td>
      <td>#36829b</td>
      <td>#8d8c81</td>
      <td>#978611</td>
    </tr>
    <tr>
      <td>2</td>
      <td>#335966</td>
      <td>#3e91ac</td>
      <td>#9f9d93</td>
      <td>#b7a21a</td>
    </tr>
    <tr>
      <td>3</td>
      <td>#3d6876</td>
      <td>#499fbc</td>
      <td>#b1afa5</td>
      <td>#c4b031</td>
    </tr>
    <tr>
      <td>4</td>
      <td>#467686</td>
      <td>#62b1cb</td>
      <td>#c2c1b7</td>
      <td>#cbbb4d</td>
    </tr>
    <tr>
      <td>5</td>
      <td>#508495</td>
      <td>#7dc2d9</td>
      <td>#d5d4cd</td>
      <td>#d6c65c</td>
    </tr>
    <tr>
    <td>6</td>
    <td>#7ba8b7</td>
    <td>#a5d8e9</td>
    <td>#e8e7e3</td>
    <td>#e9d763</td>
    </tr>
    <tr>
    <td>7</td>
    <td>#adc8d1</td>
    <td>#e1f7ff</td>
    <td>#fafaf9</td>
    <td>#ffeb66</td>
    </tr>
  </tbody>
</table><?php ob_end_flush(); function compress_table($buffer) {
  $search = array("/>[[:space:]]+/", "/[[:space:]]+</");
  $replace = array(">","<");
  return preg_replace($search, $replace, $buffer);
}
?>

