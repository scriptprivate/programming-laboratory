#include <stdio.h>

int main() 
{
    int x;

    printf("Enter a number (1-7) corresponding to a day of the week (Enter 0 to exit): ");
    scanf("%d", &x);

    while (x != 0) {
        switch (x) {
            case 1:
                printf("Sunday\n");
                break;
            case 2:
                printf("Monday\n");
                break;
            case 3:
                printf("Tuesday\n");
                break;
            case 4:
                printf("Wednesday\n");
                break;
            case 5:
                printf("Thursday\n");
                break;
            case 6:
                printf("Friday\n");
                break;
            case 7:
                printf("Saturday\n");
                break;
            default:
                printf("Invalid day number\n");
                break;
        }

        printf("Enter a number (1-7) corresponding to a day of the week (Enter 0 to exit): ");
        scanf("%d", &x);
    }

    printf("Exiting...\n");

    return 0;
}
