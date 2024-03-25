#include <stdio.h>

void equipment_status(int ID, char signal) 
{
    int reading = (signal >> 4) & 0x0F; 
    int status = signal & 0x0F;          
    
    printf("Equipment %d - ", ID);
    
    if (!((reading >> (ID - 1)) & 0x01))
        printf("HIGH - ");
    else
        printf("LOW - ");
    
    if (!((status >> (ID - 1)) & 0x01))
        printf("ON\n");
    else
        printf("OFF\n");
}

int main() 
{
    int ID;

    // predefined 8-bit signal
    char signal = 0b00101010;
    
    printf("Enter equipment ID (1-4): ");
    scanf("%d", &ID);

    equipment_status(ID, signal);

    return 0;
}
