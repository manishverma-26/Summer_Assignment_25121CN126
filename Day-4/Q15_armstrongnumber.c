//Write a program to Check Armstrong number.

#include <stdio.h>
#include <math.h>

int main() {
    int n, original, digit, digits = 0;
    int sum = 0;
    
    printf("Enter the number : ");
    scanf("%d", &n);

    original = n;

    int temp = n;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    while (temp > 0) {
        digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    if (sum == original){
        printf("Armstrong Number");
    }
    else{
        printf("Not Armstrong Number");
    }

    return 0;
}