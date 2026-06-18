#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    int a[10][10], b[10][10], mul[10][10];

    // Input dimensions
    printf("Enter rows and columns of First Matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of Second Matrix: ");
    scanf("%d %d", &r2, &c2);

    // Check if multiplication is possible
    if (c1 != r2) {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }

    // Input first matrix
    printf("\nEnter elements of First Matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input second matrix
    printf("\nEnter elements of Second Matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Initialize result matrix
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            mul[i][j] = 0;
        }
    }

    // Multiply matrices
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Display result
    printf("\nProduct of the matrices:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}