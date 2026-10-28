/* Q111: Write a program to take an integer array arr and an integer k as inputs.
 The task is to find the first negative integer in each subarray of size k 
 moving from left to right. If no negative exists in a window, print "0" for that window.
 Print the results separated by spaces as output.


Sample Test Cases:
Input 1:
arr[] = [-8, 2, 3, -6, 10], k = 2
Output 1:
-8 0 -6 -6

Input 2:
arr[] = [12, -1, -7, 8, -15, 30, 16, 28], k = 3
Output 2:
-1 -1 -7 -15 -15 0

Input 3:
arr[] = [12, 1, 3, 5], k = 3
Output 3:
0 0

*/

#include <stdio.h>
int main() {
    int arr[100], n, k;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the value of k: ");
    scanf("%d", &k);

    printf("First negative integers in each subarray of size %d: ", k);
    for (int i = 0; i <= n - k; i++) {
        int first_negative = 0; // Default to 0 if no negative is found
        for (int j = 0; j < k; j++) {
            if (arr[i + j] < 0) {
                first_negative = arr[i + j];
                break;
            }
        }
        printf("%d ", first_negative);
    }
    printf("\n");
    return 0;
}