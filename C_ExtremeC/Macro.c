/*
* @Author: karlosiric
* @Date:   2025-01-13 18:43:12
* @Last Modified by:   karlosiric
* @Last Modified time: 2025-01-13 18:55:11
*/

// In this program we discuss macros, macros are very important.
// They are part of a preprocessor directives and they start with # symbol.
// define a constant, or for using it as a function instead of writing a C func.
// header guards and etc...
// C preprocessor can be controlled using a set of directives. 
// These lines are important to the C preprocessor and not to the C compiler.
// Preprocessing is important because it allows us to engineer and change our program before
// we submit it to the C compiler for compilation, this is only available with the C/C++,
// and not with other higher level languages.

#include <stdio.h>
#define ABC 5 // a macro very useful when programming, it is defined as having a name and a value
            // a preprocessor replaces then all the names with its values in the code.

int main(void) {
    int x = 2;
    int y = ABC;
    int z = x + y;
    printf("Printing result of z: %d\n", z);
    
    return 0;;
}