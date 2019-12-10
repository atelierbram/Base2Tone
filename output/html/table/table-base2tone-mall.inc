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
      <td>#1e1e1f</td>
      <td>#855ee8</td>
      <td>#6d767e</td>
      <td>#3692e2</td>
    </tr>
    <tr>
      <td>1</td>
      <td>#2b2b2c</td>
      <td>#936df3</td>
      <td>#7e8891</td>
      <td>#479eeb</td>
    </tr>
    <tr>
      <td>2</td>
      <td>#515053</td>
      <td>#a17efc</td>
      <td>#909aa2</td>
      <td>#5aabf2</td>
    </tr>
    <tr>
      <td>3</td>
      <td>#5e5c60</td>
      <td>#b294ff</td>
      <td>#a2abb3</td>
      <td>#69b5f7</td>
    </tr>
    <tr>
      <td>4</td>
      <td>#6a686e</td>
      <td>#c5adff</td>
      <td>#b5bdc4</td>
      <td>#75bfff</td>
    </tr>
    <tr>
      <td>5</td>
      <td>#838188</td>
      <td>#d3c2ff</td>
      <td>#c8d2da</td>
      <td>#8ac8ff</td>
    </tr>
    <tr>
    <td>6</td>
    <td>#97959d</td>
    <td>#e5dbff</td>
    <td>#dee6ed</td>
    <td>#9ed2ff</td>
    </tr>
    <tr>
    <td>7</td>
    <td>#acaab1</td>
    <td>#f4f0ff</td>
    <td>#f8fafc</td>
    <td>#b3dbff</td>
    </tr>
  </tbody>
</table><?php ob_end_flush(); function compress_table($buffer) {
  $search = array("/>[[:space:]]+/", "/[[:space:]]+</");
  $replace = array(">","<");
  return preg_replace($search, $replace, $buffer);
}
?>

