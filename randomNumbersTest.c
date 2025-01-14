/*
 * @Author: karlosiric
 * @Date:   2025-01-10 16:28:33
 * @Last Modified by:   karlosiric
 * @Last Modified time: 2025-01-13 09:42:18
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// #include <unistd.h> // for getpid()

// Lets make a comparator function for comparing integer values
int compare(const void *a, const void *b) {
    double diff = (*(double *)a - *(double *)b);
    if (diff < 0)
        return -1;
    if (diff > 0)
        return 1;
    return 0;
}


int main(void) {
    srand(time(
        NULL)); // used for setting the seed so that each time we get random
                // numbers, without it the random numbers are the same
    double arrayOfRandoms[5];
    int n = sizeof(arrayOfRandoms) / sizeof(arrayOfRandoms[0]);
    int i;
    for (i = 0; i < 5; i++) {
        double randomValue =
            rand() / (double)RAND_MAX; // this gives us numbers between 0 and 1
                                       // but since it is double it has higher
                                       // precision floating point set.
        // lets modify something let see how we can get random number integers
        // between 0 and RAND_MAX, just use rand() func! long int randomIntegers
        // = rand();
        arrayOfRandoms[i] = randomValue;
    }
    // now we sort it!
    qsort(arrayOfRandoms, sizeof(arrayOfRandoms) / sizeof(arrayOfRandoms[0]),
          sizeof(double), compare);

    // lets sort it using bubble sort now
    // need to make a new functon bubblesort
    /*
    for (int i = 0; i < n; i++) {
        printf("Element [%d] of the sorted array:  %lf\n",i, arrayOfRandoms[i]);
    }
    */

    // writing it using the following: {a,b,c,...}, lets do it!
    printf("{");
    int size = sizeof(arrayOfRandoms) / sizeof(arrayOfRandoms[0]);
    for (i = 0; i < size; i++) {
        printf("%lf", arrayOfRandoms[i]);
        if (i < n - 1) { // has to go n - 1 because without it all elements
                         // would have , that's wrong!
            printf(",");
        }
    }
    // printf("}");

    // maybe I can print them so that they are properly inside the array;

    /*
        This is wrong needs change and modifying, gonna do it tommorow

     */

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("Numbers in the array printed are: %d\n", arrayOfRandoms[i]);
    // }
    return 0;
}
/*
The `rand()` function generates a pseudo-random integer. The range of this
integer is from 0 to `RAND_MAX`, inclusive.
 **`RAND_MAX`**: This is a constant defined in `stdlib.h` that represents the
maximum value that `rand()` can return. Its exact value is
implementation-defined, but it is guaranteed to be at least 32767.
**Division by `RAND_MAX`**: When you divide the result of `rand()` by
`RAND_MAX`, you are effectively normalizing the random integer to a fraction of
the maximum possible value. This scales the integer to a floating-point number
in the range [0, 1]
**Type Casting**: The division `rand() / (double) RAND_MAX` involves casting
`RAND_MAX` to a `double`. This ensures that the division is performed in
floating-point arithmetic, resulting in a `double` value rather than an integer
division, which would truncate the decimal part.
 **Range**: Since `rand()` returns values from 0 to `RAND_MAX`, dividing by
`RAND_MAX` maps these values linearly to the range [0, 1].
  - If `rand()` returns 0, the result is `0 / RAND_MAX = 0.0`.
  - If `rand()` returns `RAND_MAX`, the result is `RAND_MAX / RAND_MAX = 1.0`.
  - For any value `x` returned by `rand()`, the result is `x / RAND_MAX`, which
is a value between 0 and 1.
**Uniform Distribution**: The scaling maintains the uniform distribution of the
random numbers. Each integer value from `rand()` has an equal probability of
occurring, and thus each resulting `double` value between 0 and 1 is equally
likely.
*/