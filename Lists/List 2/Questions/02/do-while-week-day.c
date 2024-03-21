#include <stdio.h>

int main() 
{
    int x;

    do {
        printf("Enter a number (1-7) corresponding to a day of the week (Enter 0 to exit): ");
        scanf("%d", &x);

        if (x >= 1 && x <= 7) {
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
            }
        } else if (x != 0) {
            printf("Invalid day number\n");
        }
    } while (x != 0);

    printf("Exiting...\n");

    return 0;
}
