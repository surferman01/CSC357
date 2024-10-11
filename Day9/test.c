#include <stdio.h>
#include <math.h>

struct point {
    int x;
    int y;
};

struct rectangle {
    struct point p1;
    struct point p2;
};

struct node {
    int val;
    struct node *next;
};

struct courses {
    char *dept;
    int num;
    char *name;
};


double origin_dist(struct point p) {
    p.x *= p.x;
    p.y *= p.y;
    return sqrt((p.x + p.y));
};


// typedef lets you call 
typedef struct poi {
    int x;
    int y;
} Point;


// typedef Point *PointPointer;
// PointPointer pp = &p;

// Point p = {3, 5};


// Unions

union shapeshifter {
    int x;
    float y;
    char *z;
};

int main() {
    struct point p;

    p.x = 10;
    p.y = 20;

    printf("p: (%d, %d)\n", p.x, p.y);

    struct point p2 = {200, 100};

    printf("p2: (%d, %d)\n", p2.x, p2.y);

    struct point p3 = {.y = 23, .x = 213};   // order doesnt matter

    printf("p3: (%d, %d)\n", p3.x, p3.y);

    struct point *pp;
    pp = &p;

    int test1x = (*pp).x;       // get the value at the pointer pp of x
    int test1y = pp -> y;       // does the same as above in shorthand

    printf("&pp: (%d, %d)\n", test1x, test1y);


    struct courses my_courses[3] = {
        {"CSC", 357, "Systems"},
        {"EE", 327, "Signals"}
    };

    printf("\n%s", my_courses[1].dept);

    // Unions

    union shapeshifter s;
    s.x = 100;
    s.y = 200.0;
    s.z = "300";

    // only the last defined thing in the union is kept
    printf("\n%d %f %s", s.x, s.y, s.z);

};