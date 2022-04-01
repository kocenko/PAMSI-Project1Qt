#!/bin/bash

output_file=$1
letter='a'
n=$2
repeat=$3

for ((i = 1; i <= $n; i++))
do
	for ((k = 1; k <= $repeat; k++))
	do
		for ((j = 1; j <= i; j++))
		do
			printf $letter >> $output_file
		done
		printf '\n%.0s' >> $output_file
	done
done
