#include <stdio.h>

int main()
{
    float x;

    printf("Enter a real value: ");
    scanf("%f", &x);

    printf("Value with one decimal: %.1f\n", x);

    return 0;
}