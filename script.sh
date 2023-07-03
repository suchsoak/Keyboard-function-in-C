#!/bin/bash

gcc script.c -o script.exe -lcurses

g=$?

if [ $g -eq 0 ]
then
 	echo "script.c compilado para scrip.exe"
else 
 	echo "Ocorreu um problema no compilador"
fi
