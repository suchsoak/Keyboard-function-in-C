#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ncurses.h>
#include <unistd.h> 

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int main()
{
    system("clear");
    char* text = "  __    __                   \n"
                "|  \\  /  \\                     /      \\ \n"
                "| ▓▓ /  ▓▓ ______  __    __   |  ▓▓▓▓▓▓\\ \n"
                "| ▓▓/  ▓▓ /      \\|  \\  |  \\  | ▓▓   \\▓▓\"\n"
                "| ▓▓  ▓▓ |  ▓▓▓▓▓▓\\ ▓▓  | ▓▓  | ▓▓      \n"
                "| ▓▓▓▓▓\\ | ▓▓    ▓▓ ▓▓  | ▓▓  | ▓▓   __ \n"
                "| ▓▓ \\▓▓\\| ▓▓▓▓▓▓▓▓ ▓▓__/ ▓▓__| ▓▓__/  \\\"\n"
                "| ▓▓  \\▓▓\\▓▓     \\▓▓    ▓▓  \\▓▓    ▓▓\"\n"
                " \\▓▓   \\▓▓ \\▓▓▓▓▓▓▓_\\▓▓▓▓▓▓▓\\▓▓ \\▓▓▓▓▓▓ \n"
                "                  |  \\__| ▓▓            \n"
                "                   \\▓▓    ▓▓            \n"
                "                    \\▓▓▓▓▓▓             \n"
                "      Github:https://github.com/suchsoak/ \n "
                "                   v:1.0.0.0             \n ";

    printf("%s%s%s", ANSI_COLOR_RED, text, ANSI_COLOR_RESET);
    sleep(2); 

    int ch;
    initscr();
    refresh();
    getch();
    ch = getch();
    keypad(stdscr, TRUE);
    while (TRUE)
    {
        COLOR_RED;
        if ( ch == KEY_HOME){
            system("firefox https://github.com/suchsoak/");
            break;   
        }
        else{
            printf("\nAnother button");
            break;
        }
        if (initscr == NULL){
            printf("Have some problem!!");

        }
    }
    
    refresh();
    getch();
    endwin();
    return 0;
}
