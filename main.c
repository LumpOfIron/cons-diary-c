#include "tools.h"

// Making a console personal diary mini project

int main()
{
    if(log_in() == -1) exit(-69);
    
    int choice, temp = 0;
    while(1)
    {
        menu_ui();
        printf("Selection: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            {
                // add a new entry function
                if (temp == 0)
                {
                    ENTRYS* headNode = createEntryList();
                    temp = 7;
                }
                else
                {
                    headNode = addEntryToList(headNode);
                }
                break;
            }
            case 2:
            {
                // remove an entry func
                break;
            }
            case 3:
            {
                // edit an entry func
                break;
            }
            case 4:
            {
                // view an entry func
                break;
            }
            case 5:
            {
                exit(0);
                break;
            }
        }
    }
    
    
    return 0;
}