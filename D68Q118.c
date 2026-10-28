/* Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number


Sample Test Cases:
Input 1:
nums1 = [0,3,2,4]
Output 1:
1

Input 2:
nums1 = [1,2,3]
Output 2:
0

Input 3:
nums1 = [0,4,3,1,5]
Output 3:
2

*/
#include <stdio.h>
int main() {
    int nums1[] = {0, 3, 2, 4};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    int missing1 = size1;

    for (int i = 0; i < size1; i++) {
        missing1 ^= i ^ nums1[i];
    }
    printf("%d\n", missing1);

    int nums2[] = {1, 2, 3};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    int missing2 = size2;

    for (int i = 0; i < size2; i++) {
        missing2 ^= i ^ nums2[i];
    }
    printf("%d\n", missing2);

    int nums3[] = {0, 4, 3, 1, 5};
    int size3 = sizeof(nums3) / sizeof(nums3[0]);
    int missing3 = size3;

    for (int i = 0; i < size3; i++) {
        missing3 ^= i ^ nums3[i];
    }
    printf("%d\n", missing3);
    printf("\n");
    return 0;
    
}