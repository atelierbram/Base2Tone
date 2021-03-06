#!/bin/bash -x

# write to file
overwrite_to_file()
{
  base16-builder --scheme "../db/schemes/base2tone-evening.yml" --template "../db/templates/html/table/table.html.ejs" > "../output/html/table/table-base2tone-evening.inc"
  base16-builder --scheme "../db/schemes/base2tone-morning.yml" --template "../db/templates/html/table/table.html.ejs" > "../output/html/table/table-base2tone-morning.inc"
  base16-builder --scheme "../db/schemes/base2tone-space.yml" --template "../db/templates/html/table/table.html.ejs" > "../output/html/table/table-base2tone-space.inc"
  base16-builder --scheme "../db/schemes/base2tone-sea.yml" --template "../db/templates/html/table/table.html.ejs" > "../output/html/table/table-base2tone-sea.inc"
  base16-builder --scheme "../db/schemes/base2tone-forest.yml" --template "../db/templates/html/table/table.html.ejs" > "../output/html/table/table-base2tone-forest.inc"
  base16-builder --scheme "../db/schemes/base2tone-earth.yml" --template "../db/templates/html/table/table.html.ejs" > "../output/html/table/table-base2tone-earth.inc"
  base16-builder --scheme "../db/schemes/base2tone-desert.yml" --template "../db/templates/html/table/table.html.ejs" > "../output/html/table/table-base2tone-desert.inc"
  base16-builder --scheme "../db/schemes/base2tone-pool.yml" --template "../db/templates/html/table/table.html.ejs" > "../output/html/table/table-base2tone-pool.inc"
  base16-builder --scheme "../db/schemes/base2tone-suburb.yml" --template "../db/templates/html/table/table.html.ejs" > "../output/html/table/table-base2tone-suburb.inc"
  base16-builder --scheme "../db/schemes/base2tone-lake.yml" --template "../db/templates/html/table/table.html.ejs" > "../output/html/table/table-base2tone-lake.inc"
  base16-builder --scheme "../db/schemes/base2tone-cave.yml" --template "../db/templates/html/table/table.html.ejs" > "../output/html/table/table-base2tone-cave.inc"
  base16-builder --scheme "../db/schemes/base2tone-heath.yml" --template "../db/templates/html/table/table.html.ejs" > "../output/html/table/table-base2tone-heath.inc"
  base16-builder --scheme "../db/schemes/base2tone-drawbridge.yml" --template "../db/templates/html/table/table.html.ejs" > "../output/html/table/table-base2tone-drawbridge.inc"
  base16-builder --scheme "../db/schemes/base2tone-meadow.yml" --template "../db/templates/html/table/table.html.ejs" > "../output/html/table/table-base2tone-meadow.inc"
  base16-builder --scheme "../db/schemes/base2tone-garden.yml" --template "../db/templates/html/table/table.html.ejs" > "../output/html/table/table-base2tone-garden.inc"
  base16-builder --scheme "../db/schemes/base2tone-lavender.yml" --template "../db/templates/html/table/table.html.ejs" > "../output/html/table/table-base2tone-lavender.inc"
  base16-builder --scheme "../db/schemes/base2tone-mall.yml" --template "../db/templates/html/table/table.html.ejs" > "../output/html/table/table-base2tone-mall.inc"
  base16-builder --scheme "../db/schemes/base2tone-porch.yml" --template "../db/templates/html/table/table.html.ejs" > "../output/html/table/table-base2tone-porch.inc"
  base16-builder --scheme "../db/schemes/base2tone-field.yml" --template "../db/templates/html/table/table.html.ejs" > "../output/html/table/table-base2tone-field.inc"
  base16-builder --scheme "../db/schemes/base2tone-motel.yml" --template "../db/templates/html/table/table.html.ejs" > "../output/html/table/table-base2tone-motel.inc"
 }

# execute it
overwrite_to_file
