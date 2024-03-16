#include "rectangle.h"
#include <stdio.h>

void rectangle(int base, int height) 
{
    // top side (base) of the rectangle
    for (int i = 0; i < base; i++) {
        printf("* ");
    }
    printf("\n");

    // height - 2 rows (excluding top and bottom rows)
    for (int i = 0; i < height - 2; i++) {
        printf("*");
        for (int j = 0; j < base * 2 - 3; j++) {
            printf(" ");
        }
        printf("*\n");
    }

    // bottom side (base) of the rectangle
    for (int i = 0; i < base; i++) {
        printf("* ");
    }
    printf("\n");
}
