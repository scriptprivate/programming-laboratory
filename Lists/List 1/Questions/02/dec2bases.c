#include <stdio.h>
#include <string.h>

void reverse(char* str) 
{
    int length = strlen(str);
    int i, j = length - 1;
    char temp;

    for (i = 0; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int dec2hex(int dec, char* hex)
{
    int quot, rem;  // quotient and remainder 
    int i = 0;

    quot = dec;

    while (quot != 0) {
        rem = quot % 16;

        if (rem < 10)
            hex[i++] = rem + '0';  // convert integer to ASCII character
        else
            hex[i++] = rem - 10 + 'A'; // convert integer to ASCII character

        quot = quot / 16;
    }

    if (i == 0) {
        hex[i++] = '0'; // if the number is 0, then the hex representation is "0"
    }

    hex[i] = '\0'; // null-terminate the string
    reverse(hex); // reverse the generated hexadecimal string to start from the most significant digit
    return i; // return the length of the hexadecimal string
}

int dec2octa(int dec)
{
    int octa = 0, count = 1;

    while (dec != 0) {
        int rem = dec % 8;

        octa += rem * count;

        count = count * 10;
        dec /= 8;
    }

    return octa; // return the octal value
}

int main()
{
    int x;
    char hex[100];

    printf("Enter with value: ");
    scanf("%d", &x);

    int hex_len = dec2hex(x, hex);
    printf("Hexadecimal: %s", hex);

    printf("\nOctal: %d\n", dec2octa(x));

    return 0;
}
