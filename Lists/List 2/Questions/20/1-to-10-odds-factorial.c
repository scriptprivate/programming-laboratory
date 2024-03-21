#include <stdio.h>

int factorial(int n) 
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() 
{
    printf("Factorials of odd numbers from 1 to 10:\n");
    
    for (int i = 1; i <= 10; i++) {
        if (i % 2 != 0) {
            printf("Factorial of %d: %d\n", i, factorial(i));
        }
    }

    return 0;
}
