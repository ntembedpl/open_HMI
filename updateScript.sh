#!/bin/bash

path=$1

if [ -z "$path" ]
then
	echo "Path is empty"
else
	cd ..
	cp -r -v ./open_HMI $1
fi
