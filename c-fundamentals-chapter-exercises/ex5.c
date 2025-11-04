#include <stdio.h>

int main(){
     int xValue;

    printf("Enter an integer value for x: ");
    if (scanf("%d", &xValue) != 1) {
        fprintf(stderr, "Invalid input\n");
        return 1;
    }

    int x2 = xValue * xValue;
    int x3 = x2 * xValue;
    int x4 = x3 * xValue;
    int x5 = x4 * xValue;

    int result = 3 * x5 + 2 * x4 - 5 * x3 - x2 + 7 * xValue - 6;

    printf("Result: %d\n", result);
    return 0;
}