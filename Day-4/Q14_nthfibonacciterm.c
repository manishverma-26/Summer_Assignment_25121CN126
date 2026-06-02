//Write a program to Find nth Fibonacci term. 

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a = 0, b = 1, next;

    if (n == 0) {
        printf("%d", a);
        return 0;
    }

    for (int i = 2; i <= n; i++) {
        next = a + b;
        a = b;
        b = next;
    }

    printf("%d", b);

    return 0;
}