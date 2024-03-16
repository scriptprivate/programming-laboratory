#include <stdio.h>

int main() 
{
    int total_secs, hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%d", &total_secs);

    // calculates hours, minutes, and seconds
    hours = total_secs / 3600;
    total_secs %= 3600;
    minutes = total_secs / 60;
    seconds = total_secs % 60;

    printf("Time is: %d hours, %d minutes, and %d seconds\n", hours, minutes, seconds);

    return 0;
}