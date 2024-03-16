#include <stdio.h>

int main() 
{
    int x, y;
    
    // Read two integers
    printf("Enter first integer: ");
    scanf("%d", &x);
    printf("Enter second integer: ");
    scanf("%d", &y);
    
    // determine if the first is a multiple of the second
    int multiple = (x % y == 0) && printf("%d is a multiple of %d\n", x, y);
    (!multiple) && printf("%d is not a multiple of %d\n", x, y);

    return 0;
}