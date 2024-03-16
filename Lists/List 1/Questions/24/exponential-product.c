#include <stdio.h>

int main() 
{
    int x, n, product = 1;
    
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    // calculate x * 2
    int temp = x << 1;  // equivalent to x * 2
    
    // calculate (x * 2) ^ n 
    for (int i = 0; i < n; i++) {
        product *= temp;
    }
    
    printf("The result of (%d * 2)^%d is: %d\n", x, n, product);
    
    return 0;
}