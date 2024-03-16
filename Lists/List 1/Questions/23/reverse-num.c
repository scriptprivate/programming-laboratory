#include <stdio.h>

int main() 
{
    int num, digit1, digit2, digit3;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    // separate the digits
    digit1 = num / 100;
    digit2 = (num / 10) % 10;
    digit3 = num % 10;

    // reconstruct the number in reverse order
    int reversed_num = digit3 * 100 + digit2 * 10 + digit1;

    printf("Reversed number: %d\n", reversed_num);

    return 0;
}
