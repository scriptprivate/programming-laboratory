#include <stdio.h>

int main() 
{
    int num;

    printf("Enter a whole number: ");
    scanf("%d", &num);

    // calculates the square of the entered number
    int square = num * num;

    printf("The square of %d is: %d\n", num, square);

    return 0;
}
