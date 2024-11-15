#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <sys/wait.h>

void child_handler(int signum) {
    printf("child_handling rn");
    wait(NULL);
}

int main() {

    pid_t pid = fork();

    if (pid == 0) {
        //child
        printf("i am child\n");
        sleep(2);
        return 0;
    }

    printf("i am dad\n");

    struct sigaction sa;
    sa.sa_handler = child_handler;
    sigemptyset(&sa.sa_mask);
    sa.sa_flags = 0;
    sigaction(SIGCHLD, &sa, NULL);

    // pause();    // waits for signal


    return 0;
}