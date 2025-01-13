/*
* @Author: karlosiric
* @Date:   2025-01-13 10:22:23
* @Last Modified by:   karlosiric
* @Last Modified time: 2025-01-13 10:40:35
*/

// Following the tutorial on C from Portfolio Courses Channel
// This code is similar to the fahr to celsius conversion problem from K&R

/*
    This is a Table conversion program, very simple and very good to use!
 */

#include <stdio.h>
int main(void) {
    
    double initial = 0, step = 0, stop = 0;
    
    do {
        printf("Initial value (m): ", initial);
        scanf("%lf", &initial);
        if (initial < 0) printf("Must be >= 0!\n");
    } while (initial < 0);
    
    do {
        printf("Step value (m): ");
        scanf("%lf", &step);
        if (step <= 0) printf("Must be >= 0!\n");
    } while (step <= 0);
    
    do {
        printf("Stop value (m): ", stop);
        scanf("%lf", &stop);
        if (stop < 0) printf("Must be >= 0!\n");
    } while (stop < 0); // this ensures that we keep doing this until we have entered a positive number in the first place
    
    for (double conv = initial; conv <= stop; conv += step) {
        printf("%f || %f\n",conv, conv * 3.28084);       
    }
    
    
    return 0;
    
}