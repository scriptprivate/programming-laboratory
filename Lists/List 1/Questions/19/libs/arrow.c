#include "arrow.h"
#include <stdio.h>

void arrow() 
{
    int base_width = 5;
    int height = 3;
    int body_height = 6;

    // arrow tip
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < base_width - i; j++) {
            printf(" ");
        }
        for (int k = 0; k < (2 * i) + 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    // arrow body
    for (int i = 0; i < body_height; i++) {
        for (int j = 0; j < base_width; j++) {
            printf(" ");
        }
        printf("*\n");
    }
}
