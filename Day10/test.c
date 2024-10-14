#include <stdio.h>

void swap(int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
};

void swap2(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
};

int strlen(char *s) {
    char *p = s;
    while (*p != '\0') p++;
    return p - s;
};


int main() {
    int x = 1;
    int y = 5;
    swap(x, y);

    swap2(&x, &y);

    return 0;

    char* s = "string";     // the literaly string "string" is stored in the data segment

    int a[10];
    int *p = a;     // == &a[0]
    p = p + 2;      // == &a[2]




};