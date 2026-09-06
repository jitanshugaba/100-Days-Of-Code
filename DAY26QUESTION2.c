/* Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*




Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include <stdio.h>

int main() {
    // Number of stars in each group
    int groups[] = {1, 3, 5, 3, 1};
    int total_groups = 5;

    // Loop through each group
    for (int i = 0; i < total_groups; i++) {
        
        // Print the required number of stars for the current group
        for (int j = 0; j < groups[i]; j++) {
            printf("*\n");
        }
        
        // Print a blank line after each group (except the last one)
        if (i < total_groups - 1) {
            printf("\n");
        }
    }

    return 0;
}