#include <stdio.h>

int main() {
    int n, i, j, distinct = 1;
    int matrix[10][10];

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    // Reading the matrix
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Checking diagonal elements for distinctness
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                distinct = 0;
                break;
            }
        }
        if (distinct == 0)
            break;
    }

    if (distinct)
        printf("All diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are not distinct.\n");

    return 0;
}
