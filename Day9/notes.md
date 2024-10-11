# Day 9 (10/11/2024)

Structure 

struct point {
    int x;
    int y;
};

struct point p;

p.x = 10;
p.y = 20;

printf("p: (%d, %d)\n", p.x, p.y);


## see test.c

# Structure Memory Layout

Order
- Memory for structure members are allocated in order they are defined
- structs will init an entire word space for each datatype 
  - ex) 3 chars initted first will take up 3 bytes and then pad an extra byte

# Unions

- unions are like a union of space
  - use the same space for different kinds of data basically 
- it allocates space for the largest datatype and utilizes it for whatever the most recent definition is