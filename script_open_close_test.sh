#!/bin/bash

time=0
for i in {1..50000};
do 
	time_local=$(./open_close_test)
	time=$(echo $time $time_local | awk '{print $1 + $2}')
done

printf "Total execution time: $time seconds.\n"

