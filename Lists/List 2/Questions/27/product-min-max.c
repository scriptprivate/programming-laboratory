#include <stdio.h>

int product_min_max() 
{
    int n, min, max, first = 1;
    
    printf("Enter integers (enter a negative and even number to exit): \n");

    while (1) {
        printf("Enter a number: ");
        scanf("%d", &n);

        if (n < 0 && n % 2 == 0) {
            break;
        }

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

    return min * max;
}

int main() 
{
    int result = product_min_max();
    
    printf("Product of the smallest and largest numbers: %d\n", result);

    return 0;
}
