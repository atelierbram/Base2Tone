![Base2Tone](http://atelierbram.github.io/Base2Tone/assets/img/svg/logo_896x176.svg "Logo Base2Tone")
<h1 style="display:none">Base2Tone</h1>
2 base hues - 32 variations > 1 theme

## Color Scheming
Make colorschemes from two base colors; for example color variables in webdevelopment; as a foundation for the colors of your website.

![Base2Tone](http://atelierbram.github.io/Base2Tone/assets/img/png/screenshot-prism_810x530.png "Screenshot Code Highlighting of Base2Tone Pool theme for Prism")
Screenshot Code Highlighting of Base2Tone Pool theme for Prism

Base2Tone is based on <a href="http://simurai.com/projects/2016/01/01/duotone-themes">DuoTone themes</a> by <a href="http://simurai.com/">Simurai</a> for Atom.

> It <strong>tones down</strong> less important parts (like punctuation and brackets) and highlights only the <strong>important</strong> ones. This leads to a more calm color scheme, but still lets you find the stuff you’re looking for.

Generate syntax-highlighting colorschemes with color variations from 2 colors with Base2Tone (TODO: _for many applications_):

[Prism](https://github.com/atelierbram/Base2Tone-prism)

### Dependencies
 Some customized commands from the latest fork of Base16 Builder can be found here in an executable bash script (`io.sh`). Read more on this versatile and flexible <abbr title="Command Line Interface">CLI</abbr> building tool [on the Github repo for Base16 Builder](https://github.com/base16-builder/base16-builder), and the many ways to use it from the command-line.

Base16 Builder is available on NPM<sup>[1]</sup>, you can install it on your machine like so from the commandline:

```
$ npm install --global base16-builder
```

### Create your own colorscheme.
The schemes and templates used can be found in the `db` folder, from other repos here on Github, for example [Base2Tone-prism](https://github.com/atelierbram/Base2Tone-prism). Copy and edit one of them `schemes/colorschemes.yml` from 32 color-value variables, (_maybe start by editing the demo-tile colors in the demo_) and build your own Base2Tone Prism theme. Make a pull request if you would like to see it here in amongst these colorschemes. More conversions for other applications will follow, [see also here](http://atelierbram.github.io/syntax-highlighting/duotones/).

### Conversions
The light version of the Morning theme, and dark versions of Evening, Sea, Space, Earth and Forest were converted from [DuoTone Themes for Atom](http://simurai.com/projects/2016/01/01/duotone-themes) by [Simurai](http//simurai.com). Morning and Evening are the default Duotone Light and Duotone Dark schemes, but renamed here in order to have a consistent naming convention.

### Credits
- [Simurai](http//simurai.com) for creating [DuoTone Themes](http://simurai.com/projects/2016/01/01/duotone-themes): I am merely recreating/converting these themes for other applications, while also making some variations of my own.
- [Chis Kempson](http://github.com/chriskempson) for creating [Base16 Builder](http://http://github.com/chriskempson/base16-builder)
- [Alois](https://github.com/aloisdg) and [Alex Booker](https://github.com/alexbooker) for rejuvenating the best colorscheme builder tool on the internet: [Base16 Builder](https://github.com/base16-builder/base16-builder)

### License
Copyright (c) 2016 [Bram de Haan](http://atelierbramdehaan.nl/)

Released under [MIT Licence](http://atelierbram.mit-license.org)

---

#### Overpass Font
Copyright 2015 Red Hat, Inc.,
This Font Software is dual licensed and available under the SIL Open Font License, Version 1.1. and also the LGPL 2.1

The Open Font license [can be found here](https://github.com/RedHatBrand/overpass/blob/master/LICENSE.md), and is also available with a [FAQ](http://scripts.sil.org/OFL)

The GNU LGPL can be found at [http://www.gnu.org/licenses/old-licenses/lgpl-2.1.en.html]

#### SIL OPEN FONT LICENSE
Version 1.1 - 26 February 2007

---

1. Installing from NPM means you will also need to have Node.js installed; instructions can be found [here](https://docs.npmjs.com/getting-started/installing-node).
