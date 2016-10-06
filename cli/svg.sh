#!/bin/bash -x

# write to file
overwrite_to_file()
{
  base16-builder --scheme "../db/schemes/base2tone-evening.yml" --template "../db/templates/svg/circles-target.svg.ejs" > "../output/svg/circles-base2tone-evening.svg.inc"
  base16-builder --scheme "../db/schemes/base2tone-morning.yml" --template "../db/templates/svg/circles-target.svg.ejs" > "../output/svg/circles-base2tone-morning.svg.inc"
  base16-builder --scheme "../db/schemes/base2tone-space.yml" --template "../db/templates/svg/circles-target.svg.ejs" > "../output/svg/circles-base2tone-space.svg.inc"
  base16-builder --scheme "../db/schemes/base2tone-sea.yml" --template "../db/templates/svg/circles-target.svg.ejs" > "../output/svg/circles-base2tone-sea.svg.inc"
  base16-builder --scheme "../db/schemes/base2tone-forest.yml" --template "../db/templates/svg/circles-target.svg.ejs" > "../output/svg/circles-base2tone-forest.svg.inc"
  base16-builder --scheme "../db/schemes/base2tone-earth.yml" --template "../db/templates/svg/circles-target.svg.ejs" > "../output/svg/circles-base2tone-earth.svg.inc"
  base16-builder --scheme "../db/schemes/base2tone-desert.yml" --template "../db/templates/svg/circles-target.svg.ejs" > "../output/svg/circles-base2tone-desert.svg.inc"
  base16-builder --scheme "../db/schemes/base2tone-pool.yml" --template "../db/templates/svg/circles-target.svg.ejs" > "../output/svg/circles-base2tone-pool.svg.inc"
  base16-builder --scheme "../db/schemes/base2tone-lake.yml" --template "../db/templates/svg/circles-target.svg.ejs" > "../output/svg/circles-base2tone-lake.svg.inc"
  base16-builder --scheme "../db/schemes/base2tone-cave.yml" --template "../db/templates/svg/circles-target.svg.ejs" > "../output/svg/circles-base2tone-cave.svg.inc"
  base16-builder --scheme "../db/schemes/base2tone-heath.yml" --template "../db/templates/svg/circles-target.svg.ejs" > "../output/svg/circles-base2tone-heath.svg.inc"
  base16-builder --scheme "../db/schemes/base2tone-drawbridge.yml" --template "../db/templates/svg/circles-target.svg.ejs" > "../output/svg/circles-base2tone-drawbridge.svg.inc"
  base16-builder --scheme "../db/schemes/base2tone-meadow.yml" --template "../db/templates/svg/circles-target.svg.ejs" > "../output/svg/circles-base2tone-meadow.svg.inc"
 }

# execute it
overwrite_to_file
