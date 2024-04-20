#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 100

char* read_string();
char* reverse_string(const char *str);

int main() 
{
    char *str, *reversed;

    str = read_string();
    if (str == NULL) {
        printf("Memory allocation failed. Exiting.\n");
        return 1;
    }

    reversed = reverse_string(str);
    if (reversed == NULL) {
        printf("Memory allocation failed. Exiting.\n");
        free(str);
        return 1;
    }

    printf("The string in reverse order: %s\n", reversed);

    free(str);
    free(reversed);

    return 0;
}

char* read_string() 
{
    char *str = (char*)malloc(MAX_LENGTH * sizeof(char));
    if (str == NULL)
        return NULL;

    printf("Enter a string: ");
    fgets(str, MAX_LENGTH, stdin);

    if (strchr(str, '\n') != NULL)
        str[strlen(str) - 1] = '\0';

    return str;
}

char* reverse_string(const char *str) 
{
    int length = strlen(str);
    char *reversed = (char*)malloc((length + 1) * sizeof(char));
    if (reversed == NULL)
        return NULL;

    for (int i = length - 1, j = 0; i >= 0; i--, j++) {
        reversed[j] = str[i];
    }
    reversed[length] = '\0';

    return reversed;
}
