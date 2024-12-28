/*
 * @Author: karlosiric
 * @Date:   2024-12-28 13:57:46
 * @Last Modified by:   karlosiric
 * @Last Modified time: 2024-12-28 16:33:27
 */

/*
    This will be a tutorial on Loops in C some short guide nothing much,
    And I am following a guide from Potrfolio Courses on YT for all of this.
    He also has a guide on solving problems in C and I will be documenting that
   too. Some prior basics are missing I might add them later on but for now
   loops and forward stuff only.

*/

#include <stdio.h>
int main(void) {
    
    // int number = 0;
    
    // while (number < 10) {
    //     printf("Number is: %d\n", number);
    //     number++;
        
    // }
    
    double initial = 0, step = 0, stop = 0;
    
    do {
        printf("Initial (m): ");
        scanf("%lf", &initial);
        if (initial < 0) {
            printf("Careful, intitial value must be >= 0\n");
        }
    } while (initial < 0);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}