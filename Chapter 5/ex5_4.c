/*
 4. Write a program that asks the user to enter a height in centimeters and then displays the
height in centimeters and in feet and inches. Fractional centimeters and inches should
be allowed, and the program should allow the user to continue entering heights until a
nonpositive value is entered. A sample run should look like this:
 Enter a height in centimeters: 182
 182.0 cm = 5 feet, 11.7 inches
 Enter a height in centimeters (<=0 to quit): 168.7
 168.0 cm = 5 feet, 6.4
 inches
 Enter a height in centimeters (<=0 to quit): 0
 bye
 */

#include <stdio.h>

int main(void)
{
    int feet;
    float cm, inches;

    printf("Enter height in centimeters or <=0 to exit: ");
    scanf("%f", &cm);

    while (cm > 0)
    {
        feet = cm / 30.48;
        inches = (cm / 2.54) - (feet * 12);
        printf("%.1f cm = %d feet, %.1f inches.\n",
               cm, feet, inches);
        printf("\nEnter height in centimeters or <=0 to exit: ");
        scanf("%f", &cm);
    }
    printf("Goodbye!\n");

    return 0;
}
