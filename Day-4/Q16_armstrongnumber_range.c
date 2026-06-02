//Write a program to Print Armstrong numbers in a range.

#include <stdio.h>
#include <math.h>

int main() {
    int start, end;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    for (int num = start; num <= end; num++) {

        int temp = num;
        int digits = 0;
        int sum = 0;

        if (temp == 0)
            digits = 1;
        else {
            while (temp > 0) {
                digits++;
                temp /= 10;
            }
        }

        temp = num;
        while (temp > 0) {
            int digit = temp % 10;
            sum += (int)pow(digit, digits);
            temp /= 10;
        }
        if (num == 0)
            sum = 0;

        if (sum == num) {
            printf("%d ", num);
        }
    }

    return 0;
}