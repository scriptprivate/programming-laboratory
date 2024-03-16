#include <stdio.h>

int main() 
{
    float bill, total;

    printf("Enter the amount of the restaurant bill: $");
    scanf("%f", &bill);

    // calculates the bill including 10% waiter fee
    total = bill + (bill * 0.1);

    printf("Total amount to be paid: $%.2f\n", total);

    return 0;
}
