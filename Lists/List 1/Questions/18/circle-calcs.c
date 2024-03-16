#include <stdio.h>

#define PI 3.14159

int main() 
{
    double r;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &r);

    printf("Diameter: %.5f\n", (2 * r));
    printf("Circumference: %.2f\n", 2 * (PI * r));
    printf("Area: %.5f\n", (PI * r * r));

    return 0;
}
