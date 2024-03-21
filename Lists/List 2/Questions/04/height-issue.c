#include <stdio.h>

int main() 
{
    int jose_height = 150; 
    int pedro_height = 110; 
    int jose_Growth_Rate = 2; 
    int pedro_Growth_Rate = 3; 
    int years = 0;

    while (pedro_height <= jose_height) {
        jose_height += jose_Growth_Rate;
        pedro_height += pedro_Growth_Rate;
        years++;
    }

    printf("Pedro will be taller than José in %d years.\n", years);

    return 0;
}
