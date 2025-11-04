#include <stdio.h>

int main(){
    int dollars;
    float cents, total;

    printf("Enter dollar amount: ");
    scanf("%d", &dollars);
    printf("Enter cent amount:");
    scanf("%f", &cents);

    total = dollars + (cents / 100.0f);

    float totalPlusTax = total * 1.05f;

    printf("Total amount: $%.2f\n", total);
    printf("Total amount with tax: $%.2f\n", totalPlusTax);


    return 0;
}