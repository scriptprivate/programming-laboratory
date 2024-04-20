#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define ARRAY_SIZE 3
#define MAX_RANDOM_NUMBER 19

int* gen_rand_nums(int size);
float calc_arithmetic_mean(const int *numbers, int size);
float calc_geometric_mean(const int *numbers, int size);

int main() 
{
    int *numbers;
    float arithmetic_mean, geometric_mean;

    srand(time(NULL));

    numbers = gen_rand_nums(ARRAY_SIZE);
    if (numbers == NULL) {
        printf("Memory allocation failed. Exiting.\n");
        return 1;
    }

    arithmetic_mean = calc_arithmetic_mean(numbers, ARRAY_SIZE);
    geometric_mean = calc_geometric_mean(numbers, ARRAY_SIZE);

    printf("Arithmetic Mean: %.2f\n", arithmetic_mean);
    printf("Geometric Mean: %.2f\n", geometric_mean);

    free(numbers);

    return 0;
}

int* gen_rand_nums(int size) 
{
    int *numbers = (int*)malloc(size * sizeof(int));
    if (numbers == NULL)
        return NULL;

    printf("Generated numbers: ");
    for (int i = 0; i < size; i++) {
        numbers[i] = rand() % (MAX_RANDOM_NUMBER + 1);
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return numbers;
}

float calc_arithmetic_mean(const int *numbers, int size) 
{
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }
    return (float)sum / size;
}

float calc_geometric_mean(const int *numbers, int size) 
{
    long long product = 1;
    for (int i = 0; i < size; i++) {
        product *= numbers[i];
    }
    return pow(product, 1.0 / size);
}
