#include <stdio.h>

// Function to check Armstrong number
int isArmstrong(int num) {
    int original = num, digit, sum = 0;

    while (num != 0) {
        digit = num % 10;
        sum += digit * digit * digit;
        num /= 10;
    }

    if (sum == original)
        return 1;
    else
        return 0;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("%d is an Armstrong Number.\n", num);
    else
        printf("%d is not an Armstrong Number.\n", num);

    return 0;
}