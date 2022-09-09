/*
2. Write a program that asks you to enter an ASCII code value, such as 66, and then prints
the character having that ASCII code.
*/

#include <stdio.h>

int main(void)
{
    int n;
    printf("ASCII code to character finder.\n");
    printf("Enter ASCII code (Positive Integers Only!): ");
    scanf("%d", &n);
    printf("\nASCII code %d = Character %c.\n", n, n);

    return 0;
}