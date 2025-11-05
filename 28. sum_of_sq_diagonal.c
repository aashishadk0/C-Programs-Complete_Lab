//Program to find the sum of square of diagonal of a matrix.
#include <stdio.h>

void main() {
    int matrix[3][3], i, j, sum = 0;

    // Input elements of the matrix
    printf("Enter elements of 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sum of squares of diagonal elements
    for(i = 0; i < 3; i++) {
        sum += matrix[i][i] * matrix[i][i];
    }

    printf("Sum of squares of diagonal elements: %d\n", sum);
}