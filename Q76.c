#include <stdio.h>

int main() {
    int n, i, j, flag = 1;
    int matrix[10][10];

    printf("Enter the size of square matrix: ");
    scanf("%d", &n);

    // Reading the matrix
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Checking symmetry
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
            break;
    }

    if (flag)
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is not symmetric.\n");

    return 0;
}
