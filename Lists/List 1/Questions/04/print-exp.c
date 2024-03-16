#include <stdio.h>

int main() 
{
    int x;

    printf("Enter an integer value: ");
    scanf("%d", &x);

    printf("Triple of %d is %d\n", x, x * 3);
    printf("Square of %d is %d\n", x, x * x);
    printf("Half of %d is %d\n", x, x / 2);

    return 0;
}
