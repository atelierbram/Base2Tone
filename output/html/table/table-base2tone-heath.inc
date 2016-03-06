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
      <td>#222022</td>
      <td>#a21fad</td>
      <td>#787673</td>
      <td>#995900</td>
    </tr>
    <tr>
      <td>1</td>
      <td>#2f2d2f</td>
      <td>#845e87</td>
      <td>#8b8884</td>
      <td>#aa6709</td>
    </tr>
    <tr>
      <td>2</td>
      <td>#575158</td>
      <td>#8f6c93</td>
      <td>#9d9a95</td>
      <td>#b87414</td>
    </tr>
    <tr>
      <td>3</td>
      <td>#635f63</td>
      <td>#9a819c</td>
      <td>#aeaba7</td>
      <td>#c38022</td>
    </tr>
    <tr>
      <td>4</td>
      <td>#6f6b70</td>
      <td>#cb79d2</td>
      <td>#c1bdb9</td>
      <td>#cc8c33</td>
    </tr>
    <tr>
      <td>5</td>
      <td>#89858a</td>
      <td>#db8de2</td>
      <td>#d6d2cc</td>
      <td>#d9b98c</td>
    </tr>
    <tr>
    <td>6</td>
    <td>#9e999f</td>
    <td>#eaa8f0</td>
    <td>#eae6e1</td>
    <td>#e6c699</td>
    </tr>
    <tr>
    <td>7</td>
    <td>#b3adb3</td>
    <td>#fdebff</td>
    <td>#fbfaf9</td>
    <td>#ffd599</td>
    </tr>
  </tbody>
</table><?php ob_end_flush(); function compress_table($buffer) {
  $search = array("/>[[:space:]]+/", "/[[:space:]]+</");
  $replace = array(">","<");
  return preg_replace($search, $replace, $buffer);
}
?>

