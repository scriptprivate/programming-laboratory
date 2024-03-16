#include <stdio.h>

int modulus(int n) 
{
    int mask = n >> (sizeof(int) * 8 - 1); // mask will be 0 if n is positive, -1 if negative
    return (n + mask) ^ mask; // if n is negative, this expression calculates the absolute value
}

int main() 
{
    int x;
    printf("Enter an integer: ");
    scanf("%d", &x);

    int absolute = modulus(x);

    printf("The absolute value of %d is %d\n", x, absolute);

    return 0;
}
