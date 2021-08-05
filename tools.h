/* date = August 4th 2021 0:59 pm */

#ifndef TOOLS_H
#define TOOLS_H

// library includes
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// functions
int log_in();
void menu_ui();
ENTRYS* createEntryList();
ENTRYS* addEntryToList(ENTRYS*);
// to add...
// a func to find an element
// a func to edit that element
// a func to view that element
// a func to remove that element


typedef struct entrys
{
    int number;
    char ent[128] = {};
    struct entrys *nextNode;
}ENTRYS;

#endif
