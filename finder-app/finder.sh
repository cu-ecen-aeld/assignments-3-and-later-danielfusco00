#!/bin/sh
# Tester script for assignment 1
# Author: danielfusco00

# finder.sh filesdir searchstr


if [ $# -ne 2 ]; 
then
	echo "ERROR: Two parameters must be provided"
	exit 1
fi
	
if [ -d $1 ]; 
then
	echo "The number of files are $(find "$1" -type f | wc -l) and the number of matching lines are $(grep -r "$2" "$1" | wc -l)"
else
	echo "ERROR: The path provided does not represent a directory on the filesystem"
	exit 1
fi

