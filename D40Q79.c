/* Q79: Perform diagonal traversal of a matrix.
   Sample Test Cases:
   Input 1:
   3 3
   1 2 3
   4 5 6
   7 8 9
   Output 1:
   1 2 4 7 5 3 6 8 9
*/
#include <stdio.h>

int main() {
    int rows, cols, i, j;

    printf("Enter the number of rows and columns in the matrix: ");
    if (scanf("%d %d", &rows, &cols) != 2) return 0;

    int matrix[rows][cols];

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Diagonal traversal of the matrix is:\n");

    int first = 1;                                 /* controls spaces */
    int maxSum = rows + cols - 2;                  /* last diagonal index */

    for (int d = 0; d <= maxSum; ++d) {
        /* row limits for the current diagonal */
        int rStart = (d < cols) ? 0 : d - cols + 1;
        int rEnd   = (d < rows) ? d : rows - 1;

        if (d % 2 == 0) {                          /* even diagonal → bottom‑to‑top */
            for (i = rEnd; i >= rStart; --i) {
                j = d - i;
                if (!first) printf(" ");
                printf("%d", matrix[i][j]);
                first = 0;
            }
        } else {                                   /* odd diagonal → top‑to‑bottom */
            for (i = rStart; i <= rEnd; ++i) {
                j = d - i;
                if (!first) printf(" ");
                printf("%d", matrix[i][j]);
                first = 0;
            }
        }
    }
    printf("\n");
    return 0;
}
