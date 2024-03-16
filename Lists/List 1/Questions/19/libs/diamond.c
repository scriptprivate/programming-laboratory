#include "diamond.h"
#include <stdio.h>

void diamond(int side) 
{
    int i, j, space;

    // upper half of the diamond
    for (i = 1; i <= side; i++) {
        for (space = i; space < side; space++) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    // lower half of the diamond
    for (i = side - 1; i >= 1; i--) {
        for (space = side; space > i; space--) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}
