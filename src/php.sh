#!/bin/bash -x

# write to file
overwrite_to_file()
{

 curl "http://localhost:8000/src/index/index.php" > "../index.html"
 curl "http://localhost:8000/src/evening/index.php" > "../demo/evening/index.html"
 curl "http://localhost:8000/src/morning/index.php" > "../demo/morning/index.html"
 curl "http://localhost:8000/src/sea/index.php" > "../demo/sea/index.html"
 curl "http://localhost:8000/src/space/index.php" > "../demo/space/index.html"
 curl "http://localhost:8000/src/earth/index.php" > "../demo/earth/index.html"
 curl "http://localhost:8000/src/forest/index.php" > "../demo/forest/index.html"
 curl "http://localhost:8000/src/desert/index.php" > "../demo/desert/index.html"
 curl "http://localhost:8000/src/pool/index.php" > "../demo/pool/index.html"
 curl "http://localhost:8000/src/lake/index.php" > "../demo/lake/index.html"
 curl "http://localhost:8000/src/cave/index.php" > "../demo/cave/index.html"
 curl "http://localhost:8000/src/heath/index.php" > "../demo/heath/index.html"
 curl "http://localhost:8000/src/drawbridge/index.php" > "../demo/drawbridge/index.html"
 curl "http://localhost:8000/src/meadow/index.php" > "../demo/meadow/index.html"
 curl "http://localhost:8000/src/garden/index.php" > "../demo/garden/index.html"
 curl "http://localhost:8000/src/lavender/index.php" > "../demo/lavender/index.html"
 curl "http://localhost:8000/src/suburb/index.php" > "../demo/suburb/index.html"
 curl "http://localhost:8000/src/mall/index.php" > "../demo/mall/index.html"
 curl "http://localhost:8000/src/porch/index.php" > "../demo/porch/index.html"
 curl "http://localhost:8000/src/field/index.php" > "../demo/field/index.html"
 curl "http://localhost:8000/src/motel/index.php" > "../demo/motel/index.html"
 }

# execute it
overwrite_to_file
