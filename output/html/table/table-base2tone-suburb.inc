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
      <td>#1e202f</td>
      <td>#5165e6</td>
      <td>#7a7175</td>
      <td>#d14781</td>
    </tr>
    <tr>
      <td>1</td>
      <td>#292c3d</td>
      <td>#6375ee</td>
      <td>#8d8186</td>
      <td>#e44e8c</td>
    </tr>
    <tr>
      <td>2</td>
      <td>#444864</td>
      <td>#7586f5</td>
      <td>#9f9398</td>
      <td>#f25a99</td>
    </tr>
    <tr>
      <td>3</td>
      <td>#4f5472</td>
      <td>#8696fd</td>
      <td>#b0a6aa</td>
      <td>#f764a1</td>
    </tr>
    <tr>
      <td>4</td>
      <td>#5b6080</td>
      <td>#a0acfe</td>
      <td>#c2b7bc</td>
      <td>#fb6fa9</td>
    </tr>
    <tr>
      <td>5</td>
      <td>#6e7396</td>
      <td>#b9c2fe</td>
      <td>#d7cbd0</td>
      <td>#fe81b5</td>
    </tr>
    <tr>
    <td>6</td>
    <td>#878ba6</td>
    <td>#d2d8fe</td>
    <td>#eae1e5</td>
    <td>#ff99c3</td>
    </tr>
    <tr>
    <td>7</td>
    <td>#9fa2b7</td>
    <td>#ebedff</td>
    <td>#fbf9fa</td>
    <td>#ffb3d2</td>
    </tr>
  </tbody>
</table><?php ob_end_flush(); function compress_table($buffer) {
  $search = array("/>[[:space:]]+/", "/[[:space:]]+</");
  $replace = array(">","<");
  return preg_replace($search, $replace, $buffer);
}
?>

