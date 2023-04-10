
#include <stdio.h>

int main() {
    int mat1[2][2] = {{1, 2}, {5, 3}};
    int mat2[2][2] = {{2, 3}, {4, 1}};
    int result[2][2] = {{0, 0}, {0, 0}};

    // Get dimensions of matrices
    int m1 = 2, n1 = 2;
    int m2 = 2, n2 = 2;

    if (n1 != m2) {
        printf("Cannot multiply matrices with these dimensions");
        return 0;
    }

    // Perform matrix multiplication
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            for (int k = 0; k < n1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    // Print the result matrix
    printf("Mat Mul =\n");
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
