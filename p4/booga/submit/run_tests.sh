#!/bin/bash
# Test for race conditions

echo
echo
cat /proc/driver/booga
echo
echo

for i in  1 2 3 4 5 6 7 8 9 10
do
./test-booga 0 512 r  >& /dev/null &
./test-booga 0 512 w >& /dev/null &
./test-booga 1 512 r >& /dev/null  &
./test-booga 1 512 w >& /dev/null &
./test-booga 2 512 r >& /dev/null  &
./test-booga 2 512 w >& /dev/null &
./test-booga 3 512 r  >& /dev/null &
./test-booga 3 512 w >& /dev/null &
done

wait

echo
echo
cat /proc/driver/booga
echo
echo
