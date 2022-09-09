/*
7. Write a program that requests a type double number and prints the value of the number
cubed. Use a function of your own design to cube the value and print it. The main()
program should pass the entered value to this function.
*/

#include <stdio.h>

void cube(double n);

int main(void)
{
    double a;
    printf("Enter a double variable: ");
    scanf("%lf", &a);
    cube(a);

    return 0;
}

void cube(double n)
{
    printf("Variable cubed = %lf.\n", n * n * n);
}