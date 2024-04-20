#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 100

char* read_string();
int compare_strings(const char *str1, const char *str2);

int main() 
{
    char *str1, *str2;

    str1 = read_string();
    if (str1 == NULL) {
        printf("Memory allocation failed. Exiting.\n");
        return 1;
    }

    str2 = read_string();
    if (str2 == NULL) {
        printf("Memory allocation failed. Exiting.\n");
        free(str1);
        return 1;
    }

    if (strcmp(str1, str2) == 0)
        printf("Using strcmp(): The strings are equal.\n");
    else
        printf("Using strcmp(): The strings are not equal.\n");

    if (compare_strings(str1, str2))
        printf("Without using strcmp(): The strings are equal.\n");
    else
        printf("Without using strcmp(): The strings are not equal.\n");

    free(str1);
    free(str2);

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

int compare_strings(const char *str1, const char *str2) 
{
    int i = 0;
    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i])
            return 0;
        i++;
    }
    return 1;
}
