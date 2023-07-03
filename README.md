# Keyboard-function-in-C

> Change the function of a keyboard key to perform the function you want.

# The script is under development, it will be for both linux and windows users.


# | Linux |
> Keep in mind that you need the gcc compiler.

## By default is the **F2** key to run firefox. But, you can change inside the file, inside the **system** put the command you want.

<br>

## Download the file, run either in the terminal using the gcc compiler or just ticking in the file.

<br>

### In the terminal linux:

```sh
   chmod +x script.sh
```

```sh
    ./scritp.sh
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

## By default is the **F2** key to run firefox. But, you can change inside the file, inside the **system** put the command you want.

## But you can change 

### where it has: **KEY_F(2)** just need to know which key command you want

```sh
   while (TRUE)
    {
        if ( ch == KEY_HOME){
            system("firefox");
            printf("F2");
            break;   
        }
    }
```

### In the terminal Windows (CMD | Powershell):

```sh
   gcc script.c -o script
```

```sh
    ./"script" or ./"script.exe" 
``` 

## And the script will run.

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

