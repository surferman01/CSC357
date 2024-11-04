#include <stdio.h>
#include <unistd.h>
#include <string.h>



int main() {
    // int fd[2];
    // pipe(fd);
    // // returns a read fd and a write fd
    // // write(fd[1]); 
    // // read(fd[0]);


    // pid_t pid = fork();

    // // child here
    // if (pid == 0) {
    //     // close the write from child to parent
    //     close(fd[1]);

    //     // this will wait for at least some information to come
    //     // a blocking read
    //     char buff[128];
    //     int n;
    //     while ((n = read(fd[0], buff, 128)) != 0) {
    //         write(STDOUT_FILENO, buff, n);
    //     }
    //     close(fd[0]);
    //     return 0;

    // } else {
    //     // close read from parent to child
    //     close(fd[0]);

    //     char message[] = "hello child\n";
    //     write(fd[1], message, sizeof(char) *strlen(message));

    //     close(fd[1]);
    // }



    // using filestreams instead
    // fdopen

    char fd2[2];
    pipe(fd2);

    char fd3[2];
    pipe(fd3);

    pid_t pid2 = fork();

    if (pid2 == 0) {
        // child here

        // close write ability
        close(fd2[1]);

        // close read from other pipe
        close(fd3[0]);

        FILE* fr = fdopen(fd2[0], "r");
        FILE* fw = fdopen(fd3[1], "w");


        char *buff2;
        size_t n2;
        while ((getline(&buff2, &n2, fr)) > 0) {
            // write(STDOUT_FILENO, buff2, n2);
            printf("%s\n", buff2);
        }
        // close(fd)

        fclose(fr);
        char message[] = "hello child\n";

        fwrite(fw, sizeof(char), strlen(message), fw);

        fclose(fw);
        close(fd2[1]);

    } else {
        //parent here

        close(fd2[0]);
        close(fd3[1]);

        FILE* f = fdopen(fd2[1], "w");
        FILE* f = fdopen(fd3[0], "r");
        
        char *buff3;
        size_t n3;
        while ((getline(&buff3, &n3, f)) > 0) {
            // write(STDOUT_FILENO, buff2, n2);
            printf("%s\n", buff3);
        }


        char message[] = "hello child\n";

        fwrite(f, sizeof(char), strlen(message), f);

    }



    return 0;
}