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
      <td>#2a2433</td>
      <td>#8f51e6</td>
      <td>#7a7171</td>
      <td>#cf504a</td>
    </tr>
    <tr>
      <td>1</td>
      <td>#372f42</td>
      <td>#9d63ee</td>
      <td>#8d8281</td>
      <td>#d95f59</td>
    </tr>
    <tr>
      <td>2</td>
      <td>#574b68</td>
      <td>#aa75f5</td>
      <td>#9f9393</td>
      <td>#ed655e</td>
    </tr>
    <tr>
      <td>3</td>
      <td>#635775</td>
      <td>#b886fd</td>
      <td>#b0a6a6</td>
      <td>#f36f68</td>
    </tr>
    <tr>
      <td>4</td>
      <td>#706383</td>
      <td>#c7a0fe</td>
      <td>#c2b8b7</td>
      <td>#f87972</td>
    </tr>
    <tr>
      <td>5</td>
      <td>#857897</td>
      <td>#d6b9fe</td>
      <td>#d7cccb</td>
      <td>#fc8983</td>
    </tr>
    <tr>
    <td>6</td>
    <td>#9a90a7</td>
    <td>#e4d2fe</td>
    <td>#eae1e1</td>
    <td>#ff9e99</td>
    </tr>
    <tr>
    <td>7</td>
    <td>#afa7b9</td>
    <td>#f3ebff</td>
    <td>#fbf9f9</td>
    <td>#ffb6b3</td>
    </tr>
  </tbody>
</table><?php ob_end_flush(); function compress_table($buffer) {
  $search = array("/>[[:space:]]+/", "/[[:space:]]+</");
  $replace = array(">","<");
  return preg_replace($search, $replace, $buffer);
}
?>

