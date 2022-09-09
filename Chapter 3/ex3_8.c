/*
8. In the U.S. system of volume measurements, a pint is 2 cups, a cup is 8 ounces, an
ounce is 2 tablespoons, and a tablespoon is 3 teaspoons. Write a program that requests a
volume in cups and that displays the equivalent volumes in pints, ounces, tablespoons,
and teaspoons. Why does a floating-point type make more sense for this application than
an integer type?

Floating-point types make more sense as measurement of volume can be in decimal points.
*/

#include <stdio.h>

int main(void)
{
    float cups, pints, ounces;
    float tablespoons, teaspoons;

    printf("Enter volume in cups: ");
    scanf("%f", &cups);

    pints = cups / 2;
    ounces = cups * 8;
    tablespoons = ounces * 2;
    teaspoons = tablespoons * 3;

    printf("%f volume in cups is equivalent to:\n\n", cups);
    printf("%f pints.\n", pints);
    printf("%f ounces.\n", ounces);
    printf("%f tablespoons.\n", tablespoons);
    printf("%f teaspoons.\n", teaspoons);

    return 0;
}