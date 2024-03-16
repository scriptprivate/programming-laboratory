#include <stdio.h>

typedef struct {
    char symbol;
    const char *name;
} CharacterInfo;

void integerEq(char symbol, const char *name) 
{
    printf("%s: %d\n", name, symbol);
}

void characterInfo(const CharacterInfo *characters, int numCharacters) 
{
    for (int i = 0; i < numCharacters; ++i) {
        integerEq(characters[i].symbol, characters[i].name);
    }
}

int main() 
{
    printf("Integer equivalents of characters:\n");

    // define character information
    CharacterInfo characters[] = {
        {'A', "Uppercase A"},
        {'B', "Uppercase B"},
        {'C', "Uppercase C"},
        {'a', "Lowercase a"},
        {'b', "Lowercase b"},
        {'c', "Lowercase c"},
        {'0', "Digit 0"},
        {'1', "Digit 1"},
        {'2', "Digit 2"},
        {'$', "Dollar sign"},
        {'*', "Asterisk"},
        {'+', "Plus"},
        {'/', "Slash"},
        {' ', "Whitespace (Space)"}
    };

    // print character information
    characterInfo(characters, sizeof(characters) / sizeof(characters[0]));

    return 0;
}