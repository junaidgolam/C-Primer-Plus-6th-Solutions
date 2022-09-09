/*
4. Write a program that requests your height in inches and your name, and then displays
the information in the following form:
 Dabney, you are 6.208 feet tall
Use type float, and use / for division. If you prefer, request the height in centimeters
and display it in meters.
*/

#include <stdio.h>

int main(void)
{
    char name[32];
    float inches;

    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your height in inches: ");
    scanf("%f", &inches);

    printf("\n%s, you are %.3f feet tall.",
           name, inches / 12);

    return 0;
}