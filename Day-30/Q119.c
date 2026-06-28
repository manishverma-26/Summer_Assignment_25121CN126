#include <stdio.h>

int main() {
    int id[10], salary[10], n, i;
    char name[10][50];

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &id[i]);

        printf("Name: ");
        scanf("%s", name[i]);

        printf("Salary: ");
        scanf("%d", &salary[i]);
    }

    printf("\n----- Employee Records -----\n");

    for (i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("Employee ID: %d\n", id[i]);
        printf("Name: %s\n", name[i]);
        printf("Salary: %d\n", salary[i]);
    }

    return 0;
}