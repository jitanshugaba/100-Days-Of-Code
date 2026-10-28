/* Q114: Write a program to take a string s as input. The task is to find the length of the longest 
substring without repeating characters. Print the length as output.


Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
int lengthOfLongestSubstring(char *s) {
    int n = 0, maxLength = 0, start = 0;
    int index[256] = {0}; // Array to store the last index of each character

    for (int end = 0; s[end] != '\0'; end++) {
        char currentChar = s[end];
        if (index[(unsigned char)currentChar] > start) {
            start = index[(unsigned char)currentChar];
        }
        index[(unsigned char)currentChar] = end + 1; // Store the next index
        n = end - start + 1;
        if (n > maxLength) {
            maxLength = n;
        }
    }

    return maxLength;
    
    
}