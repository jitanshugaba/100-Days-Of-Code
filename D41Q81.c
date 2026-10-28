/* Q81: Count characters in a string without using built-in length functions.


Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/
#include <stdio.h>
int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count characters until the null terminator is reached
    while (str[count] != '\0') {
        count++;
    }

    printf("The number of characters in the string is: %d\n", count - 1); // Subtract 1 to exclude the newline character

    return 0;
    
}