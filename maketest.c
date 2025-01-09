/*
* @Author: karlosiric
* @Date:   2025-01-07 17:30:35
* @Last Modified by:   karlosiric
* @Last Modified time: 2025-01-09 12:27:59
*/
    
/*
    this is just a test file for testing the make file I am about to create
    This is also important because make files can make things easier for us when doing c programming!
 */
    
#include <math.h>
#include <stdio.h>

double powerFunc(double number) {
    
    double powerNumber = pow(number, number);
    return powerNumber;
}    



double squareRoot(double number) {
    
    double square = sqrt(number);
    return square;    
}   

/*
 *Hello World and welcome to the programming language tool set used for making amazing C programming language programs!
*/




    
int main(void) {
   
    double num;
    
    printf("Please enter a number that you want to square root: \n");
    scanf("%lf", &num);
    // print the square rooting now!
    printf("The square root of the number %lf is: %lf\n", num, squareRoot(num));
    printf("The power of the number %lf itself: %lf\n", num, powerFunc(num));
    
    
    // return 0;
    
}