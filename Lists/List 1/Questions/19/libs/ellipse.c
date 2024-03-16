#include "ellipse.h"
#include <stdio.h>

// implementation of fabs function to compute absolute value
double own_fabs(double x) 
{
    return x < 0 ? -x : x;
}

// function to check if a point (x, y) lies on the boundary of the ellipse
int ellipseBoundary(int x, int y, int width, int height) 
{
    double h = (width - 1) / 2.0; // x-coordinate of ellipse center
    double k = (height - 1) / 2.0; // y-coordinate of ellipse center

    double a = (width - 1) / 2.0; // semi-major axis
    double b = (height - 1) / 2.0; // semi-minor axis

    // the ellipse equation
    double result = ((x - h) * (x - h)) / (a * a) + ((y - k) * (y - k)) / (b * b);

    // check if the result is close to 1 (on the boundary of the ellipse)
    return own_fabs(result - 1) < 0.1;
}

// function to draw the ellipse
void ellipse(int width, int height) 
{
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            if (ellipseBoundary(x, y, width, height)) {
                printf("*");
            } 
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}
