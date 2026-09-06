/* Q43: Write a program to check if a number is a strong number.


Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>

// Function to calculate the factorial of a single digit
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, originalNum, remainder, sum = 0;

    // Read the input number
    scanf("%d", &num);
    originalNum = num;

    // Extract digits and calculate the sum of their factorials
    while (num > 0) {
        remainder = num % 10;
        sum += factorial(remainder);
        num = num / 10;
    }

    // Compare the sum with the original number
    if (sum == originalNum) {
        printf("Strong number\n");
    } else {
        printf("Not strong number\n");
    }

    return 0;
}