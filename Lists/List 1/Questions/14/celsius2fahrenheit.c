#include <stdio.h>

int main() 
{
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // convert Celsius to Fahrenheit using the formula
    fahrenheit = (9 * celsius + 160) / 5;

    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}
