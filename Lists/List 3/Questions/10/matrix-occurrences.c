#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MATRIX_SIZE 3

void generate_matrix(int matrix[][MATRIX_SIZE]);
int get_user_input();
int count_occurrences(const int matrix[][MATRIX_SIZE], int value);

int main() 
{
    int matrix[MATRIX_SIZE][MATRIX_SIZE];
    int x;

    srand(time(NULL));

    generate_matrix(matrix);

    x = get_user_input();

    int occurrences = count_occurrences(matrix, x);

    printf("Number of occurrences of %d in the matrix: %d\n", x, occurrences);

    return 0;
}

void generate_matrix(int matrix[][MATRIX_SIZE]) 
{
    printf("Generated Matrix:\n");
    for (int i = 0; i < MATRIX_SIZE; i++) {
        for (int j = 0; j < MATRIX_SIZE; j++) {
            matrix[i][j] = rand() % 10; 
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int get_user_input() 
{
    int value;
    printf("Enter an integer value: ");
    if (scanf("%d", &value) != 1) {
        printf("Error: Invalid input. Exiting.\n");
        exit(1);
    }
    return value;
}

int count_occurrences(const int matrix[][MATRIX_SIZE], int value) 
{
    int count = 0;
    for (int i = 0; i < MATRIX_SIZE; i++) {
        for (int j = 0; j < MATRIX_SIZE; j++) {
            if (matrix[i][j] == value) {
                count++;
            }
        }
    }
    return count;
}
