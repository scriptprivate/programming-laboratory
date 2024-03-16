#include <stdio.h>
#include <math.h>

int main() 
{
    float x, y, z;
    float arithmetic_mean, geometric_mean;

    printf("Enter three floating point numbers: ");
    scanf("%f %f %f", &x, &y, &z);

    // calculates arithmetic mean
    arithmetic_mean = (x + y + z) / 3.0;

    // calculates geometric mean
    geometric_mean = pow(x * y * z, 1.0 / 3.0);

    printf("Arithmetic mean: %f\n", arithmetic_mean);
    printf("Geometric mean: %f\n", geometric_mean);

    return 0;
}
