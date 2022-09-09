/*
1. Find out what your system does with integer overflow, floating-point overflow, and
floating-point underflow by using the experimental approach; that is, write programs
having these problems. (You can check the discussion in Chapter 4of limits.h and
float.h to get guidance on the largest and smallest values.)
*/

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    printf("Maximum integer value = %d\n", INT_MAX);
    printf("Minimum integer value = %d\n", INT_MIN);
    printf("Integer overflowed = %d\n\n", INT_MAX + 1);

    printf("Maximum float-point value = %f or %e (exponent)\n", FLT_MAX, FLT_MAX);
    printf("Minimum floating-point value = %f or %e (exponent)\n", FLT_MIN, FLT_MIN);
    printf("Floating-point overflow = %f or %e (exponent)\n", FLT_MAX * FLT_MAX, FLT_MAX * FLT_MAX);
    printf("Floating-point underflow = %f or %e (exponent)\n\n", FLT_MIN / FLT_MAX, FLT_MIN / FLT_MAX);

    return 0;
}