#include <stdio.h>

int main() 
{
    int hours, minutes, seconds, total_seconds;

    printf("Enter the number of hours: ");
    scanf("%d", &hours);
    printf("Enter the number of minutes: ");
    scanf("%d", &minutes);
    printf("Enter the number of seconds: ");
    scanf("%d", &seconds);

    // calculates the total number of seconds
    total_seconds = hours * 3600 + minutes * 60 + seconds;

    printf("Total seconds: %d\n", total_seconds);

    return 0;
}