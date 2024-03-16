#include <stdio.h>

int main() 
{
    float rate, reais, dollars;

    printf("Enter the current dollar rate: ");
    scanf("%f", &rate);

    printf("Enter the amount of reais to convert: ");
    scanf("%f", &reais);

    // calculates the conversion
    dollars = reais / rate;

    printf("%.2f reais is equal to %.2f dollars.\n", reais, dollars);

    return 0;
}