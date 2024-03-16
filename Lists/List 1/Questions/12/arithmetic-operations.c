#include <stdio.h>

// function prototypes
int sum(int x, int y);
int product(int x, int y);
int difference(int x, int y);
int quotient(int x, int y);
int remain(int x, int y);

int main() 
{
    int x, y;
    
    printf("Enter the first number: ");
    if (scanf("%d", &x) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }
    
    printf("Enter the second number: ");
    if (scanf("%d", &y) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }
    
    // perform arithmetic operations and print results
    printf("Sum: %d\n", sum(x, y));
    printf("Product: %d\n", product(x, y));
    printf("Difference: %d\n", difference(x, y));
    
    // check if the second number is not 0 to avoid division by zero
    if (y != 0) {
        printf("Quotient: %d\n", quotient(x, y));
        printf("Remainder: %d\n", remain(x, y));
    } 
    else {
        printf("Cannot divide by zero.\n");
    }
    
    return 0;
}

int sum(int x, int y) 
{
    return x + y;
}

int product(int x, int y) 
{
    return x * y;
}

int difference(int x, int y) 
{
    return x - y;
}

int quotient(int x, int y) 
{
    return x / y;
}

int remain(int x, int y) 
{
    return x % y;
}
