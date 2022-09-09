/*
5. Write a program that requests the download speed in megabits per second (Mbs) and
the size of a file in megabytes (MB). The program should calculate the download time
for the file. Note that in this context one byte is eight bits. Use type float, and use /
for division. The program should report all three values (download speed, file size, and
download time) showing two digits to the right of the decimal point, as in the following:
 At 18.12 megabits per second, a file of 2.20 megabytes
 downloads in 0.97 seconds.
*/

#include <stdio.h>

int main(void)
{
    float Mbs, size;

    printf("Enter the download speed in megabits per second (Mbs): ");
    scanf("%f", &Mbs);
    printf("Enter file size in megabytes (MB): ");
    scanf("%f", &size);

    printf("\nAt %.2f megabits per second, a file of %.2f megabytes\ndownloads in %.2f seconds.\n",
           Mbs, size, (size * 8) / Mbs);

    return 0;
}