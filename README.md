![Base2Tone](http://base2t.one/assets/img/svg/logo-infini_896x176.svg "Logo Base2Tone")

# [Base2Tone](http://base2t.one/)
2 base hues - 32 color values > 1 theme

Base2Tone is based on [DuoTone themes](http://simurai.com/projects/2016/01/01/duotone-themes) by [Simurai](http://simurai.com/) for Atom.

> “DuoTone themes use only 2 hues (7 shades in total). It __tones down__ less important parts (like punctuation and brackets) and highlights only the __important__ ones. This leads to a more calm color scheme, but still lets you find the stuff you're looking for.”

## Applications
This repository is like an umbrella over these dedicated repositories for generating syntax-highlighting themes:

- [CodeMirror](https://github.com/atelierbram/Base2Tone-codemirror)
- [Highlight.js](https://github.com/atelierbram/Base2Tone-highlight.js)
- [HyperTerm](https://github.com/atelierbram/Base2Tone-hyperterm)
- [iTerm2](https://github.com/atelierbram/Base2Tone-iterm2)
- [Markdown](https://github.com/atelierbram/Base2Tone-markdown)
- [Prism](https://github.com/atelierbram/Base2Tone-prism)
- [Sublime Text](https://github.com/atelierbram/Base2Tone-sublime-text)
- [Vim](https://github.com/atelierbram/Base2Tone-vim)

![Base2Tone](http://atelierbram.github.io/Base2Tone/assets/img/png/screenshot-prism_696x461.png "Screenshot Code Highlighting of Base2Tone Pool theme for Prism")
<br/>
Screenshot Code Syntax Highlighting with Prism and Base2Tone-Pool theme

### Dependencies
 Some customized commands from the latest fork of Base16 Builder can be found here in executable bash scripts (`cli` folder). Read more on this versatile and flexible <abbr title="Command Line Interface">CLI</abbr> building tool [on the Github repo for Base16 Builder](https://github.com/base16-builder/base16-builder), and the many ways to use it from the command-line.

Base16 Builder is available on NPM <sup>1</sup>, you can install it on your machine like so from the commandline:

```bash
$ npm install --global base16-builder
```

### Setup and Naming Convention
Each repository follows the same naming convention for the naming of the folders, [taken from Base16-Builder](https://github.com/base16-builder/base16-builder); in the `db`-folder there is `templates` and `schemes`. The `templates` folder contain the templates for generating the output of the _themes_ for the specific application: `.ejs`-files (_often called `dark.ejs` and `light.ejs`_). The Base16-Builder templating engine is informed by the color-values from a `yml`-file in the `schemes` folder to generate this specific theme (_for this specific application_) from the command-line like:

```bash
base16-builder --scheme "../db/schemes/base2tone-desert.yml" --template "../db/templates/prism/prism.scss.ejs" > "../output/prism/_prism-base2tone-desert.scss"
```

### Create your own colorscheme.
This is the hard part; although the idea is to make color-schemes from just two color-hues, there is no easy way (_at least not on this repository_) to generate colorschemes from these two color-hues, (_because I don’t believe in an automated process that takes account of the peculiarities of the human eye, in connection to the perception of color_). It will always be a manual iterative process. My process is editing the demo-tile colors for [Base2Tone-prism](https://github.com/atelierbram/Base2Tone-prism), you can see those demo-tiles on top of the pages [over here](http://atelierbram.github.io/Base2Tone-prism/demo/evening/dark/). So what I do is edit the `sass` file for those demo-tiles (_I use `HSL` and then convert those values from the browser, or a tool like [HSL Color Picker](http://hslpicker.com/) to `HEX` values_), and then manually copy and paste the new color-values over into a new `schemes/my-new-colorscheme.yml`. After that generate the `prism-my-new-colorscheme.scss` and see how the syntax-highlighting turns out on that demo-page. There are 32 color-value variables to be defined, so it will require a dedicated effort to build your own Base2Tone colorscheme. But if you do succeed in this, you will have the blueprint for generating colorthemes for these applications (_see above , and for many more applications in the future_).

Alternatively, to make this process a bit more easy going and straight forward, one can fork [this demo of Base2Tone-Prism on Codepen](http://codepen.io/atelierbram/pen/WrjVyv/).

In essence; one doesn't generate `yml` colorschemes, these are created, color-values manually copied over from a, for example, forked and adapted version of that demo on Codepen. (Tip: use the Developer Tools in your Browser to copy the HEX-color-values output from the rendered `css`). Base16-Builder’s commands are used for generating theme files for ... _anything really_, as long as you can make a template for this application.

### Conversions
The light version of the Morning theme, and dark versions of Evening, Sea, Space, Earth and Forest were converted from [DuoTone Themes for Atom](http://simurai.com/projects/2016/01/01/duotone-themes) by [Simurai](http//simurai.com). Morning and Evening are the default Duotone Light and Duotone Dark schemes, but renamed here in order to have a consistent naming convention.

### Credits
- [Simurai](http//simurai.com) for creating [DuoTone Themes](http://simurai.com/projects/2016/01/01/duotone-themes): I am merely recreating/converting these themes for other applications, while also making some variations of my own.
- [Chis Kempson](http://github.com/chriskempson) for creating [Base16 Builder](http://http://github.com/chriskempson/base16-builder)
- [Alois](https://github.com/aloisdg) and [Alex Booker](https://github.com/bookercodes) for rejuvenating the best color-theme builder tool on the internet: [Base16 Builder](https://github.com/base16-builder/base16-builder)

### License
Copyright (c) 2016 [Bram de Haan](http://atelierbramdehaan.nl/)

Released under [MIT Licence](http://atelierbram.mit-license.org)

---

#### Infini Font
[Infini](http://www.cnap.graphismeenfrance.fr/infini/en/), by [Sandrine Nugue](//www.sandrinenugue.com/), is the font being used [in the demo site](http://base2t.one). Infini is a public commission of the National Centre for Visual Arts on the occasion of “Graphisme en France 2014”. The type family is available for free under a [Creative Creative Commons Attribution-No Derivative Works 3.0 Unported](http://creativecommons.org/licenses/by-nd/3.0/)

---

1. Installing from NPM means you will also need to have Node.js installed; instructions can be found [here](https://docs.npmjs.com/getting-started/installing-node).
