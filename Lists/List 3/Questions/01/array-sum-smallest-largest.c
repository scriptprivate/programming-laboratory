#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 15

float* read_array(int size);
void find_smallest_largest(float *arr, int size, float *smallest, float *largest);

int main() 
{
    float *arr;
    float smallest, largest, sum;

    arr = read_array(ARRAY_SIZE);

    if (arr == NULL) {
        printf("Memory allocation failed. Exiting.\n");
        return 1;
    }

    find_smallest_largest(arr, ARRAY_SIZE, &smallest, &largest);

    sum = smallest + largest;

    printf("Sum of smallest and largest elements: %.2f\n", sum);

    free(arr);

    return 0;
}

float* read_array(int size) 
{
    float *arr = (float*)malloc(size * sizeof(float));
    if (arr == NULL)
        return NULL;

    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i+1);
        if (scanf("%f", &arr[i]) != 1) {
            free(arr);
            return NULL;
        }
    }

    return arr;
}

void find_smallest_largest(float *arr, int size, float *smallest, float *largest) 
{
    *smallest = *largest = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < *smallest)
            *smallest = arr[i];
        if (arr[i] > *largest)
            *largest = arr[i];
    }
}
