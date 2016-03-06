<?php ob_start('compress_table'); ?><section class="tables">
<h3 class="h3">Color Hex Values Table</h3>
<table>
<thead>
  <tr>
    <th></th><th>A</th><th>B</th><th>C</th><th>D</th>
  </tr>
</thead>
  <tbody>
    <tr>
      <td>0</td>
      <td>#2a2734</td>
      <td>#6a51e6</td>
      <td>#7c756e</td>
      <td>#b37537</td>
    </tr>
    <tr>
      <td>1</td>
      <td>#363342</td>
      <td>#7a63ee</td>
      <td>#90877f</td>
      <td>#cb823a</td>
    </tr>
    <tr>
      <td>2</td>
      <td>#545167</td>
      <td>#8a75f5</td>
      <td>#a19991</td>
      <td>#e09142</td>
    </tr>
    <tr>
      <td>3</td>
      <td>#6c6783</td>
      <td>#9a86fd</td>
      <td>#b2aba4</td>
      <td>#ffa142</td>
    </tr>
    <tr>
      <td>4</td>
      <td>#787391</td>
      <td>#afa0fe</td>
      <td>#c3bdb6</td>
      <td>#ffad5c</td>
    </tr>
    <tr>
      <td>5</td>
      <td>#8e8aa3</td>
      <td>#c4b9fe</td>
      <td>#d8d1ca</td>
      <td>#ffb870</td>
    </tr>
    <tr>
    <td>6</td>
    <td>#a4a1b5</td>
    <td>#d9d2fe</td>
    <td>#ebe6e0</td>
    <td>#ffc285</td>
    </tr>
    <tr>
    <td>7</td>
    <td>#bab8c7</td>
    <td>#eeebff</td>
    <td>#fbfaf9</td>
    <td>#ffcc99</td>
    </tr>
  </tbody>
</table><?php ob_end_flush(); function compress_table($buffer) {
  $search = array("/>[[:space:]]+/", "/[[:space:]]+</");
  $replace = array(">","<");
  return preg_replace($search, $replace, $buffer);
}
?>

