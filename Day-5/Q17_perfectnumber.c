// Write a program to Check perfect number.

#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    printf("Factors: ");

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
            sum += i;
        }
    }

    printf("\nSum = %d\n", sum);

    if (sum == n)
    {
        printf("The number is Perfect");
    }
    else
    {
        printf("The number is Not Perfect");
    }

    return 0;
}