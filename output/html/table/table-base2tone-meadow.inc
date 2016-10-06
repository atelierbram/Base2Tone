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
      <td>#192834</td>
      <td>#1b6498</td>
      <td>#757b6f</td>
      <td>#4d8217</td>
    </tr>
    <tr>
      <td>1</td>
      <td>#223644</td>
      <td>#2172ab</td>
      <td>#878e80</td>
      <td>#59931f</td>
    </tr>
    <tr>
      <td>2</td>
      <td>#335166</td>
      <td>#277fbe</td>
      <td>#99a092</td>
      <td>#66a329</td>
    </tr>
    <tr>
      <td>3</td>
      <td>#3d5e76</td>
      <td>#4299d7</td>
      <td>#abb1a5</td>
      <td>#73b234</td>
    </tr>
    <tr>
      <td>4</td>
      <td>#466b86</td>
      <td>#47adf5</td>
      <td>#bdc3b7</td>
      <td>#80bf40</td>
    </tr>
    <tr>
      <td>5</td>
      <td>#507895</td>
      <td>#8dcefc</td>
      <td>#d1d6cd</td>
      <td>#8cdd3c</td>
    </tr>
    <tr>
    <td>6</td>
    <td>#7b9eb7</td>
    <td>#afddfe</td>
    <td>#e6e8e3</td>
    <td>#99eb47</td>
    </tr>
    <tr>
    <td>7</td>
    <td>#7b9eb7</td>
    <td>#d1ecff</td>
    <td>#fafbf9</td>
    <td>#a6f655</td>
    </tr>
  </tbody>
</table><?php ob_end_flush(); function compress_table($buffer) {
  $search = array("/>[[:space:]]+/", "/[[:space:]]+</");
  $replace = array(">","<");
  return preg_replace($search, $replace, $buffer);
}
?>

