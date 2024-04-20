#include <stdio.h>
#include <stdlib.h>

#define MATRIX_SIZE 3

void read_matrix(int matrix[][MATRIX_SIZE]);
void display_main_diagonal(const int matrix[][MATRIX_SIZE]);

int main() 
{
    int matrix[MATRIX_SIZE][MATRIX_SIZE];
    
    read_matrix(matrix);
    
    display_main_diagonal(matrix);
    
    return 0;
}

void read_matrix(int matrix[][MATRIX_SIZE]) 
{
    printf("Enter the elements of the %dx%d matrix:\n", MATRIX_SIZE, MATRIX_SIZE);
    for (int i = 0; i < MATRIX_SIZE; i++) {
        for (int j = 0; j < MATRIX_SIZE; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            if (scanf("%d", &matrix[i][j]) != 1) {
                printf("Error: Invalid input. Exiting.\n");
                exit(1);
            }
        }
    }
}

void display_main_diagonal(const int matrix[][MATRIX_SIZE]) 
{
    printf("Main Diagonal Elements:\n");
    for (int i = 0; i < MATRIX_SIZE; i++) {
        printf("%d ", matrix[i][i]);
    }
    printf("\n");
}
