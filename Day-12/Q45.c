#include <stdio.h>

// Function to check palindrome
int isPalindrome(int num) {
    int original = num, reverse = 0, digit;

    while (num != 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    if (original == reverse)
        return 1;
    else
        return 0;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num))
        printf("%d is a Palindrome Number.\n", num);
    else
        printf("%d is not a Palindrome Number.\n", num);

    return 0;
}