#include <stdio.h>
#include "mymalloc.h"
#include <string.h>
 
int main(int argc, char const *argv[])
{
    printf("Start of main\n");
 
    char* p1 = (char*)MyMalloc(10);
    //strcpy(p, "Helloaaaa");
    printer(50);
 
    char* p2 = (char*)MyMalloc(10);
    printer(50);
 
    char* p3 = (char*)MyMalloc(10);
    printer(50);
 
    MyFree((void*)p2);
    printer(100);
 
    MyFree((void*)p3);
    printer(100);
    //temp(33);
 
    char* p4 = (char*)MyMalloc(11);
    printer(100);
 
    //temp(49);
    printf("End of main\n");
    //printer(50);
    return 0;
}


