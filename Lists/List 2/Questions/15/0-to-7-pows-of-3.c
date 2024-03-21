#include <stdio.h>

int main() 
{
    int base = 3;
    int exponent;

    printf("Powers of %d from 0 to 7:\n", base);

    for (exponent = 0; exponent <= 7; exponent++) {
        int result = 1;
        for (int i = 0; i < exponent; i++) {
            result *= base;
        }
        printf("%d ^ %d = %d\n", base, exponent, result);
    }

    return 0;
}
