/* Q39: Write a program to find the product of odd digits of a number.


Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>
int main() {
    int num, product = 1, has_odd = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    while (num > 0) {
        int digit = num % 10; // Get the last digit
        if (digit % 2 != 0) { // Check if the digit is odd
            product *= digit; // Multiply to the product
            has_odd = 1; // Mark that we have found an odd digit
        }
        num /= 10; // Remove the last digit from the original number
    }
    
    if (!has_odd) {
        product = 1; // If no odd digits were found, set product to 1
    }
    
    printf("Product of odd digits: %d\n", product);
    
    return 0;
}