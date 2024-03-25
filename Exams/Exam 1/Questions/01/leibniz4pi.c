#include <stdio.h>

int main()
{
    int dec;
    double pi = 0.0;
    int sign = 1;
    int denom = 1;
    double term;
    
    scanf("%d", &dec);
    
    for(int i = 1; i <= dec; i++) {
        term = sign / (double)denom;
        pi = pi + term;
        sign *= -1;
        denom += 2;
    }
    
    pi *= 4; 
    
    printf("%f", pi);

    return 0;
}
