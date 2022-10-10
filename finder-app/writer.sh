#!/bin/sh
# Tester script for assignment 1
# Author: danielfusco00

# writer.sh writefile writestr


if [ $# -ne 2 ]; 
then
	echo "ERROR: Two parameters must be provided"
	exit 1
fi

mkdir -p $(dirname $1)  && touch $1

if [ -f $1 ]; 
then
	echo "$2" > "$1"
else
	echo "ERROR: Unable to create file"
	exit 1
fi
 

