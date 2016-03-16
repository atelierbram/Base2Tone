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
      <td>#24242e</td>
      <td>#5151e6</td>
      <td>#7b736f</td>
      <td>#b25424</td>
    </tr>
    <tr>
      <td>1</td>
      <td>#333342</td>
      <td>#6363ee</td>
      <td>#8e8580</td>
      <td>#cb5c25</td>
    </tr>
    <tr>
      <td>2</td>
      <td>#515167</td>
      <td>#7676f4</td>
      <td>#a09792</td>
      <td>#dd672c</td>
    </tr>
    <tr>
      <td>3</td>
      <td>#5b5b76</td>
      <td>#767693</td>
      <td>#b1a9a5</td>
      <td>#e66e33</td>
    </tr>
    <tr>
      <td>4</td>
      <td>#737391</td>
      <td>#8a8aad</td>
      <td>#c3bbb7</td>
      <td>#ec7336</td>
    </tr>
    <tr>
      <td>5</td>
      <td>#8a8aa3</td>
      <td>#aaaaca</td>
      <td>#d8cfcb</td>
      <td>#f37b3f</td>
    </tr>
    <tr>
    <td>6</td>
    <td>#a1a1b5</td>
    <td>#cecee3</td>
    <td>#eae4e1</td>
    <td>#f88349</td>
    </tr>
    <tr>
    <td>7</td>
    <td>#b8b8c7</td>
    <td>#ebebff</td>
    <td>#fbf9f9</td>
    <td>#fe8c52</td>
    </tr>
  </tbody>
</table><?php ob_end_flush(); function compress_table($buffer) {
  $search = array("/>[[:space:]]+/", "/[[:space:]]+</");
  $replace = array(">","<");
  return preg_replace($search, $replace, $buffer);
}
?>

