#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ncurses.h>
#include <sys/utsname.h>

int main()
{

    #ifdef __linux__
            printf("You have Linux! COOL!\n");

    initscr(); 
    cbreak();  
    noecho();
    refresh();  
    keypad( stdscr, TRUE);
    // start_color();
    int ch = getch();
        
    while (TRUE)
    {
        COLOR_RED;
        if ( ch == KEY_F(2)){
            system("firefox https://github.com/suchsoak/");
            system("clear");
            break;   
        }
        else{
            printf("\nanother button");
            break;
        }
        if (initscr == NULL){
            printf("Have some problem!!");

        }
    }
    

    #elif _WIN32
        printf("You use windows, man this not cool. Go to linux NOW!!\n");

    #else
        printf("Sorry, the system are"
        "not listed above.\n");


#endif
endwin();
    return 0;
}
