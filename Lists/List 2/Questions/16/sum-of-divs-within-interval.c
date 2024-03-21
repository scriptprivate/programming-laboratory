#include <stdio.h>

int main() 
{
    int sum_div_3 = 0;
    int sum_div_5 = 0;

    for (int i = 0; i <= 200; i++) {
        if (i <= 100 && i % 3 == 0) {
            sum_div_3 += i;
        } 
        else if (i > 100 && i % 5 == 0) {
            sum_div_5 += i;
        }
    }

    printf("Sum of numbers divisible by 3 in the interval [0, 100]: %d\n", sum_div_3);
    printf("Sum of numbers divisible by 5 in the interval (100, 200]: %d\n", sum_div_5);

    return 0;
}
