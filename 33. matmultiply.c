//WAP to multiply two matrix.
#include <stdio.h>

void main() {
    int m1[3][3], m2[3][3], product[3][3], i, j, k;

    // Input elements of the first matrix
    printf("Enter elements of 3x3 matrix 1:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &m1[i][j]);
        }
    }

    // Input elements of the second matrix
    printf("Enter elements of 3x3 matrix 2:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &m2[i][j]);
        }
    }

    // Initialize product matrix
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            product[i][j] = 0;
        }
    }

    // Calculate product
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            for(k = 0; k < 3; k++) {
                product[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    // Display product
    printf("Product of matrices:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
}
