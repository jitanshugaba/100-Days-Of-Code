/* Q82: Print each character of a string on a new line.


Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/
#include <stdio.h>
int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Characters in the string are:\n");
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n') { // Exclude the newline character
            printf("%c\n", str[i]);
        }
    }

    return 0;
    
}