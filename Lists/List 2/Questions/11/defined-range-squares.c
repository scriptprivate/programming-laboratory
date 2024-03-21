#include <stdio.h>

int main() 
{
    int start, end;
    
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);
    
    printf("Squares of integer multiples of 4 within the range of %d to %d:\n", start, end);
    
    if (start <= end) {
        for (int i = start; i <= end; i++) {
            if (i % 4 == 0) {
                printf("%d^2 = %d\n", i, i * i);
            }
        }
    } 
    else {
        for (int i = start; i >= end; i--) {
            if (i % 4 == 0) {
                printf("%d^2 = %d\n", i, i * i);
            }
        }
    }
    
    return 0;
}
