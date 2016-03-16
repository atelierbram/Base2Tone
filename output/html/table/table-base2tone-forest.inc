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
      <td>#2a2d2a</td>
      <td>#435643</td>
      <td>#7d816a</td>
      <td>#656b47</td>
    </tr>
    <tr>
      <td>1</td>
      <td>#353b35</td>
      <td>#4f634f</td>
      <td>#90947a</td>
      <td>#818b4b</td>
    </tr>
    <tr>
      <td>2</td>
      <td>#485148</td>
      <td>#5c705c</td>
      <td>#a1a58d</td>
      <td>#a2b34d</td>
    </tr>
    <tr>
      <td>3</td>
      <td>#535f53</td>
      <td>#687d68</td>
      <td>#b2b5a1</td>
      <td>#b1c44f</td>
    </tr>
    <tr>
      <td>4</td>
      <td>#5e6e5e</td>
      <td>#8fae8f</td>
      <td>#c3c6b3</td>
      <td>#bfd454</td>
    </tr>
    <tr>
      <td>5</td>
      <td>#687d68</td>
      <td>#b3d6b3</td>
      <td>#d7dac8</td>
      <td>#cbe25a</td>
    </tr>
    <tr>
    <td>6</td>
    <td>#a1b5a1</td>
    <td>#c8e4c8</td>
    <td>#eaecdf</td>
    <td>#daf06a</td>
    </tr>
    <tr>
    <td>7</td>
    <td>#b8c7b8</td>
    <td>#f0fff0</td>
    <td>#fbfbf8</td>
    <td>#e5fb79</td>
    </tr>
  </tbody>
</table><?php ob_end_flush(); function compress_table($buffer) {
  $search = array("/>[[:space:]]+/", "/[[:space:]]+</");
  $replace = array(">","<");
  return preg_replace($search, $replace, $buffer);
}
?>

