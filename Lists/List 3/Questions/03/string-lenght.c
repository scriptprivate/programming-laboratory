#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 100

char* read_string();
int calculate_lenght(const char *str);

int main() 
{
    char *str;
    int length;

    str = read_string();
    if (str == NULL) {
        printf("Memory allocation failed. Exiting.\n");
        return 1;
    }

    length = calculate_lenght(str);
    printf("The number of characters in the string: %d\n", length);

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

int calculate_lenght(const char *str) 
{
    int length = 0;
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }
    return length;
}
