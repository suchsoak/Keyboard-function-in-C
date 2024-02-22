# Keyboard-function-in-C

**Change the function of a keyboard key to perform the function you want.**

>[!NOTE]
>Or you can use the scripts separately
>If you don't garen use the keyboard use for exemplo fn+f2

By default is the `F2` key to run firefox. But, you can change inside the file, inside the `system` put the command you want.

Download the file, run either in the terminal using the gcc compiler or just ticking in the file.

```sh
   gcc key.c -o key.exe -lcurses
```

```sh
    ./key.exe
```

`or use Makefile`

```sh
    make
```

| Libraries |  Links |
| ------ | ------ |
| ncurses | https://terminalroot.com.br/ncurses/
| stdio.h | https://petbcc.ufscar.br/stdio/
| stdlib.h | https://petbcc.ufscar.br/stdlib/

```sh

KEY_BACKSPACE: the backspace key
KEY_DC: the delete key
KEY_END: the end key
KEY_IC: the insert key
KEY_LEFT: the left arrow key
KEY_NPAGE: the page down key
KEY_PPAGE: the page up key
KEY_RESIZE: an event that occurs when the terminal window is resized
KEY_RIGHT: the right arrow key
KEY_UP: the up arrow key
KEY_HOME: This key is used to move the cursor to the beginning of a line or document.
KEY_FIND: This key is used to initiate a search or find operation.
KEY_HELP: This key is used to access help or get assistance.
KEY_EXIT: This key is used to exit or close a program or application.
KEY_BREAK: This key is used to send a break signal or interrupt a process.
KEY_F(n): These keys represent function keys, where "n" is a number from 0 to 12 or more, depending on the keyboard.

```

