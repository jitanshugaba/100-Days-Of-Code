/* Q96: Reverse each word in a sentence without changing the word order.


Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>
void reverseWord(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char sentence[200];
    char *wordStart = NULL;
    char *ptr = sentence;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    while (*ptr) {
        if (wordStart == NULL && *ptr != ' ' && *ptr != '\n') {
            wordStart = ptr; // Mark the start of a word
        }
        if (wordStart != NULL && (*ptr == ' ' || *ptr == '\n')) {
            reverseWord(wordStart, ptr - 1); // Reverse the word
            wordStart = NULL; // Reset for the next word
        }
        ptr++;
    }

    // If the last word doesn't end with a space or newline, reverse it
    if (wordStart != NULL) {
        reverseWord(wordStart, ptr - 1);
    }

    printf("Reversed sentence: %s", sentence);
    return 0;
    
}