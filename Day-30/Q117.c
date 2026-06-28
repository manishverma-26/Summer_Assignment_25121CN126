#include <stdio.h>

int main() {
    int roll[10], marks[10], n, i;
    char name[10][50];

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Name: ");
        scanf("%s", name[i]);

        printf("Marks: ");
        scanf("%d", &marks[i]);
    }

    printf("\n----- Student Records -----\n");

    for (i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number: %d\n", roll[i]);
        printf("Name: %s\n", name[i]);
        printf("Marks: %d\n", marks[i]);
    }

    return 0;
}