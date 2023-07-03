#!/bin/bash

gcc script.c -o script.exe -lcurses

g=$?

if [ $g -eq 0 ]
then
 	echo "script.c compiled for scrip.exe"
else 
 	echo "A compiler problem occurred"
fi
