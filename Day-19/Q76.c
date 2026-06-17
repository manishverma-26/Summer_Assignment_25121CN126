#include <stdio.h>

int main() {
    int n;
    int a[10][10];
    int sum = 0;

    // Input order of square matrix
    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    // Input matrix elements
    printf("\nEnter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Find sum of principal diagonal
    for (int i = 0; i < n; i++) {
        sum += a[i][i];
    }

    // Display matrix
    printf("\nMatrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // Display diagonal sum
    printf("\nSum of principal diagonal elements = %d\n", sum);

    return 0;
}