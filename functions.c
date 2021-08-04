#include "tools.h"

// prints a menu for the diary
void menu_ui()
{
    printf("\nEnter your selection:\n");
    printf("\n[1]Add an new entry");
    printf("\n[2]Remove an entry");
    printf("\n[3]Edit an entry");
    printf("\n[4]View an entry");
    printf("\n[5]Exit the diary\n");
}

// a log in menu
int log_in()
{
    char inp_pass[16] = {};
    char passw[16] = {"BabaYaga"};
    
    for(int i = 0; i < 3; i++)
    {
        printf("Hello to a console diary mini-project!");
        printf("\nPlease enter the password!\n");
        printf("Pass: ");
        scanf("%s", inp_pass);
        if(strcmp(inp_pass, passw) == 0)
        {
            printf("\nWelcome back!\n");
            return 0;
        }
        
    }
    return -1;
}