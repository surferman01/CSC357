#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <dirent.h>

extern char **environ;


// int execvp(const char *file, char *const argv);


int main(int argc, char* argv[]) {

    // for (int i = 0; environ[i] != NULL; i++) {
    //     printf("%s\n", environ[i]);
    // }

    char* env_vars = {"PATH", NULL};

    // always need null terminator

    execlp(argv[1], argv[1], "-l", "-s", NULL);

    execvp(argv[1], &argv[1]);

    // this should never execute
    printf("hello");

    return 0;
}