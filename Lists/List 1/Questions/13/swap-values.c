#include <stdio.h>

// function to swap the values of two integers
void swap(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() 
{
    int A, B;

    printf("Enter the value for A: ");
    scanf("%d", &A);
    printf("Enter the value for B: ");
    scanf("%d", &B);

    // swap values
    swap(&A, &B);

    printf("After exchanging values:\n");
    printf("A = %d\n", A);
    printf("B = %d\n", B);

    return 0;
}
