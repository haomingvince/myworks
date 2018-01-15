#！ /bin/bash

A=(foo bar baz)
A[5]=cosby
A[10]=jello

echo "Test 1     ${A[*]}"
for item in ${A[*]}
do
echo $item
done
echo ""

echo "Test 2     ${!A[*]}"
for item in ${!A[*]}
do
echo ${A[$item]}
done
echo ""

echo "Test 3     ${#A[*]}"
for ((I = 0; I < ${#A[*]}; I++))
do
echo ${A[$I]}
done

exit 0
