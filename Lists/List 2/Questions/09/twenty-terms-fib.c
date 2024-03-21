#include <stdio.h>

int main() 
{
    int n = 20; 
    int first = 1, second = 1, next;

    printf("Fibonacci Series up to the twentieth term:\n");
    printf("%d, %d, ", first, second);

    for (int i = 3; i <= n; i++) {
        next = first + second;
        printf("%d, ", next);
        first = second;
        second = next;
    }

    printf("\n");

    return 0;
}
