/*
7. There are 2.54 centimeters to the inch. Write a program that asks you to enter your
height in inches and then displays your height in centimeters. Or, if you prefer, ask for
the height in centimeters and convert that to inches.
*/

#include <stdio.h>

int main(void)
{
    float inches;

    printf("\nConversion of height from inches to cm.\n");
    printf("Enter height in inches: ");
    scanf("%f", &inches);
    printf("\nHeight of %f inches is %f centimeters.\n", inches, inches * 2.54);

    return 0;
}