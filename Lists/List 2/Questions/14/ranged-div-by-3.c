#include <stdio.h>

int main() 
{
    int start, end, count = 0;

    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Quantity of numbers divisible by 3 within the range of %d to %d:\n", start, end);

    if (start <= end) {
        for (int i = start; i <= end; i++) {
            if (i % 3 == 0) {
                count++;
            }
        }
    } 
    else {
        for (int i = start; i >= end; i--) {
            if (i % 3 == 0) {
                count++;
            }
        }
    }

    printf("Quantity: %d\n", count);

    return 0;
}