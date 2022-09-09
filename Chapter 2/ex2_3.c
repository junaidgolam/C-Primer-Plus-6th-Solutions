/*
3. Write a program that converts your age in years to days and displays both values. At this
point, don’t worry about fractional years and leap years.
*/

#include <stdio.h>

int main(void)
{
    int age = 19;

    printf("You are %d years old which means you are %d days old.\n",
           age, age * 365);

    return 0;
}