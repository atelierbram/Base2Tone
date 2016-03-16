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
      <td>#1e2138</td>
      <td>#4e58b1</td>
      <td>#7a7171</td>
      <td>#cf504a</td>
    </tr>
    <tr>
      <td>1</td>
      <td>#292c47</td>
      <td>#5a63b5</td>
      <td>#8d8281</td>
      <td>#d95f59</td>
    </tr>
    <tr>
      <td>2</td>
      <td>#44486f</td>
      <td>#656eb8</td>
      <td>#9f9393</td>
      <td>#ed655e</td>
    </tr>
    <tr>
      <td>3</td>
      <td>#51557b</td>
      <td>#7178bc</td>
      <td>#b0a6a6</td>
      <td>#f36f68</td>
    </tr>
    <tr>
      <td>4</td>
      <td>#5e6287</td>
      <td>#979dd3</td>
      <td>#c2b8b7</td>
      <td>#f87972</td>
    </tr>
    <tr>
      <td>5</td>
      <td>#7e7996</td>
      <td>#bcc1e6</td>
      <td>#d7cccb</td>
      <td>#fc847e</td>
    </tr>
    <tr>
    <td>6</td>
    <td>#9490a7</td>
    <td>#d1d4f0</td>
    <td>#eae1e1</td>
    <td>#ff908a</td>
    </tr>
    <tr>
    <td>7</td>
    <td>#aaa6b9</td>
    <td>#e1e4ff</td>
    <td>#fbf9f9</td>
    <td>#ff9e99</td>
    </tr>
  </tbody>
</table><?php ob_end_flush(); function compress_table($buffer) {
  $search = array("/>[[:space:]]+/", "/[[:space:]]+</");
  $replace = array(">","<");
  return preg_replace($search, $replace, $buffer);
}
?>

