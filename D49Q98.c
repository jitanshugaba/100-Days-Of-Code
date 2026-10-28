/* Q98: Print initials of a name with the surname displayed in full.


Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
int main() {
    char name[100];
    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);

    // Print the initials and the surname
    for (int i = 0; name[i] != '\0'; i++) {
        // Check if the character is the first letter of a word
        if (i == 0 || name[i - 1] == ' ') {
            printf("%c.", name[i]);
        }
        // If it's the last word (surname), print it in full
        if (name[i] == ' ' && name[i + 1] != '\0') {
            // Move to the next character after space
            int j = i + 1;
            while (name[j] != '\0' && name[j] != ' ') {
                j++;
            }
            // Print the surname
            printf(" %.*s", j - (i + 1), &name[i + 1]);
            break; // Exit after printing the surname
        }
    }

    printf("\n");
    return 0;
    
    
}