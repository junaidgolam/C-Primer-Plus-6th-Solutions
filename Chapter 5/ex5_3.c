/*
3. Write a program that asks the user to enter the number of days and then converts that
value to weeks and days. For example, it would convert 18 days to 2 weeks, 4 days.
Display results in the following format:
 18 days are 2 weeks, 4 days.
Use a while loop to allow the user to repeatedly enter day values; terminate the loop
when the user enters a nonpositive value, such as 0 or -20 .
*/

#include <stdio.h>

int main(void)
{
    int days;

    printf("Converting days to days and weeks.\n\n");
    printf("Enter number of days or <=0 to exit: ");
    scanf("%d", &days);

    while (days > 0)
    {
        printf("%d days are %d weeks, %d days.\n",
               days, days / 7, days % 7);
        printf("\nEnter number of days or <=0 to exit: ");
        scanf("%d", &days);
    }
    printf("Goodbye!\n");

    return 0;
}