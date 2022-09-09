/*
7. Write a program that sets a type double variable to 1.0/3.0 and a type float variable
to 1.0/3.0. Display each result three times—once showing four digits to the right of the
decimal, once showing 12 digits to the right of the decimal, and once showing 16 digits
to the right of the decimal. Also have the program include float.h and display the
values of FLT_DIG and DBL_DIG. Are the displayed values of 1.0/3.0 consistent with these
values? */

#include <stdio.h>
#include <float.h>

int main(void)
{
    double x = 1.0 / 3.0;
    float y = 1.0 / 3.0;

    printf("For double variable x: \n");
    printf("%.4lf 4 digits.\n", x);
    printf("%.12lf 12 digits.\n", x);
    printf("%.16lf 16 digits.\n\n", x);

    printf("For float variable y: \n");
    printf("%.4lf 4 digits.\n", y);
    printf("%.12lf 12 digits.\n", y);
    printf("%.16lf 16 digits.\n\n", y);

    printf("Minimum number of \n");
    printf("significant decimal digits for a float = %d\n\n", FLT_DIG);
    printf("Minimum number of \n");
    printf("significant decimal digits for a double = %d\n", DBL_DIG);

    return 0;
}