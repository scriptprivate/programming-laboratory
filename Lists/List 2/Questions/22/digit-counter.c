#include <stdio.h>

int digit_counter(int num) 
{
    int count = 0;
    int digit;

    while (num != 0) {
        digit = num % 10; 
        if (digit == 7) { 
            count++; 
        }
        num /= 10; 
    }

    return count; 
}

int main() 
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int count = digit_counter(num);

    printf("Number of digits 7 in the integer: %d\n", count);

    return 0;
}
