#include <stdio.h>
#define GETLINE_CAP 1024
int newgetline(char **line, int *n, FILE *fp) {
    if (*line == NULL) {
        *n = GETLINE_CAP;
        *line = malloc(sizeof(char) * (*n));
        if (*line == NULL) {
            return -1;
        };
    };

    int i = 0;
    char curr;
    while((curr = getc(fp)) != EOF) {
        if (i + 1 >= *n) {
            *n *= GETLINE_CAP;
            *line = realloc(*line, sizeof(char) * (*n));
            if (*line == NULL) {
                return -1;
            };
        };

        (*line)[i++] = curr;

        if (curr == '\n') {
            break;
        };
    };

    if (i == 0 && curr == EOF) {
        return -1;
    }

};