#include <stdio.h>

int main() 
{
    int x;
    
    printf("Enter an integer: ");
    scanf("%d", &x);
    
    // bitwise AND operation with 1 to check if the least significant bit is set
    // if LSB is 1, then the number is odd, otherwise even
    printf("%d is %s\n", x, (x & 1) ? "odd" : "even");
    
    return 0;
}
