/* Q84: Convert a lowercase string to uppercase without using built-in functions.


Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/
#include <stdio.h>
int main() {
    char str[100];

    printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin);

    printf("The uppercase string is: ");
    for (int i = 0; str[i] != '\0'; i++) {
        // Convert lowercase to uppercase by subtracting 32 from ASCII value
        if (str[i] >= 'a' && str[i] <= 'z') {
            printf("%c", str[i] - 32);
        } else {
            printf("%c", str[i]); // Print non-lowercase characters as is
        }
    }

    return 0;
    
}