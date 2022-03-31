#!/bin/bash

input_file=$1
output_file=$2

while read line; do
echo "$line ${#line}" >> $output_file
done < $input_file
