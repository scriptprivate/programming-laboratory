#include <stdio.h>

int palindrome_check(int num) 
{
    int og_num = num;
    int reversed_num = 0;
    int remainder;

    while (num != 0) {
        remainder = num % 10;
        reversed_num = reversed_num * 10 + remainder;
        num /= 10;
    }

    if (og_num == reversed_num) {
        return 1; 
    } 
    else {
        return 0; 
    }
}

int main() 
{
    int num;

    printf("Enter a five-digit integer: ");
    scanf("%d", &num);

    if (num < 10000 || num > 99999) {
        printf("Error: The entered number must have exactly five digits.\n");
        return 1;
    }

    if (palindrome_check(num)) {
        printf("%d is a palindrome.\n", num);
    } 
    else {
        printf("%d is not a palindrome.\n", num);
    }

    return 0;
}
