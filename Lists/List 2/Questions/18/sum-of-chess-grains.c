#include <stdio.h>
#include <math.h>

int main() 
{
    int num_squares = 64;

    unsigned long long total_grains = 0;
    unsigned long long current_grains = 1; 

    for (int i = 1; i <= num_squares; i++) {
        total_grains += current_grains; 
        current_grains *= 2; 
    }

    printf("Total number of wheat grains on the chessboard: %llu\n", total_grains);

    return 0;
}
