#include <stdio.h>

// function to calculate successor
int successor(int num) 
{
    return num + 1;
}

// function to calculate predecessor
int predecessor(int num) 
{
    return num - 1;
}

int main() 
{
    int num;
    
    printf("Enter a whole number: ");
    scanf("%d", &num);
    
    printf("Successor: %d\n", successor(num));
    printf("Predecessor: %d\n", predecessor(num));
    
    return 0;
}