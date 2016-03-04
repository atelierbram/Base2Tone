<?php ob_start('compress_tiles'); ?>
        <section id="demoTiles" class="demo-tiles collapsed">
          <div class="unit bg-baseA0 shade-original w-1v3"><span>A0</span></div>
          <div class="unit bg-baseA1 shade-added hidden"><span>A1</span></div>
          <div class="unit bg-baseA2 shade-original w-1v3"><span>A2</span></div>
          <div class="unit bg-baseA3 shade-added hidden"><span>A3</span></div>
          <div class="unit bg-baseA4 shade-added hidden"><span>A4</span></div>
          <div class="unit bg-baseA5 shade-added hidden"><span>A5</span></div>
          <div class="unit bg-baseA6 shade-added hidden"><span>A6</span></div>
          <div class="unit bg-baseA7 shade-original w-1v3"><span>A7</span></div>

          <div class="unit bg-baseB0 shade-original w-1v3"><span>B0</span></div>
          <div class="unit bg-baseB1 shade-added hidden"><span>B1</span></div>
          <div class="unit bg-baseB2 shade-original w-1v3"><span>B2</span></div>
          <div class="unit bg-baseB3 shade-added hidden"><span>B3</span></div>
          <div class="unit bg-baseB4 shade-added hidden"><span>B4</span></div>
          <div class="unit bg-baseB5 shade-added hidden"><span>B5</span></div>
          <div class="unit bg-baseB6 shade-added hidden"><span>B6</span></div>
          <div class="unit bg-baseB7 shade-original w-1v3"><span>B7</span></div>

          <div class="unit bg-baseC0 shade-original w-1v3"><span>C0</span></div>
          <div class="unit bg-baseC1 shade-added hidden"><span>C1</span></div>
          <div class="unit bg-baseC2 shade-original w-1v3"><span>C2</span></div>
          <div class="unit bg-baseC3 shade-added hidden"><span>C3</span></div>
          <div class="unit bg-baseC4 shade-added hidden"><span>C4</span></div>
          <div class="unit bg-baseC5 shade-added hidden"><span>C5</span></div>
          <div class="unit bg-baseC6 shade-added hidden"><span>C6</span></div>
          <div class="unit bg-baseC7 shade-original w-1v3"><span>C7</span></div>

          <div class="unit bg-baseD0 shade-original w-1v3"><span>D0</span></div>
          <div class="unit bg-baseD1 shade-added hidden"><span>D1</span></div>
          <div class="unit bg-baseD2 shade-original w-1v3"><span>D2</span></div>
          <div class="unit bg-baseD3 shade-added hidden"><span>D3</span></div>
          <div class="unit bg-baseD4 shade-added hidden"><span>D4</span></div>
          <div class="unit bg-baseD5 shade-added hidden"><span>D5</span></div>
          <div class="unit bg-baseD6 shade-added hidden"><span>D6</span></div>
          <div class="unit bg-baseD7 shade-original w-1v3"><span>D7</span></div>
        </section>
<?php ob_end_flush(); function compress_tiles($buffer) {
  $search = array("/>[[:space:]]+/", "/[[:space:]]+</");
  $replace = array(">","<");
  return preg_replace($search, $replace, $buffer);
}
?>
