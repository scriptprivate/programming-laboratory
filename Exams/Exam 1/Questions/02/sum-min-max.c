#include <stdio.h>

int sum_min_max(int count) 
{
    int n, min, max, first = 1;
    
    printf("Enter %d integers:\n", count);

    for (int i = 0; i < count; i++) {
        printf("Enter a number: ");
        scanf("%d", &n);

        if (first) {
            min = max = n;
            first = 0;
        } 
        else {
            if (n < min) {
                min = n;
            }
            if (n > max) {
                max = n;
            }
        }
    }

    return min + max;
}

int main() 
{
    int count, result;

    printf("Enter the number of integers: ");
    scanf("%d", &count);

    if (count < 2) {
        printf("At least two integers are required.\n");
        return 1; // indicating an error
    }

    result = sum_min_max(count);
    
    printf("Sum of the smallest and largest numbers: %d\n", result);

    return 0;
}
