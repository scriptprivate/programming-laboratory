#include <stdio.h>

int main() 
{
    float height, ideal_weight;
    char gender;

    printf("Enter your height in meters: ");
    scanf("%f", &height);

    printf("Enter your gender (M for male, F for female): ");
    scanf(" %c", &gender);

    // calculates ideal weight based on gender
    if (gender == 'M' || gender == 'm') {
        ideal_weight = 72.7 * height - 58;
        printf("Your ideal weight is: %.2f kg\n", ideal_weight);
    } 
    else if (gender == 'F' || gender == 'f') {
        ideal_weight = 62.1 * height - 44.7;
        printf("Your ideal weight is: %.2f kg\n", ideal_weight);
    } 
    else {
        printf("Invalid gender input.\n");
    }

    return 0;
}