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
      <td>#1b1f32</td>
      <td>#4961da</td>
      <td>#71787a</td>
      <td>#289dbd</td>
    </tr>
    <tr>
      <td>1</td>
      <td>#252a41</td>
      <td>#516aec</td>
      <td>#818b8d</td>
      <td>#33abcc</td>
    </tr>
    <tr>
      <td>2</td>
      <td>#444b6f</td>
      <td>#627af4</td>
      <td>#939c9f</td>
      <td>#4db0cb</td>
    </tr>
    <tr>
      <td>3</td>
      <td>#51587b</td>
      <td>#7289fd</td>
      <td>#a6aeb0</td>
      <td>#5cbcd6</td>
    </tr>
    <tr>
      <td>4</td>
      <td>#5e6587</td>
      <td>#8b9efd</td>
      <td>#b7c0c2</td>
      <td>#67c9e4</td>
    </tr>
    <tr>
      <td>5</td>
      <td>#797e96</td>
      <td>#a5b3fe</td>
      <td>#cbd4d7</td>
      <td>#75d5f0</td>
    </tr>
    <tr>
    <td>6</td>
    <td>#9094a7</td>
    <td>#c3cdfe</td>
    <td>#e1e8ea</td>
    <td>#86e0f9</td>
    </tr>
    <tr>
    <td>7</td>
    <td>#a6aab9</td>
    <td>#e1e6ff</td>
    <td>#f9fbfb</td>
    <td>#99e9ff</td>
    </tr>
  </tbody>
</table><?php ob_end_flush(); function compress_table($buffer) {
  $search = array("/>[[:space:]]+/", "/[[:space:]]+</");
  $replace = array(">","<");
  return preg_replace($search, $replace, $buffer);
}
?>

