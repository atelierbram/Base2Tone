#!/bin/bash -x

# write to file
overwrite_to_file()
{
  base16-builder --scheme "../db/schemes/base2tone-evening.yml" --template "../db/templates/prism/prism.scss.ejs" > "../output/prism/_prism-base2tone-evening.scss"
  base16-builder --scheme "../db/schemes/base2tone-morning.yml" --template "../db/templates/prism/prism.scss.ejs" > "../output/prism/_prism-base2tone-morning.scss"
  base16-builder --scheme "../db/schemes/base2tone-space.yml" --template "../db/templates/prism/prism.scss.ejs" > "../output/prism/_prism-base2tone-space.scss"
  base16-builder --scheme "../db/schemes/base2tone-sea.yml" --template "../db/templates/prism/prism.scss.ejs" > "../output/prism/_prism-base2tone-sea.scss"
  base16-builder --scheme "../db/schemes/base2tone-forest.yml" --template "../db/templates/prism/prism.scss.ejs" > "../output/prism/_prism-base2tone-forest.scss"
  base16-builder --scheme "../db/schemes/base2tone-earth.yml" --template "../db/templates/prism/prism.scss.ejs" > "../output/prism/_prism-base2tone-earth.scss"
  base16-builder --scheme "../db/schemes/base2tone-desert.yml" --template "../db/templates/prism/prism.scss.ejs" > "../output/prism/_prism-base2tone-desert.scss"
  base16-builder --scheme "../db/schemes/base2tone-pool.yml" --template "../db/templates/prism/prism.scss.ejs" > "../output/prism/_prism-base2tone-pool.scss"
  base16-builder --scheme "../db/schemes/base2tone-lake.yml" --template "../db/templates/prism/prism.scss.ejs" > "../output/prism/_prism-base2tone-lake.scss"
  base16-builder --scheme "../db/schemes/base2tone-cave.yml" --template "../db/templates/prism/prism.scss.ejs" > "../output/prism/_prism-base2tone-cave.scss"
  base16-builder --scheme "../db/schemes/base2tone-heath.yml" --template "../db/templates/prism/prism.scss.ejs" > "../output/prism/_prism-base2tone-heath.scss"
 }

# execute it
overwrite_to_file
