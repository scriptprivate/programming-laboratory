#include <stdio.h>

int main() {
    float x, y, div;

    do {
        printf("Enter the first number: ");
        scanf("%f", &x);

        printf("Enter the second number (not zero): ");
        scanf("%f", &y);

        if (y == 0) {
            printf("Error: The second number cannot be zero. Please try again.\n");
        }
    } while (y == 0);

    div = x / y;
    printf("div of %.2f divided by %.2f is %.2f\n", x, y, div);

    return 0;
}
