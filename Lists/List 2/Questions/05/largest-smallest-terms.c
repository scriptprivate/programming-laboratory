#include <stdio.h>

int main() {
    int n, largest, smallest;

    printf("Enter a value (0 to exit): ");
    scanf("%d", &n);

    largest = smallest = n;

    while (n != 0) {
        if (n > largest) {
            largest = n;
        }
        if (n < smallest) {
            smallest = n;
        }

        printf("Enter a value (0 to exit): ");
        scanf("%d", &n);
    }

    printf("Largest term: %d\n", largest);
    printf("Smallest term: %d\n", smallest);

    return 0;
}
