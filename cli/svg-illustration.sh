#!/bin/bash -x

# write to file
overwrite_to_file()
{
  base16-builder --scheme "../db/schemes/base2tone-evening.yml" --template "../db/templates/svg/interior.svg.ejs" > "../output/svg/interior-base2tone-evening.svg.inc"
  base16-builder --scheme "../db/schemes/base2tone-morning.yml" --template "../db/templates/svg/interior.svg.ejs" > "../output/svg/interior-base2tone-morning.svg.inc"
  base16-builder --scheme "../db/schemes/base2tone-space.yml" --template "../db/templates/svg/interior.svg.ejs" > "../output/svg/interior-base2tone-space.svg.inc"
  base16-builder --scheme "../db/schemes/base2tone-sea.yml" --template "../db/templates/svg/interior.svg.ejs" > "../output/svg/interior-base2tone-sea.svg.inc"
  base16-builder --scheme "../db/schemes/base2tone-forest.yml" --template "../db/templates/svg/interior.svg.ejs" > "../output/svg/interior-base2tone-forest.svg.inc"
  base16-builder --scheme "../db/schemes/base2tone-earth.yml" --template "../db/templates/svg/interior.svg.ejs" > "../output/svg/interior-base2tone-earth.svg.inc"
  base16-builder --scheme "../db/schemes/base2tone-desert.yml" --template "../db/templates/svg/interior.svg.ejs" > "../output/svg/interior-base2tone-desert.svg.inc"
  base16-builder --scheme "../db/schemes/base2tone-pool.yml" --template "../db/templates/svg/interior.svg.ejs" > "../output/svg/interior-base2tone-pool.svg.inc"
  base16-builder --scheme "../db/schemes/base2tone-suburb.yml" --template "../db/templates/svg/interior.svg.ejs" > "../output/svg/interior-base2tone-suburb.svg.inc"
  base16-builder --scheme "../db/schemes/base2tone-lake.yml" --template "../db/templates/svg/interior.svg.ejs" > "../output/svg/interior-base2tone-lake.svg.inc"
  base16-builder --scheme "../db/schemes/base2tone-cave.yml" --template "../db/templates/svg/interior.svg.ejs" > "../output/svg/interior-base2tone-cave.svg.inc"
  base16-builder --scheme "../db/schemes/base2tone-heath.yml" --template "../db/templates/svg/interior.svg.ejs" > "../output/svg/interior-base2tone-heath.svg.inc"
  base16-builder --scheme "../db/schemes/base2tone-drawbridge.yml" --template "../db/templates/svg/interior.svg.ejs" > "../output/svg/interior-base2tone-drawbridge.svg.inc"
  base16-builder --scheme "../db/schemes/base2tone-meadow.yml" --template "../db/templates/svg/interior.svg.ejs" > "../output/svg/interior-base2tone-meadow.svg.inc"
  base16-builder --scheme "../db/schemes/base2tone-garden.yml" --template "../db/templates/svg/interior.svg.ejs" > "../output/svg/interior-base2tone-garden.svg.inc"
  base16-builder --scheme "../db/schemes/base2tone-lavender.yml" --template "../db/templates/svg/interior.svg.ejs" > "../output/svg/interior-base2tone-lavender.svg.inc"
 }

# execute it
overwrite_to_file
