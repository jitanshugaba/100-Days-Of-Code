/* Q41: Write a program to swap the first and last digit of a number.


Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
int main() {    
    
    int num, first_digit, last_digit, num_copy, digits = 0, swapped_num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Store the last digit
    last_digit = num % 10;
    
    // Count the number of digits and find the first digit
    num_copy = num;
    while (num_copy >= 10) {
        num_copy /= 10;
        digits++;
    }
    first_digit = num_copy; // The first digit is now in num_copy
    
    // If the number has only one digit, swapping doesn't change it
    if (digits == 0) {
        swapped_num = num;
    } else {
        // Remove the first and last digits from the original number
        int middle_part = (num % (int)pow(10, digits)) / 10; // Middle part without first and last digit
        
        // Construct the new number with swapped digits
        swapped_num = last_digit * (int)pow(10, digits) + middle_part * 10 + first_digit;
    }
    
    printf("Number after swapping first and last digit: %d\n", swapped_num);
    
    return 0;
}