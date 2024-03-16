### Program Compilation and Execution

This program consists of a main program and several utility functions for drawing shapes such as arrows, diamonds, ellipses, and rectangles. The utility functions are implemented in separate files located in the `libs` directory.

#### Directory Structure

```
19/
│
├── libs/
│   ├── arrow.h
│   ├── arrow.c
│   ├── diamond.h
│   ├── diamond.c
│   ├── ellipse.h
│   ├── ellipse.c
│   ├── rectangle.h
│   └── rectangle.c
│
└── main.c
```

- `libs`: This directory contains header and source files for the utility functions.
- `main.c`: This is the main program file that utilizes functions from the utility files.

#### Compilation

To compile the program, follow these steps:

1. Open a terminal.
2. Navigate to the root directory of the project.
3. Compile each utility function source file into object files using the following commands:

    ```bash
    gcc -c libs/arrow.c -o arrow.o
    gcc -c libs/diamond.c -o diamond.o
    gcc -c libs/ellipse.c -o ellipse.o
    gcc -c libs/rectangle.c -o rectangle.o
    ```

4. Compile the main program file into an object file:

    ```bash
    gcc -c main.c -o main.o
    ```

5. Link all the object files together to create an executable:

    ```bash
    gcc main.o arrow.o diamond.o ellipse.o rectangle.o -o main
    ```

#### Execution

To run the program, execute the following command:

```bash
./main
```

This will execute the main program, which utilizes functions from the utility files to draw shapes like arrows, diamonds, ellipses, and rectangles.