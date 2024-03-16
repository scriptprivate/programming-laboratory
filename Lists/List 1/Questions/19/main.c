#include <stdio.h>
#include "libs/arrow.h"
#include "libs/diamond.h"
#include "libs/ellipse.h"
#include "libs/rectangle.h"

int main() {

    rectangle(8, 9);
    printf("\n");
    ellipse(11, 11);
    printf("\n");
    arrow();
    printf("\n");
    diamond(4);
    return 0;
}
