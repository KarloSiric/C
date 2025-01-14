/*
* @Author: karlosiric
* @Date:   2025-01-14 14:32:20
* @Last Modified by:   karlosiric
* @Last Modified time: 2025-01-14 14:34:16
*/

/*
    In this example we will talk about another example of macro.
    Defining a function which is also possible when doing macros.
    
 */

#include <stdio.h>
#define ADD(a, b) a + b

int main(int argc, char const *argv[])
{
    int x = 2;
    int y = 3;
    
    printf("The sum of x and y is: %d\n", ADD(x,y));
    
    return 0;
}