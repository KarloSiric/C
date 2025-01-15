/*
* @Author: karlosiric
* @Date:   2025-01-13 10:55:51
* @Last Modified by:   karlosiric
* @Last Modified time: 2025-01-15 13:13:09
*/

// new problem, discussin switch statements

#include <stdio.h>
int main(void) {
    
    int number = 0;
    
    switch (number) {
        case 0:
            printf("Case 0!\n");
            break;
        case 1:
            printf("Case 1!\n");
        case 2:
            printf("Case 2!\n");
        case 3:
            printf("Case 3!\n");
        default:
            printf("Default case printed in case nothing else works!\n");
    }
    
    printf("Switch statement over!\n");
    
    
    return 0;
    
}