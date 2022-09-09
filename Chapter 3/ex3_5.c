/*
5. There are approximately 3.156 × 10 7 seconds in a year. Write a program that requests
your age in years and then displays the equivalent number of seconds.
*/

#include <stdio.h>

int main(void)
{
    float age;

    printf("Enter your age in years: ");
    scanf("%f", &age);
    printf("\n%.0f years is equivalent to %.2f seconds.\n", age, age * 3.156e10);

    return 0;
}