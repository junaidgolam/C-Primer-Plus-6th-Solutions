/*
1. Write a program that uses one printf() call to print your first name and last name on
one line, uses a second printf() call to print your first and last names on two separate
lines, and uses a pair of printf() calls to print your first and last names on one line.
The output should look like this (but using your name):
 Gustav Mahler ÅFirst print statement
 Gustav ÅSecond print statement
 Mahler ÅStill the second print statement
 Gustav Mahler ÅThird and fourth print statements
 */

#include <stdio.h>

int main(void)
{
    printf("Golam Junaid\n");
    printf("Golam\nJunaid\n");
    printf("Golam ");
    printf("Junaid\n");

    return 0;
}