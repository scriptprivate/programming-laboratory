#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_DRAWERS 10

struct Drawer {
    unsigned char control_byte;
    int last_used_index;
};

// initialize all drawers with control byte 00000000
void initialize_drawers(struct Drawer drawers[]) 
{
    for (int i = 0; i < NUM_DRAWERS; i++) {
        drawers[i].control_byte = 0;
        drawers[i].last_used_index = -1;
    }
}

void use_drawer(struct Drawer drawers[], int index) {
    printf("Drawer %d before use: %d\n", index, drawers[index].control_byte);

    // iterate through all drawers
    for (int i = 0; i < NUM_DRAWERS; i++) {
        // check if the current drawer is used and not the same as the drawer being used
        if (drawers[i].last_used_index != -1 && i != index) {
            // allocate one bit to the right for other used drawers
            drawers[i].control_byte >>= 1;
        }
    }
    
    if (drawers[index].last_used_index == -1) {
        drawers[index].control_byte |= (1 << 7); // set most significant bit to 1 for the first use
    } 
    else {
        drawers[index].control_byte >>= 1; // shift bits to the right for subsequent uses
    }
    drawers[index].last_used_index = 0; // update last used index
    
    printf("Drawer %d after use: %d\n", index, drawers[index].control_byte);
}



// switch content of drawers
void switch_drawers(struct Drawer drawers[]) 
{
    int min_index = -1;
    for (int i = 0; i < NUM_DRAWERS; i++) {
        if (drawers[i].last_used_index != -1 && (min_index == -1 || drawers[i].control_byte < drawers[min_index].control_byte)) {
            min_index = i;
        }
    }
    
    int used_index = -1;
    while (used_index == -1 || used_index == min_index) {
        used_index = rand() % NUM_DRAWERS; // generate random index
    }
    
    printf("Drawers switched: %d (%d) and %d (%d)\n", min_index, drawers[min_index].control_byte, used_index, drawers[used_index].control_byte);
    printf("Drawers before switching: %d (%d) and %d (%d)\n", min_index, drawers[min_index].control_byte, used_index, drawers[used_index].control_byte);
    
    unsigned char temp = drawers[used_index].control_byte;
    drawers[used_index].control_byte = drawers[min_index].control_byte;
    drawers[min_index].control_byte = temp;
    
    printf("Drawers after switching: %d (%d) and %d (%d)\n", min_index, drawers[min_index].control_byte, used_index, drawers[used_index].control_byte);
}

// reset unused drawers
void reset_unused_drawers(struct Drawer drawers[]) 
{
    for (int i = 0; i < NUM_DRAWERS; i++) {
        if (drawers[i].last_used_index == -1) {
            drawers[i].control_byte = 0; // reset control byte
        }
    }
}

// print all drawers
void print_drawers(struct Drawer drawers[]) 
{
    printf("All drawers:\n");
    for (int i = 0; i < NUM_DRAWERS; i++) {
        printf("Drawer %d: %d\n", i, drawers[i].control_byte);
    }
}

int main() 
{
    srand(time(NULL)); // seed for random number generator
    struct Drawer drawers[NUM_DRAWERS];
    initialize_drawers(drawers);
    
    int option;
    for (;;) {
        printf("\nOptions:\n1. Use drawer\n2. Switch content of drawers\n3. Print all drawers\nEnter option: ");
        scanf("%d", &option);
        
        switch(option) {
            case 1:
                int index;
                printf("Enter drawer index (0-9): ");
                scanf("%d", &index);
                if (index < 0 || index >= NUM_DRAWERS) {
                    printf("Invalid drawer index.\n");
                } 
                else {
                    use_drawer(drawers, index);
                }
                break;
            case 2:
                switch_drawers(drawers);
                break;
            case 3:
                print_drawers(drawers);
                break;
            default:
                printf("Invalid option.\n");
                break;
        }
        
        reset_unused_drawers(drawers);
    }
    
    return 0;
}
