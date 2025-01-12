/*
* @Author: karlosiric
* @Date:   2025-01-07 17:30:35
* @Last Modified by:   karlosiric
* @Last Modified time: 2025-01-12 22:58:32
*/
/*
    This is just another testing file and it is used for testing purposes ONLY!
*/    
/*
    this is just a test file for testing the make file I am about to create
    This is also important because make files can make things easier for us when doing c programming!
 */
    
#include <math.h>
#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 

double powerFunc(double number) {
    
    double powerNumber = pow(number, 3);
    return powerNumber;
}


double squareRoot(double number) {
    
    double square = sqrt(number);
    return square;        
}
    
int main(void) {
    // double operationOfNumbers; // not being used so Clang prints an warning for those kinds of things here, better than gcc.
    // Alwyas declare first variables, makes the code so much more readable!
    char problem[] = "PROBLEM";
    double num;
    
    printf("Printing:");
    printf("Hello World");
    printf("Printing a %s\n", problem);
    printf("Please enter a number that you want to square root: \n");
    scanf("%lf", &num);
    
    // print the square rooting now!
    printf("The square root of the number %lf is: %lf\n", num, squareRoot(num));
    printf("The power of the number %lf itself: %lf\n", num, powerFunc(num));
    
    return 0;
    
}