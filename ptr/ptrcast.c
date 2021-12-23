//#include <ncurses.h>
#include <stdio.h>
   
#define SIZE 10
 
void main() {
    int A = 10;
    int *intPtr;
    char *charPtr;
 
    intPtr = &A;
    printf("%d\n", *intPtr);
    printf("%d\n", intPtr);   
    printf("--------------------\n");
    charPtr = (char*)intPtr;
    printf("%d \n", *charPtr);
    charPtr++;
    printf("%d \n", charPtr);
    charPtr++;
    printf("%d \n", charPtr);
    charPtr++;
    printf("%d ", *charPtr);
     
//    getch();
}
