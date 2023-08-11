#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

int main()
{
    initscr(); 
    cbreak();  
    noecho();  
    keypad( stdscr, TRUE);    
    start_color();

    int ch = getch();

    while (TRUE)
    {
        COLOR_RED;
        if ( ch == KEY_HOME){
            system("firefox https://github.com/suchsoak");
            break;   
        }
        else{
            printf("Another botton\n");
            break;
        }
        if (initscr == NULL){
            printf("Have some problem!!");

        }
    }
    
    endwin();
    return 0;
}
