#include <stdio.h>

int main() 
{
    float length, width, height, volume;

    printf("Enter the length of the box: ");
    scanf("%f", &length);
    printf("Enter the width of the box: ");
    scanf("%f", &width);
    printf("Enter the height of the box: ");
    scanf("%f", &height);

    // calculate the volume using the formula
    volume = length * width * height;

    printf("The volume of the rectangular box is: %.2f\n", volume);

    return 0;
}