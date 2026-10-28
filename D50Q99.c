/* Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.


Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>
int main() {
    char date[11];
    printf("Enter a date in dd/04/yyyy format: ");
    fgets(date, sizeof(date), stdin);

    // Change the format to dd-Apr-yyyy
    for (int i = 0; date[i] != '\0'; i++) {
        if (date[i] == '/') {
            if (i == 2) {
                printf("-Apr-");
            }
        } else {
            printf("%c", date[i]);
        }
    }

    printf("\n");
    return 0;
    
}