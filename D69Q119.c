/* Q119: Write a program to take an integer array as input. Only one element will be repeated. 
Print the repeated element. Try to find the result in one single iteration.


Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/
#include <stdio.h>
int main() {
    int nums1[] = {1, 3, 3, 4};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    int repeated1 = -1;

    for (int i = 0; i < size1; i++) {
        if (nums1[abs(nums1[i])] < 0) {
            repeated1 = abs(nums1[i]);
            break;
        }
        nums1[abs(nums1[i])] = -nums1[abs(nums1[i])];
    }
    printf("%d\n", repeated1);

    int nums2[] = {1, 2, 2};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    int repeated2 = -1;

    for (int i = 0; i < size2; i++) {
        if (nums2[abs(nums2[i])] < 0) {
            repeated2 = abs(nums2[i]);
            break;
        }
        nums2[abs(nums2[i])] = -nums2[abs(nums2[i])];
    }
    printf("%d\n", repeated2);

    int nums3[] = {0, 4, 1, 1, 5};
    int size3 = sizeof(nums3) / sizeof(nums3[0]);
    int repeated3 = -1;

    for (int i = 0; i < size3; i++) {
        if (nums3[abs(nums3[i])] < 0) {
            repeated3 = abs(nums3[i]);
            break;
        }
        nums3[abs(nums3[i])] = -nums3[abs(nums3[i])];
    }
    printf("%d\n", repeated3);

    return 0;
    
}