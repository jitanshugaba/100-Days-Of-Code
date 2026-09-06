/* Q40: Write a program to find the 1’s complement of a binary number and print it.


Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>
int main() {
    char binary[100], ones_complement[100];
    printf("Enter a binary number: ");
    scanf("%s", binary);
    
    // Calculate 1's complement
    for (int i = 0; binary[i] != '\0'; i++) {
        if (binary[i] == '0') {
            ones_complement[i] = '1';
        } else if (binary[i] == '1') {
            ones_complement[i] = '0';
        } else {
            printf("Invalid binary number\n");
            return 1; // Exit if input is not a valid binary number
        }
    }
    ones_complement[strlen(binary)] = '\0'; // Null-terminate the string
    
    printf("1's complement: %s\n", ones_complement);
    
    return 0;
}