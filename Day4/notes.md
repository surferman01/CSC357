# Sept 30, 2024

Day 4

Arrays

- data_type arr_name[size]
  - int x[4] = {};
    - ^ will init everything to 0

Functions

- prototype: like a constructor
- put put prototypes in header files
  int add(int, int)
  - can define it later:

  int add(int a, int b) {
    return a + b;
    }

- Ensure that pointers have the same datatype as the items

Pointers

- *values

Variable Scope

- local = inside function
- global = outside function
- reusing same variable name is fine, doesnt kill other one, but overshadows it for the call
- Static
  - local vars: single copy that exists for all calls
  - global vars: ensures var/func is only in source file, scope = that file
  - extern: global var defined externally

Header Files

- prototypes
- macro definitions
- shared definitions between src files
- if include <>, then file is searched in compiler, system
- if include "", then files searched for locally first
- #ifndef -> if not defined, then use the header
  - used to make sure that we aren't looking at same headers infinitely

Macros

- #define forever for (;;)
  - this will just make something run forever
- #define max(A, B) ((A) > (B) ? (A) : (B))
  - like a shortcut for creating a max function



To print a number, make sure you do the following:
    printf("%d\n", 100);
