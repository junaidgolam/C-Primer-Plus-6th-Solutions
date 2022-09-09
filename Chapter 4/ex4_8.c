/*
8. Write a program that asks the user to enter the number of miles traveled and the number
of gallons of gasoline consumed. It should then calculate and display the miles-per-gallon
value, showing one place to the right of the decimal. Next, using the fact that one gallon
is about 3.785 liters and one mile is about 1.609 kilometers, it should convert the
mileper-gallon value to a liters-per-100-km value, the usual European way of expressing fuel
consumption, and display the result, showing one place to the right of the decimal. Note
that the U. S. scheme measures the distance traveled per amount of fuel (higher is better),
whereas the European scheme measures the amount of fuel per distance (lower is better).
Use symbolic constants (using const or #define) for the two conversion factors.
*/

#include <stdio.h>
#define KM_PER_MI 1.609
#define L_PER_GAL 3.785

int main(void)
{
    float miles, gallons;

    printf("Enter number of miles traveled: ");
    scanf("%f", &miles);
    printf("Enter amount of gallons consumed: ");
    scanf("%f", &gallons);

    printf("\nThat is %.1f miles per gallon.\n\n",
           miles / gallons);
    printf("Which is %.1f litters per 100km.\n",
           (100 * (gallons * L_PER_GAL) / ((miles * KM_PER_MI))));

    return 0;
}