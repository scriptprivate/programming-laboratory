#include <stdio.h>
#include <math.h>

int main() 
{
    int leg1, leg2, hypotenuse;
    
    printf("Pythagorean triples not exceeding 500:\n");
    
    for (leg1 = 1; leg1 <= 500; leg1++) {
        for (leg2 = leg1; leg2 <= 500; leg2++) {
            hypotenuse = leg1 * leg1 + leg2 * leg2;
            hypotenuse = sqrt(hypotenuse);
            
            if (hypotenuse * hypotenuse == leg1 * leg1 + leg2 * leg2 && hypotenuse <= 500) {
                printf("%d, %d, %d\n", leg1, leg2, hypotenuse);
            }
        }
    }
    
    return 0;
}
