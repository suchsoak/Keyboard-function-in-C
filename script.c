#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

int main()
{
    initscr();
    cbreak();
    noecho();
    keypad( stdscr, TRUE);    

    int ch = getch();

    while (TRUE)
    {
        if ( ch == KEY_F(2)){
            system("firefox");
            printf("F2 apertado");
            break;   
        }
    }
    
    endwin();
    return 0;
}
