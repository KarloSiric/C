/*
* @Author: karlosiric
* @Date:   2025-01-15 13:13:41
* @Last Modified by:   karlosiric
* @Last Modified time: 2025-01-15 13:54:21
*/

// program about arrays and their usefulness and so forth.

#include <stdio.h>
int main(int argc, char const *argv[])
{
    
    // int grade1 = 75;
    // int grade2 = 88;
    // int grade3 = 72;
    // int grade4 = 92;
    // int grade5 = 79;
    
    // int average = grade1 + grade2 + grade3 + grade4 + grade5; // this is not ideal
    
    // printf("Average of the 5 grades is: %d\n", average);
    
    // We can do it with arrays because it is better!
    
    int grade[5]; //  our computer has now allocated memory for storing 5 values into memory
    /*
        And it looks something like this, each grade has its own place in memory(each value that we will use),
        and each of those memories has its own indexes with which we can access them and get the value back,
        that are stored on that memory location inside memory itself. Something like this:
        
        index: 0    1    2    3    4
        
        grade: 75   88   72   92   79
    */
    
    grade[0] = 75;
    grade[1] = 88;
    grade[2] = 72;
    grade[3] = 92;
    grade[4] = 79;
    
    // OR
    
    int grades2[20] = {0}; // more readable saves times, here we made 20 memory blocks, we ordered the computer to save up 20 spaces or blocks in memory for storing
                            // they are all initialized with value 0! All of them and we can check using for loop
    grades2[1] = 5;
    
    int size = sizeof(grades2) / sizeof(grades2[0]);
    
    printf("Printing all of the values for testing:\n");
    for (int i = 0; i < size; i++)
    {
        printf("Grade[%d], value is: %d\n", i, grades2[i]);
    }
    // printf("Printing for testing: %d %d\n", grades2[0], grades2[1]); 
    
    // int total = 0;
    // for (int i = 0; i < 6; i++) 
    // {
    //     // total += grade[i];
    //     // printf("The grade[%d] is: %d\n", i, grade[i]);
    //     printf("Accessing grade[%d], value is: %d\n", i, grade[i]); // for testing purposes only to see what C does when index out of scope
    // }
    // printf("Average of all the grades is: %d\n", total / 5);
    
    
       
    return 0;
}