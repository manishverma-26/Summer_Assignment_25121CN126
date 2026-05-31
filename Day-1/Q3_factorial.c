//Write a program to Find factorial of a number.

#include <stdio.h>

int main() {
    int n;
    float fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("Factorial of %d = %f", n, fact);

    return 0;
}