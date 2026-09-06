/* Q34: Write a program to check if a number is prime.


Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include <stdio.h>
int main() {
    int num, is_prime = 1; // Assume the number is prime
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num <= 1) {
        is_prime = 0; // Numbers less than or equal to 1 are not prime
    } else {
        for (int i = 2; i * i <= num; i++) { // Check divisibility up to the square root of num
            if (num % i == 0) {
                is_prime = 0; // Found a divisor, so it's not prime
                break;
            }
        }
    }
    
    if (is_prime) {
        printf("Prime\n");
    } else {
        printf("Not prime\n");
    }
    
    return 0;
}