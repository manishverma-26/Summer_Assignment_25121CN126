#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find string length
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    // Display length
    printf("Length of the string = %d\n", length);

    return 0;
}