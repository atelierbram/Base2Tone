#!/bin/bash -x

# write to file
overwrite_to_file()
{

 curl "http://localhost/~bram/github.com/atelierbram/Base2Tone/src/index.php" > "../index.html"
 curl "http://localhost/~bram/github.com/atelierbram/Base2Tone/src/evening/index.php" > "../demo/evening/index.html"
 curl "http://localhost/~bram/github.com/atelierbram/Base2Tone/src/morning/index.php" > "../demo/morning/index.html"
 curl "http://localhost/~bram/github.com/atelierbram/Base2Tone/src/sea/index.php" > "../demo/sea/index.html"
 curl "http://localhost/~bram/github.com/atelierbram/Base2Tone/src/space/index.php" > "../demo/space/index.html"
 curl "http://localhost/~bram/github.com/atelierbram/Base2Tone/src/earth/index.php" > "../demo/earth/index.html"
 curl "http://localhost/~bram/github.com/atelierbram/Base2Tone/src/forest/index.php" > "../demo/forest/index.html"
 curl "http://localhost/~bram/github.com/atelierbram/Base2Tone/src/desert/index.php" > "../demo/desert/index.html"
 curl "http://localhost/~bram/github.com/atelierbram/Base2Tone/src/pool/index.php" > "../demo/pool/index.html"
 curl "http://localhost/~bram/github.com/atelierbram/Base2Tone/src/lake/index.php" > "../demo/lake/index.html"
 curl "http://localhost/~bram/github.com/atelierbram/Base2Tone/src/cave/index.php" > "../demo/cave/index.html"
 curl "http://localhost/~bram/github.com/atelierbram/Base2Tone/src/heath/index.php" > "../demo/heath/index.html"
 }

# execute it
overwrite_to_file
