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
      <td>#1e1f1e</td>
      <td>#1c8217</td>
      <td>#837467</td>
      <td>#bd5d0f</td>
    </tr>
    <tr>
      <td>1</td>
      <td>#2b2c2a</td>
      <td>#25931f</td>
      <td>#978678</td>
      <td>#c96a1d</td>
    </tr>
    <tr>
      <td>2</td>
      <td>#505350</td>
      <td>#3fac39</td>
      <td>#a7988b</td>
      <td>#d97726</td>
    </tr>
    <tr>
      <td>3</td>
      <td>#5d605c</td>
      <td>#4cb946</td>
      <td>#b7aa9f</td>
      <td>#dd843c</td>
    </tr>
    <tr>
      <td>4</td>
      <td>#696d69</td>
      <td>#6bcc66</td>
      <td>#c7bcb2</td>
      <td>#db9257</td>
    </tr>
    <tr>
      <td>5</td>
      <td>#828782</td>
      <td>#90d98c</td>
      <td>#dbd0c7</td>
      <td>#dba070</td>
    </tr>
    <tr>
    <td>6</td>
    <td>#969c96</td>
    <td>#b7e3b5</td>
    <td>#ece5df</td>
    <td>#d9af8c</td>
    </tr>
    <tr>
    <td>7</td>
    <td>#aab1aa</td>
    <td>#dcf0db</td>
    <td>#fbfaf8</td>
    <td>#e0cab8</td>
    </tr>
  </tbody>
</table><?php ob_end_flush(); function compress_table($buffer) {
  $search = array("/>[[:space:]]+/", "/[[:space:]]+</");
  $replace = array(">","<");
  return preg_replace($search, $replace, $buffer);
}
?>

