#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main(int argc, char** argv) {

    int fd1 = open();
    int fd2 = dup(fd1); // create new fd that points to same fd

    int fd3 = dup2(fd1, 4); // 

    dup2(fd1, STDOUT_FILENO);

    // for (int i = 0; i < atoi(argv[1]); i++) {

    // }

    pid_t pid = fork();

    return 0;
}