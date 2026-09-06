/* Q56: Read and print elements of a one-dimensional array.


Sample Test Cases:
Input 1:
3
10 20 30
Output 1:
10 20 30

Input 2:
5
1 2 3 4 5
Output 2:
1 2 3 4 5

*/
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n]; // Declare an array of size n
    
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read elements into the array
    }
    
    printf("You entered: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]); // Print the elements of the array
    }
    printf("\n");
    
    return 0;
}