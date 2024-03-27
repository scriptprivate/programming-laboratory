**Aging Algorithm for Drawer Management**

Write a C program to implement an aging algorithm for a drawer structure with 10 drawers numbered from 0 to 9. Each drawer is initialized with a control byte of 00000000. The program runs in a loop presenting two options:

1. Use a drawer.
2. Switch the contents of drawers.

The loop displays these options, and upon user input of 1 or 2, the corresponding action is executed.

Option 1 (Use a drawer) has two behaviors:
- If it is the first use, it increments the most significant bit by 1. For example, 00000000 becomes 10000000.
- If it is not the first use, it allocates one bit from the byte to the right. For example, 10000000 becomes 01000000. Furthermore, if other drawers have been previously used, it allocates 1 bit from each of them to the right. The intention is to ensure that the last used drawer always holds the drawer with the highest value.

Option 2 (Switch the contents of drawers) has only one behavior:
- Upon selection of option 2, the program randomly chooses a used drawer from the 10 available drawers [0-9] and switches its content with the content of the least recently used drawer.

If after 8 uses, a drawer remains unused, its value is reset to the control byte (00000000) as if it were never used. This reset occurs because the longer a drawer goes unused, the more leading zeros it accumulates, reducing its value. Additionally, if multiple drawers have equally small values, the program selects one of them randomly.

This algorithm resembles an LRU (Least Recently Used) aging algorithm.
