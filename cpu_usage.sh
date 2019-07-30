#!/bin/bash

while :
do
	cat /proc/cpuinfo | grep "MHz"
	sleep 1
	printf "#####################\n"
done