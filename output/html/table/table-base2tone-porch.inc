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
      <td>#221e24</td>
      <td>#674573</td>
      <td>#7e736d</td>
      <td>#c46731</td>
    </tr>
    <tr>
      <td>1</td>
      <td>#302a32</td>
      <td>#7e548c</td>
      <td>#91857e</td>
      <td>#d97136</td>
    </tr>
    <tr>
      <td>2</td>
      <td>#574e5a</td>
      <td>#9466a3</td>
      <td>#a29790</td>
      <td>#e17f47</td>
    </tr>
    <tr>
      <td>3</td>
      <td>#645a68</td>
      <td>#a77cb6</td>
      <td>#b3a9a2</td>
      <td>#ec8d55</td>
    </tr>
    <tr>
      <td>4</td>
      <td>#716774</td>
      <td>#ba95c6</td>
      <td>#c4bbb5</td>
      <td>#f39b68</td>
    </tr>
    <tr>
      <td>5</td>
      <td>#8b808e</td>
      <td>#cdacd7</td>
      <td>#dacfc8</td>
      <td>#f8aa7c</td>
    </tr>
    <tr>
    <td>6</td>
    <td>#9f95a3</td>
    <td>#dfcbe6</td>
    <td>#ede3de</td>
    <td>#fcb58d</td>
    </tr>
    <tr>
    <td>7</td>
    <td>#b3aab5</td>
    <td>#f2e3f7</td>
    <td>#fcf9f8</td>
    <td>#ffc29e</td>
    </tr>
  </tbody>
</table><?php ob_end_flush(); function compress_table($buffer) {
  $search = array("/>[[:space:]]+/", "/[[:space:]]+</");
  $replace = array(">","<");
  return preg_replace($search, $replace, $buffer);
}
?>

