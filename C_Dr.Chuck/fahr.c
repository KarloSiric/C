/*
* @Author: karlosiric
* @Date:   2024-07-09 17:13:45
* @Last Modified by:   karlosiric
* @Last Modified time: 2024-07-31 19:55:21
*/

// Program from K&R book about converting fahr to Celsius

#include <stdio.h>
int main()
{
    int lower, upper, step;
    float fahr, celsius;
    lower = 0; /* lower limit of temperature table */
    upper = 300; /* upper limit */
    step = 20; /* step size */
    fahr = lower;
    // printf("Press any key to continue...");
    // scanf("Press any key to continue...");
    printf("Fahr | Celsius\n");
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%5.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}