#include <stdio.h>
#include <stdlib.h>
#define RESIZE_FACTOR 2

typedef int _type;

typedef struct array_list {
    _type *data;
    int size;
    int capacity;
} AL;

void cp_data(_type *src, _type *dest, int size) {
    for (int i = 0; i < size; i++) {
        // *dest++ = *src++;
        *(dest + i) = *(src + i);
    };
};

void init_AL(AL *list, _type data[], int data_size) {
    // malloc reserves # bytes specified and returns pointer 
    list->data = malloc(data_size * sizeof(_type));
    // list-> data = (*list).data
    cp_data(data, list->data, data_size);
};

void free_AL(AL *list) {
    free(list->data);
    list->data = NULL;
};

void inc_cap_AL(AL *list) {
    list->capacity *= RESIZE_FACTOR;
    list->data = realloc(list->data, list->capacity * sizeof(_type));
};

void append_AL(AL *list, _type data) {
    if (list->size == list->capacity) {
        inc_cap_AL(list);
    };
    list->data[list->size++] = data;
};

void remove_AL(AL *list, int idx) {
    cp_data(list->data + idx + 1, list->data + idx, list->size - idx);
    list->size--;
};

int main() {

    return 0;
};