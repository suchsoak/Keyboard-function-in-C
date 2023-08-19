# Keyboard-function-in-C

> Change the function of a keyboard key to perform the function you want.

The script is under development, it will be for both linux and windows users.

> **If you don't garen use the keyboard use for exemplo fn+f2**


# | Linux |
> Keep in mind that you need the gcc compiler.

By default is the **F2** key to run firefox. But, you can change inside the file, inside the **system** put the command you want.

Download the file, run either in the terminal using the gcc compiler or just ticking in the file.

In the terminal linux:

```sh
   chmod +x ncurses.sh
```

```sh
    bash ./ncurses.sh
```

```sh
    ./script.exe
```

<br>

> If you wanted the command to run when you start the system:

> Using the file **/etc/rc.local**: Open the terminal. Type the following command to edit the file **/etc/rc.local**: Bash sudo nano/etc/rc.local Add the command or path to your C script above the 0 output line. Save the file by pressing Ctrl+O and press Enter. Close the editor by pressing **Ctrl+X**. Your script will now run at system startup.

<hr>

# | Windows |
> Keep in mind that you need the gcc compiler.

By default is the **F2** key to run firefox. But, you can change inside the file, inside the **system** put the command you want.

But you can change 

where it has: **KEY_HOME** just need to know which key command you want

```sh
     while (TRUE)
    {
        COLOR_RED;
        if ( ch == KEY_HOME){
            system("firefox https://github.com/suchsoak");
            break;   
        }
```

### In the terminal Windows (CMD | Powershell):

```sh
   gcc script.c -o script
```

```sh
    ./"script" or ./"script.exe" 
```

## Download the file, run either in the terminal using the gcc compiler or just ticking in the file.

> If you wanted the command to run when you start the system:

> Press **windows+R** and then put: 'shell:startup' (without quotation maks);

> Place the **script.c** and **script.exe** inside the folder and now, after starting the system.

<hr>

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
```

