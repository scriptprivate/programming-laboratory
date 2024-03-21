#include <stdio.h>

int main() 
{
    int celsius;

    printf("Celsius\tFahrenheit\n");
    for (celsius = 10; celsius <= 100; celsius += 10) {
        double fahrenheit = (celsius * 9.0 / 5.0) + 32;
        printf("%d\t%.2f\n", celsius, fahrenheit);
    }

    return 0;
}
