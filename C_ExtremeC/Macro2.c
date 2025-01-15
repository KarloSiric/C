/*
* @Author: karlosiric
* @Date:   2025-01-14 14:32:20
* @Last Modified by:   karlosiric
* @Last Modified time: 2025-01-14 17:22:36
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
    
    int z = ADD(x, y);
    
    printf("The sum of x and y is: %d\n", z);
    
    
    return 0;
}

/*
    Here ADD is not a function per say but rather
    it is a macro defined with arguments.
    When the preprocessing is finished,
    and after macro expansion, we get
    a code that looks like the following:
    
    int main(int argc, char const *argv[]) {
        
        int x = 2;
        int y = 3;
        
        int z = x + y;
        
        printf("...");
    
        return 0;
    }

    So what happens is that the preprocessor replaces the name of the macro used with it values
    or in this case arguments defined.
    
    
    
 */