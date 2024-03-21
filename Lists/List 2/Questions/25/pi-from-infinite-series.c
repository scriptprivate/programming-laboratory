#include <stdio.h>

int main() 
{
    int terms;
    double pi = 0.0;
    int sign = 1;

    printf("Number of terms\tApproximation of π\n");
    
    for (terms = 1; terms <= 1337; terms++) {
        pi += 4.0 / (2 * terms - 1) * sign;
        
        printf("%d\t\t%.10f\n", terms, pi);
        
        sign *= -1;
    }

    return 0;
}
