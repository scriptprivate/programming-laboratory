#include <stdio.h>

int main() 
{
    int start, end, sum = 0;

    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Sum of even numbers within the range of %d to %d:\n", start, end);

    if (start <= end) {
        for (int i = start; i <= end; i++) {
            if (i % 2 == 0) {
                sum += i;
            }
        }
    } 
    else {
        for (int i = start; i >= end; i--) {
            if (i % 2 == 0) {
                sum += i;
            }
        }
    }

    printf("Sum = %d\n", sum);

    return 0;
}
