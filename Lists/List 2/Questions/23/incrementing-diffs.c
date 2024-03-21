#include <stdio.h>

int main() 
{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    // pre-increment: increment n and then use its value
    printf("Pre-incrementing: %d\n", --n);
    printf("After pre-incrementing, n is: %d\n", n);

    // reset n to the original value
    n = n + 1;

    // post-increment: use n's value and then increment it
    printf("Post-incrementing: %d\n", n--);
    printf("After post-incrementing, n is: %d\n", n);

    return 0;
}
