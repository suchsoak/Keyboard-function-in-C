# Keyboard-function-in-C

> Change the function of a keyboard key to perform the function you want.

# The script is under development, it will be for both linux and windows users.


# | Linux |
> Keep in mind that you need the gcc compiler.

### By default is the **F2** key to run firefox. But, you can change inside the file, inside the **system** put the command you want.

## Download the file, run either in the terminal using the gcc compiler or just ticking in the file.
## If you wanted the command to run when you start the system:

### Using the file **/etc/rc.local**: Open the terminal. Type the following command to edit the file **/etc/rc.local**: Bash sudo nano/etc/rc.local Add the command or path to your C script above the 0 output line. Save the file by pressing Ctrl+O** and press Enter. Close the editor by pressing **Ctrl+X**. Your script will now run at system startup.

<hr>

# | Windows |
> Keep in mind that you need the gcc compiler.

### By default is the **F2** key to run firefox. But, you can change inside the file, inside the **system** put the command you want.

### And the script will run,

## Download the file, run either in the terminal using the gcc compiler or just ticking in the file.
## If you wanted the command to run when you start the system:

#### Press **windows+R** and then put: 'shell:startup' (without quotation maks)

### Place the **script.c** inside the folder and now, after starting the system.

<hr>

| Libraries |  Links |
| ------ | ------ |
| ncurses | https://terminalroot.com.br/ncurses/
| stdio.h | https://petbcc.ufscar.br/stdio/
| stdlib.h | https://petbcc.ufscar.br/stdlib/

