#!/bin/bash
#gcc script.c -o script.exe -lcurses
#g=$?

if sudo apt-get install libncurses5-dev -y; then
	clear
	echo "libncurses5-dev (ncurses.h)"

else
	echo "Problem occurred with libncurses5-dev"

fi

sleep 5 > /dev/null

clear

if gcc script.c -o script.exe -lcurses; then
 	echo "script.c compiled for scrip.exe"
else 
 	echo "A compiler problem occurred"
fi

sleep 2 > /dev/null
