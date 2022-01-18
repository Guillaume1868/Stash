#call test.sh for each lines
<file2 xargs -n5 ./test.sh > file3
#removes bugged lines of gen.c
cat file | grep  "0.*0" > file2   
