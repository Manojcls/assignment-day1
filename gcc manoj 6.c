#include <stdio.h>

int main() {
    int amount, notes;

    printf("Enter the amount: ");
    scanf("%d", &amount);

    printf("Denomination notes:\n");

    notes = amount / 500;
    if(notes != 0) {
        printf("Rs. 500 notes: %d\n", notes);
    }
    amount = amount % 500;

    notes = amount / 100;
    if(notes != 0) {
        printf("Rs. 100 notes: %d\n", notes);
    }
    amount = amount % 100;

    notes = amount / 50;
    if(notes != 0) {
        printf("Rs. 50 notes: %d\n", notes);
    }
    amount = amount % 50;

    notes = amount / 20;
    if(notes != 0) {
        printf("Rs. 20 notes: %d\n", notes);
    }
    amount = amount % 20;

    notes = amount / 10;
    if(notes != 0) {
        printf("Rs. 10 notes: %d\n", notes);
    }
    amount = amount % 10;

    notes = amount / 5;
    if(notes != 0) {
        printf("Rs. 5 notes: %d\n", notes);
    }
    amount = amount % 5;

    notes = amount / 2;
    if(notes != 0) {
        printf("Rs. 2 coins: %d\n", notes);
    }
    amount = amount % 2;

    notes = amount / 1;
    if(notes != 0) {
        printf("Rs. 1 coins: %d\n", notes);
    }
    printf("192224197");
    return 0;
}
