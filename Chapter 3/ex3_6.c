/*
6. The mass of a single molecule of water is about 3.0×10 -23 grams. A quart of water is
about 950 grams. Write a program that requests an amount of water, in quarts, and
displays the number of water molecules in that amount.
*/

#include <stdio.h>

int main(void)
{
    float waterMoleculeMass = 3.0e-23;
    float waterQuarts, waterGrams, waterMoleculesAmount;

    printf("Enter amount of water (in quarts): ");
    scanf("%f", &waterQuarts);

    waterGrams = waterQuarts * 950;
    waterMoleculesAmount = waterGrams / waterMoleculeMass;

    printf("In %f quarts of water there are %f (%e in exponential form) water molecules.\n",
           waterQuarts, waterMoleculesAmount, waterMoleculesAmount);

    return 0;
}
