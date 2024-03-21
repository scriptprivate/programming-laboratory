#include <stdio.h>

int main() 
{
    int start, end;
    float sum = 0;
    int count = 0;

    printf("Enter the starting number of the range: ");
    scanf("%d", &start);
    printf("Enter the ending number of the range: ");
    scanf("%d", &end);

    for (int i = start; i <= end; i++) {
        sum += i;
        count++;
    }

    float mean = sum / count;
    printf("Arithmetic mean of numbers in the range [%d, %d] is: %.2f\n", start, end, mean);

    return 0;
}
