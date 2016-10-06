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
      <td>#222021</td>
      <td>#ad1f51</td>
      <td>#787673</td>
      <td>#996e00</td>
    </tr>
    <tr>
      <td>1</td>
      <td>#2f2d2e</td>
      <td>#875e6d</td>
      <td>#8b8984</td>
      <td>#aa7c09</td>
    </tr>
    <tr>
      <td>2</td>
      <td>#565254</td>
      <td>#936c7a</td>
      <td>#9d9b95</td>
      <td>#b88914</td>
    </tr>
    <tr>
      <td>3</td>
      <td>#635f60</td>
      <td>#9c818b</td>
      <td>#aeaca7</td>
      <td>#c39622</td>
    </tr>
    <tr>
      <td>4</td>
      <td>#706b6d</td>
      <td>#d27998</td>
      <td>#c1beb9</td>
      <td>#cca133</td>
    </tr>
    <tr>
      <td>5</td>
      <td>#8a8586</td>
      <td>#e28dab</td>
      <td>#d6d3cc</td>
      <td>#ddaf3c</td>
    </tr>
    <tr>
    <td>6</td>
    <td>#9f999b</td>
    <td>#f0a8c1</td>
    <td>#eae7e1</td>
    <td>#ebbc47</td>
    </tr>
    <tr>
    <td>7</td>
    <td>#b3adaf</td>
    <td>#ffebf2</td>
    <td>#fbfaf9</td>
    <td>#ffcc4d</td>
    </tr>
  </tbody>
</table><?php ob_end_flush(); function compress_table($buffer) {
  $search = array("/>[[:space:]]+/", "/[[:space:]]+</");
  $replace = array(">","<");
  return preg_replace($search, $replace, $buffer);
}
?>

