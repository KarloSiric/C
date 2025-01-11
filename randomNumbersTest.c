/*
* @Author: karlosiric
* @Date:   2025-01-10 16:28:33
* @Last Modified by:   karlosiric
* @Last Modified time: 2025-01-11 01:43:12
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// #include <unistd.h> // for getpid()

int main(void) {
    
    srand(time(NULL));   // used for setting the seed for random number generation 
                        // this is important because we need to generate random
                        // numbers seeded so that means we need to get different 
                        // numbers each and every time, this is why we use seed.
                        // We usually use the current time for practice as the seed
                        // and this can be done like this.
                        
                        // here this is used because
                        // rand() func generates random numbers
                        // between 0 and RAND_MAX (INC) and this
                        // ensures we get numbers between 0 and 1.
                                                    
                                                    
                        // now we can print the random numbers
    
    for(int i = 0; i < 5; i++) {
        double randomValue = rand() / (double) RAND_MAX; // this gives us numbers between 0 and 1 but since it is double it has higher precision floating point set.
        // lets modify something let see how we can get random number integers between 0 and RAND_MAX, just use rand() func!
        long int randomIntegers = rand();        
        printf("Random number %d is: %ld\n", i, randomIntegers);
    }
    
    
}
/*
The `rand()` function generates a pseudo-random integer. The range of this integer is from 0 to `RAND_MAX`, inclusive.
 **`RAND_MAX`**: This is a constant defined in `stdlib.h` that represents the maximum value that `rand()` can return. Its exact value is implementation-defined, but it is guaranteed to be at least 32767.
**Division by `RAND_MAX`**: When you divide the result of `rand()` by `RAND_MAX`, you are effectively normalizing the random integer to a fraction of the maximum possible value. This scales the integer to a floating-point number in the range [0, 1]
**Type Casting**: The division `rand() / (double) RAND_MAX` involves casting `RAND_MAX` to a `double`. This ensures that the division is performed in floating-point arithmetic, resulting in a `double` value rather than an integer division, which would truncate the decimal part.
 **Range**: Since `rand()` returns values from 0 to `RAND_MAX`, dividing by `RAND_MAX` maps these values linearly to the range [0, 1].
  - If `rand()` returns 0, the result is `0 / RAND_MAX = 0.0`.
  - If `rand()` returns `RAND_MAX`, the result is `RAND_MAX / RAND_MAX = 1.0`.
  - For any value `x` returned by `rand()`, the result is `x / RAND_MAX`, which is a value between 0 and 1.
**Uniform Distribution**: The scaling maintains the uniform distribution of the random numbers. Each integer value from `rand()` has an equal probability of occurring, and thus each resulting `double` value between 0 and 1 is equally likely.
*/