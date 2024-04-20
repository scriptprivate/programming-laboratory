#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 100

int* gen_rand_array(int size, int range_min, int range_max);
void print_arr(const int arr[], int size);
void selection_sort(int arr[], int size);
void bubble_sort(int arr[], int size);
void swap(int *a, int *b);

int main() 
{
    int *arr;
    int range_min, range_max;

    printf("Enter the minimum value of the range: ");
    scanf("%d", &range_min);
    printf("Enter the maximum value of the range: ");
    scanf("%d", &range_max);

    arr = gen_rand_array(ARRAY_SIZE, range_min, range_max);
    if (arr == NULL) {
        printf("Memory allocation failed. Exiting.\n");
        return 1;
    }

    printf("Random Array (Before Sorting):\n");
    print_arr(arr, ARRAY_SIZE);

    selection_sort(arr, ARRAY_SIZE);
    printf("Sorted Array (Selection Sort):\n");
    print_arr(arr, ARRAY_SIZE);

    bubble_sort(arr, ARRAY_SIZE);
    printf("Sorted Array (Bubble Sort):\n");
    print_arr(arr, ARRAY_SIZE);

    free(arr);

    return 0;
}

int* gen_rand_array(int size, int range_min, int range_max) 
{
    int *arr = (int*)malloc(size * sizeof(int));
    if (arr == NULL)
        return NULL;

    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % (range_max - range_min + 1) + range_min;
    }

    return arr;
}

void print_arr(const int arr[], int size) 
{
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void selection_sort(int arr[], int size) 
{
    int min_index;
    for (int i = 0; i < size - 1; i++) {
        min_index = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        if (min_index != i) {
            swap(&arr[i], &arr[min_index]);
        }
    }
}

void bubble_sort(int arr[], int size) 
{
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void swap(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
