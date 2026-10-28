/* Q78: Find the sum of main diagonal elements for a square matrix.


Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>
int main() {
    int rows, cols, i, j, sum = 0;

    printf("Enter the number of rows and columns in the matrix: ");
    scanf("%d %d", &rows, &cols);

    if (rows != cols) {
        printf("Error: The matrix must be square.\n");
        return 1;
    }

    int matrix[rows][cols];

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sum of main diagonal elements
    for (i = 0; i < rows; i++) {
        sum += matrix[i][i];
    }

    printf("The sum of main diagonal elements is: %d\n", sum);

    return 0;
}