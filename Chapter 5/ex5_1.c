/*
1. Write a program that converts time in minutes to time in hours and minutes. Use
#define or const to create a symbolic constant for 60. Use a while loop to allow the
user to enter values repeatedly and terminate the loop if a value for the time of 0 or less
is entered.
*/

#include <stdio.h>
#define MINS_PER_H 60

int main(void)
{
    int inputMins, hours, mins;

    printf("Converting minutes to hours and minutes.\n");
    printf("Enter time in minutes or <=0 to exit: ");
    scanf("%d", &inputMins);

    while (inputMins > 0)
    {
        hours = inputMins / MINS_PER_H;
        mins = inputMins % MINS_PER_H;
        printf("%d minutes = %d hours and %d minutes.\n",
               inputMins, hours, mins);
        printf("\nEnter time in minutes or <=0 to exit: ");
        scanf("%d", &inputMins);
    }
    printf("Goodbye!\n");

    return 0;
}