#include <stdio.h>

int main() 
{
    int start = 15;
    int end = 90;
    
    printf("Squares of integer multiples of 4 within the range of %d to %d:\n", start, end);
    
    for (int i = start; i <= end; i++) {
        if (i % 4 == 0) {
            printf("%d^2 = %d\n", i, i * i);
        }
    }
    
    return 0;
}
