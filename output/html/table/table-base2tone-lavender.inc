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
      <td>#201d2a</td>
      <td>#7451e6</td>
      <td>#7c6f85</td>
      <td>#b042ff</td>
    </tr>
    <tr>
      <td>1</td>
      <td>#2c2839</td>
      <td>#8363ee</td>
      <td>#8e8198</td>
      <td>#b957ff</td>
    </tr>
    <tr>
      <td>2</td>
      <td>#4b455f</td>
      <td>#9375f5</td>
      <td>#a092aa</td>
      <td>#c16bff</td>
    </tr>
    <tr>
      <td>3</td>
      <td>#625a7c</td>
      <td>#a286fd</td>
      <td>#b2a4bc</td>
      <td>#ca80ff</td>
    </tr>
    <tr>
      <td>4</td>
      <td>#6e658b</td>
      <td>#b5a0fe</td>
      <td>#c4b6ce</td>
      <td>#d294ff</td>
    </tr>
    <tr>
      <td>5</td>
      <td>#827a9f</td>
      <td>#c9b9fe</td>
      <td>#d8cce0</td>
      <td>#dba8ff</td>
    </tr>
    <tr>
    <td>6</td>
    <td>#9992b0</td>
    <td>#dcd2fe</td>
    <td>#ece4f1</td>
    <td>#e3bdff</td>
    </tr>
    <tr>
    <td>7</td>
    <td>#afa9c1</td>
    <td>#efebff</td>
    <td>#faf8fc</td>
    <td>#ecd1ff</td>
    </tr>
  </tbody>
</table><?php ob_end_flush(); function compress_table($buffer) {
  $search = array("/>[[:space:]]+/", "/[[:space:]]+</");
  $replace = array(">","<");
  return preg_replace($search, $replace, $buffer);
}
?>

