#!/bin/bash
#gcc script.c -o script.exe -lcurses
#g=$?


if gcc script.c -o script.exe -lcurses; then
 	echo "script.c compiled for scrip.exe"
else 
 	echo "A compiler problem occurred"
fi
