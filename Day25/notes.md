# Day 25 12/2/2024

C Build Process
1. Preprocessing
   1. any include or macro
   2. basically paste all the code from includes
   3. cpp
2. Compilation
   1. convert C to assembly
   2. clang -S ...c
3. Assembler
   1. Translate assembly to machine code
   2. clang -c ...s
4. Linking
   1. turns everying into one executable
   2. links together all the objects / object files into executable

Static / Dynamic Linking
- static
  - everything in one executable
  - libraries found @ compile time
- dynamic
  - libraries found @ runtime
  - stored in .so files

Make

CFLAGS = -g -Wall --pedantic 

(target): (requirements)
program: program.c
    (how to make it)
    clang ${CFLAGS} program.c -o program

clean:
    rm program

- typing make clean will call the clean target

CMake
- basically creates make files
- standalone application useful for C projects that creates make files