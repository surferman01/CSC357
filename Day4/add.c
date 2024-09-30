#include <stdio.h>
#include "add.h"
#define max(A, B) ((A) > (B) ? (A) : (B))



// int add(int a, int b);

void modify(int *values) {
    values[1] = 999;
};

int add(int a, int b) {
    return a + b;
};


int main() {
    int a[3];
    int b[4] = {10, 30, 23};
    int c[10] = {};

    int *d[3];

    // modify(d);

    // printf(d[1], "\n");
    // char test = add(2, 4);
    printf("%d\n", add(2, 4));



    // printf("a, b, c");
    return 0;
};