#include <stdio.h>

struct Ticket {
    char name[50];
    int seats;
};

int main() {
    struct Ticket t;
    int availableSeats = 50;

    printf("Enter Passenger Name: ");
    scanf("%s", t.name);

    printf("Enter number of seats to book: ");
    scanf("%d", &t.seats);

    if (t.seats <= availableSeats) {
        availableSeats -= t.seats;

        printf("\n===== TICKET BOOKED =====\n");
        printf("Passenger Name : %s\n", t.name);
        printf("Seats Booked   : %d\n", t.seats);
        printf("Seats Left     : %d\n", availableSeats);
    } else {
        printf("\nSorry! Only %d seats are available.\n", availableSeats);
    }

    return 0;
}