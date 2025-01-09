/*
 * @Author: karlosiric
 * @Date:   2024-12-28 13:57:46
 * @Last Modified by:   karlosiric
 * @Last Modified time: 2025-01-09 11:28:40
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
    
    
    /*
    
    char hello = printf("Hello World and welcome to the world of programming in C language!");
    printf("%c\n", hello);

    Here we have a problem it is because the printf function returns an int value
    so when I store that into char array Hello we are mixing the two and 
    taht is why I am getting B at the end of the output of the program.
    
    So the printf function returns the integer value in C without the null terminator '\0'.
    This is very important to know!
    
    */
    
    int hello = printf("Here we will test the number of characters in this output printf func!\n");
    printf("Number of chars printed by the printf func here above is: %d\n", hello);
    
    
    return 0;
}