#!/bin/bash -x

# write to file
overwrite_to_file()
{
  base16-builder --scheme "../db/schemes/base2tone-mall.yml" --template "../db/templates/prism/prism-alt.scss.ejs" > "../output/prism/_prism-base2tone-mall.scss"
  base16-builder --scheme "../db/schemes/base2tone-mall.yml" --template "../db/templates/svg/interior.svg.ejs" > "../output/svg/interior-base2tone-mall.svg.inc"
  base16-builder --scheme "../db/schemes/base2tone-mall.yml" --template "../db/templates/html/table/table.html.ejs" > "../output/html/table/table-base2tone-mall.inc"
}

# execute it
overwrite_to_file
