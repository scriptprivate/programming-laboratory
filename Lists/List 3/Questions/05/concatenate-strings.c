#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 100

char* read_string();
char* concatenate_strings(const char *str1, const char *str2);

int main() 
{
    char *str1, *str2, *concatenated;

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

    concatenated = concatenate_strings(str1, str2);
    if (concatenated == NULL) {
        printf("Memory allocation failed. Exiting.\n");
        free(str1);
        free(str2);
        return 1;
    }

    printf("Using strcat(): Concatenated string: %s\n", strcat(str1, str2));
    printf("Without using strcat(): Concatenated string: %s\n", concatenated);

    free(str1);
    free(str2);
    free(concatenated);

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

char* concatenate_strings(const char *str1, const char *str2) 
{
    char *concatenated = (char*)malloc((strlen(str1) + strlen(str2) + 1) * sizeof(char));
    if (concatenated == NULL)
        return NULL;

    int i, j;
    for (i = 0; str1[i] != '\0'; i++)
        concatenated[i] = str1[i];
    for (j = 0; str2[j] != '\0'; j++, i++)
        concatenated[i] = str2[j];
    concatenated[i] = '\0';

    return concatenated;
}
