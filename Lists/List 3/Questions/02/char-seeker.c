#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 100

char* read_string();
char read_char();
int contains_char(const char *str, char ch);

int main() 
{
    char *str;
    char ch;

    str = read_string();
    if (str == NULL) {
        printf("Memory allocation failed. Exiting.\n");
        return 1;
    }

    ch = read_char();

    if (contains_char(str, ch))
        printf("The string contains the character '%c'.\n", ch);
    else
        printf("The string does not contain the character '%c'.\n", ch);

    free(str);

    return 0;
}

char* read_string() 
{
    char *str = (char*)malloc(MAX_LENGTH * sizeof(char));
    if (str == NULL)
        return NULL;

    printf("Enter a string: ");
    fgets(str, MAX_LENGTH, stdin);

    return str;
}

char read_char() 
{
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    return ch;
}

int contains_char(const char *str, char ch) 
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch)
            return 1;
    }
    return 0;
}
