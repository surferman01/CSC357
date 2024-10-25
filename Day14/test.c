#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <dirent.h>

int main(int argc, char** argv) {

// S_ISREG = regular dirle
// S_ISDIR = is dir?

    // struct stat sb;
    // if (stat(argv[1], &sb) == 1) {
    //     return EXIT_FAILURE;
    // }

    // // read write exec user
    // if (mkdir("dirnametest", S_IRWXU) == -1) {
    //     // gives users all capabilities
    //     return EXIT_FAILURE;
    // }

    // if (rmdir("dirnametest") == -1) {
    //     return EXIT_FAILURE;
    // }

    // sticky bit = S_ISVTX

    DIR *d;
    d = opendir("../");

    struct dirent *inode_name_pair;
    while ((inode_name_pair = readdir(d)) != NULL) {
        printf("%llu ", inode_name_pair->d_ino);
        printf("%s\n", inode_name_pair->d_name);
    }


    
    return 0;

}

