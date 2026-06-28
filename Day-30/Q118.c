#include <stdio.h>

int main() {
    int id[10], n, i;
    char title[10][50], author[10][50];

    printf("Enter number of books: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of Book %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &id[i]);

        printf("Book Title: ");
        scanf("%s", title[i]);

        printf("Author Name: ");
        scanf("%s", author[i]);
    }

    printf("\n----- Library Records -----\n");

    for (i = 0; i < n; i++) {
        printf("\nBook %d\n", i + 1);
        printf("Book ID: %d\n", id[i]);
        printf("Title: %s\n", title[i]);
        printf("Author: %s\n", author[i]);
    }

    return 0;
}