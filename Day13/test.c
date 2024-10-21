#include <stdio.h>
#include <stdint.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>
#include <dirent.h>
#include <util.h>
#include <sys/stat.h>

int main(int argc, char* argv[]) {

    char text[] = "test\nasd";
    int fa = open(argv[1], O_WRONLY | O_APPEND);
    write(fa, text, sizeof(text) - 1);


    struct stat test;
    // printf();

    return 0;
}