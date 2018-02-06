#!/bin/sh

#  ridge_parallel.sh
#  
#
#  Created by Anthony Badea on 1/18/18.
#  
#how to run ./ridge.sh inFileName outFileName fileEvents
#!/bin/bash

inFileList=$1
outFileName=$2

i=0
while read line
do
    root -b -q ridge_check_parallel.c\(\"$line\",\"out_$i\"\) &
    let i=i+1
done <$inFileList
wait

# hadd the files together
hadd -f $outFileName.root out_*.root
# delete the smaller files
rm -r out_*.root
