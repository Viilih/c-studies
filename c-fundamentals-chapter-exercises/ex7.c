// ...existing code...
#include <stdio.h>

int main(void) {
    int amount;

    printf("Enter a dollar amount: ");
    if (scanf("%d", &amount) != 1 || amount < 0) {
        fprintf(stderr, "Invalid input\n");
        return 1;
    }

    int twenties = amount / 20;
    amount -= twenties * 20;

    int tens = amount / 10;
    amount -= tens * 10;

    int fives = amount / 5;
    amount -= fives * 5;

    int ones = amount;

    printf("$20 bills: %d\n$10 bills: %d\n $5 bills: %d\n $1 bills: %d\n",
           twenties, tens, fives, ones);

    return 0;
}
// ...existing code...