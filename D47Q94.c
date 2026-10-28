/* Q94: Find the longest word in a sentence.


Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>
int main() {
    char sentence[200];
    char longestWord[100] = "";
    char currentWord[100];
    int maxLength = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Tokenize the sentence into words
    char *token = strtok(sentence, " \n");
    while (token != NULL) {
        strcpy(currentWord, token);
        int length = strlen(currentWord);

        // Check if the current word is longer than the longest found so far
        if (length > maxLength) {
            maxLength = length;
            strcpy(longestWord, currentWord);
        }

        token = strtok(NULL, " \n");
    }

    printf("Longest word: %s\n", longestWord);
    return 0;
    
}