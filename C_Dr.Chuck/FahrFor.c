/*
* @Author: karlosiric
* @Date:   2024-09-15 12:04:54
* @Last Modified by:   karlosiric
* @Last Modified time: 2025-01-09 12:29:32
*/

// Here we will write the fahr program but using for loop instead of while

#include <stdio.h>
int main(void) {
    int ls;
    int fahr;
    printf("Fahr  |  Celsius\n");
    for(fahr = 0; fahr <= 300; fahr+=20) {
        printf("%5d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
    
    
    
    
    
    
    return 0;
}



// same program and just different syntax and different functions used.
// Power of C is to write it in totally different ways, you choose which one you like the best

