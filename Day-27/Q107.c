#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float basic, hra, da, gross;
};

int main() {
    struct Employee emp[10];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &emp[i].id);

        printf("Name: ");
        scanf("%s", emp[i].name);

        printf("Basic Salary: ");
        scanf("%f", &emp[i].basic);

        emp[i].hra = emp[i].basic * 0.20;
        emp[i].da = emp[i].basic * 0.10;
        emp[i].gross = emp[i].basic + emp[i].hra + emp[i].da;
    }

    printf("\n----- Salary Details -----\n");

    for (i = 0; i < n; i++) {
        printf("\nEmployee ID: %d\n", emp[i].id);
        printf("Name: %s\n", emp[i].name);
        printf("Basic Salary: %.2f\n", emp[i].basic);
        printf("HRA: %.2f\n", emp[i].hra);
        printf("DA: %.2f\n", emp[i].da);
        printf("Gross Salary: %.2f\n", emp[i].gross);
    }

    return 0;
}