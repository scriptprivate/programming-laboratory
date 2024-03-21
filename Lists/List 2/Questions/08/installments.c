#include <stdio.h>

int main() 
{
    float merchandise;
    float down_payment, installment;
    
    printf("Enter the value of the merchandise: ");
    scanf("%f", &merchandise);

    down_payment = merchandise / 3; 
    installment = down_payment; 

    down_payment = (int)down_payment;
    installment = (int)installment;

    float remainder = merchandise - (down_payment + 2 * installment);
    down_payment += remainder;

    printf("Down payment: $%.2f\n", down_payment);
    printf("Installments: $%.2f each\n", installment);

    return 0;
}
