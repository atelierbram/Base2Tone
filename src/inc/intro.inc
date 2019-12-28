<?php ?><div class="content has-themes-hidden" id="content">
  <div class="row note">
  <section class="applications">
  <h3>Applications</h3>
  <p>Dedicated repositories for generating syntax-highlighting themes:</p>
    <ul class="list-bullets fs-larger">
      <li><a href="https://github.com/atelierbram/Base2Tone-codemirror">CodeMirror</a></li>
      <li><a href="https://github.com/atelierbram/Base2Tone-highlight.js">Highlight.js</a></li>
      <li><a href="https://github.com/atelierbram/Base2Tone-hyperterm">HyperTerm</a></li>
      <li><a href="https://github.com/atelierbram/Base2Tone-iterm2">iTerm2</a></li>
      <li><a href="https://github.com/atelierbram/Base2Tone-alacritty">Alacritty</a></li>
      <li><a href="https://github.com/llimllib/Base2Tone-mate">mate-terminal</a></li>
      <li><a href="https://github.com/atelierbram/Base2Tone-terminal">Terminal <small>(Mac OS X)</small></a></li>
      <li><a href="https://github.com/atelierbram/Base2Tone-markdown">Markdown (color-value tables)</a></li>
      <li><a href="https://github.com/atelierbram/Base2Tone-prism">Prism</a></li>
      <li><a href="https://github.com/atelierbram/Base2Tone-sublime-text">Sublime Text (and Textmate)</a></li>
      <li><a href="https://github.com/atelierbram/Base2Tone-vim">Vim</a></li>
      <li><a href="https://github.com/atelierbram/Base2Tone-VSCode-Themes">Visual Studio Code</a></li>
      <li><a href="https://github.com/atelierbram/Base2Tone-xrdb">XRDB</a></li>
    </ul>
<p>For Visual Studio Code Marketplace: <a href="https://marketplace.visualstudio.com/items?itemName=Atelierbram.base2tone-vscode-themes">marketplace.visualstudio.com/items?itemName=Atelierbram.base2tone-vscode-themes</a></p>
  </section>
</div>
  <div class="row row-intro">
    <div class="section-text">
      <p class="intro"><span class="dropcap dropcap-b">B</span>ase2Tone colorschemes are created from two base hues, into (32) values with different saturation and lightness levels. Base2Tone is based on <a href="http://simurai.com/projects/2016/01/01/duotone-themes">DuoTone themes</a> by <a href="http://simurai.com/">Simurai</a> for Atom:</p>

      <blockquote class="quote"><p>&hellip; It <strong>tones down</strong> less important parts (like punctuation and brackets) and highlights only the <strong>important</strong> ones. This leads to a more calm color scheme, but still lets you find the stuff you’re looking for.</p></blockquote>
    </div>

    <div class="section-text">
      <h3>Dependencies</h3>
      <p>Colorschemes are generated with the help of <a href="https://github.com/base16-builder/base16-builder">Base16 Builder</a></p>

<p>An example command to generate a scss Sass file for Prism, from the template for prism-scss in the "Evening" colorscheme:</p>
<pre class="language-bash"><code class="language-bash" data-language="bash">$ base16-builder --scheme db/schemes/base2tone-evening.yml --template db/templates/scss-prism/prism.scss.ejs &gt; output/prism/_prism-base2tone-evening.scss</code></pre>

      <p class="_mtl _mbl">Some customized commands from the latest fork of Base16 Builder can be found here in executable bash scripts (<code>cli/io.sh</code>). Read more on this versatile and flexible <abbr title="Command Line Interface">CLI</abbr> building tool <a href="https://github.com/base16-builder/base16-builder">on the Github repo for Base16 Builder</a>, and the many ways to use it from the command-line.</p>
    </div>

    <div class="section-text">
      <h3>Installation</h3>
      <p>Base16 Builder is available on NPM<sup><a href="#footnote-1">[1]</a></sup>, you can install it on your machine like so from the commandline:</p>

      <pre class="language-bash"><code class="language-bash" data-language="bash">$ npm install --global base16-builder</code></pre>
    </div>

    <p id="footnote-1" class="_mtl">1. Installing from NPM means you will also need to have Node.js installed; instructions can be found <a href="https://docs.npmjs.com/getting-started/installing-node">here</a>.</p>
  </div>
<?php ?>
