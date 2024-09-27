Day 3
Sept 27, 2024

Recall Stack:

- Levels
  - Text on bottom
    - Data
      - Global variables
    - Uninitialized data (BSS)
      - unallocated space, all initted to 0
    - Heap
      - Builds upwards
      - malloc()
      - the heap builds based on memory we create intentionally
    - Stack
      - Builds downwards
    - Env vars and CLargs

C Program Structure

- Includes
  - Header files and stdio.h
- Main function
  - Entry point for C program
  - main defaults return type to int if you don't specify
- Functions
  - prototypes require type definitions and consistency
    - prototypes usually exist in header files (.h)
- Man
  - man -f [some_function]
  - "/" to search for something in man
  -

Compiling and Running C

- gcc
  - -g:  generates debug info -> required for lldb
  - -Wall:  displays all warning
  - -stc=c99:  Compile with C99 standard
  - -pedantic:  show all ISO warnings
- Var types
  - char
  - int
  - float
  - double
  - boolean
    - needs to be imported via stdbool.h
- Qualifiers
  - short:    smaller (int length)
  - long:     increased int/double length
  - signed:   positive and negative
  - unsigned: positive only
- in /usr/include
  - limit.h
  -
- Operators
  - bitwise and logical operators
  - ternary -> cool_guy ? yes : no

Constants

- #define PI 3.1415926
- double area = radius *radius* PI;

Enum Types

- enum day {SUN = 0, MON, TUE, WED, THU, FRI, SAT}
- enum day today = FRI;

Constant Expressions

#define MAX_ARR_SIZE 10

char* my_test[MAX_ARR_SIZE];
my_arr[MAX_ARR_SIZE -1] = "Last";

Conditionals

- if (today == SUN)
  - printf("happy sun");
- else if (True);
  
- switch(day)

Loops

- while (expression)
  - statement
- for (int; exp; update)
  - statement
- do
  - statement
- while (exp)

- continue
- break

Character IO

- stdio.h has getc and putc for I/O
  - getchar() -> input from stdin
  - putchar() -> output to stdout
- EOF = constant in stdio.h 
  - special char that does not correspond to character
  

you can pipe into new_cat.c something and its basically a cat copy
