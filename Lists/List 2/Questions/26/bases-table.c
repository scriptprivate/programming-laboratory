#include <stdio.h>

int main() 
{
    printf("Decimal\tBinary\tOctal\tHexadecimal\n");

    for (int i = 1; i <= 256; i++) {
        printf("%d\t%o\t%X\t%o\n", i, i, i, i);
    }

    return 0;
}
