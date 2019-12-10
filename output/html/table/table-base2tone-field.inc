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
      <td>#18201e</td>
      <td>#037764</td>
      <td>#68736d</td>
      <td>#00943e</td>
    </tr>
    <tr>
      <td>1</td>
      <td>#242e2c</td>
      <td>#089b83</td>
      <td>#78877e</td>
      <td>#0eaa4f</td>
    </tr>
    <tr>
      <td>2</td>
      <td>#42524f</td>
      <td>#0fbda0</td>
      <td>#8a9990</td>
      <td>#15c15d</td>
    </tr>
    <tr>
      <td>3</td>
      <td>#5a6d6a</td>
      <td>#25d0b4</td>
      <td>#9daaa2</td>
      <td>#25d46e</td>
    </tr>
    <tr>
      <td>4</td>
      <td>#667a77</td>
      <td>#40ddc3</td>
      <td>#aebcb4</td>
      <td>#3be381</td>
    </tr>
    <tr>
      <td>5</td>
      <td>#78918d</td>
      <td>#65e6d1</td>
      <td>#c7d1cb</td>
      <td>#55ec94</td>
    </tr>
    <tr>
    <td>6</td>
    <td>#8ea4a0</td>
    <td>#88f2e0</td>
    <td>#e3e8e5</td>
    <td>#69f7a4</td>
    </tr>
    <tr>
    <td>7</td>
    <td>#a4b7b4</td>
    <td>#a8fff1</td>
    <td>#f9fbfa</td>
    <td>#85ffb8</td>
    </tr>
  </tbody>
</table><?php ob_end_flush(); function compress_table($buffer) {
  $search = array("/>[[:space:]]+/", "/[[:space:]]+</");
  $replace = array(">","<");
  return preg_replace($search, $replace, $buffer);
}
?>

