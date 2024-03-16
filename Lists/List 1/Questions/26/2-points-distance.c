#include <stdio.h>
#include <math.h>

int main() 
{
    float x1, y1, x2, y2, distance;

    printf("Enter the coordinates of the first point (x1 y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Enter the coordinates of the second point (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    // calculates distance using the formula
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("Distance between the points: %.2f\n", distance);

    return 0;
}