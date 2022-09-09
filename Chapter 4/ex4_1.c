/*
1. Write a program that asks for your first name, your last name, and then prints the names
in the format last, first .
*/

#include <stdio.h>

int main(void)
{
    char firstName[32];
    char lastName[32];

    printf("Enter your first name: ");
    scanf("%s", firstName);
    printf("Enter your last name: ");
    scanf("%s", lastName);

    printf("%s, %s.\n", lastName, firstName);

    return 0;
}