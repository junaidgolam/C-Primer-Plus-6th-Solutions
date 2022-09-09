/*
6. Write a program that creates an integer variable called toes. Have the program set toes
to 10. Also have the program calculate what twice toes is and what toes squared is. The
program should print all three values, identifying them
*/

#include <stdio.h>

int main(void)
{
    int toes = 10;

    printf("Humans have %d toes.\n", toes);
    printf("If humans had twice the amount of toes, we would have %d toes.\n", toes * 2);
    printf("However if our toes had gotten squared, we would have %d toes!\n", toes * toes);

    return 0;
}