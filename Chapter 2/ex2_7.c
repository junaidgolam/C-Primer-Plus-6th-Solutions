/*
7. Many studies suggest that smiling has benefits. Write a program that produces the
following output:
 Smile!Smile!Smile!
 Smile!Smile!
 Smile!
Have the program define a function that displays the string Smile! once, and have the
program use the function as often as needed. 
*/

#include <stdio.h>

void sm(void);

int main(void)
{
    sm(); sm(); sm(); printf("\n");
    sm(); sm(); printf("\n");
    sm();

    return 0;
}

void sm(void)
{
    printf("Smile!");
}