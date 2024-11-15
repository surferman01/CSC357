#include <stdio.h>
#include <signal.h>
#include <unistd.h>


void sig_handler(int signo) {
    printf("caught sig %d\n", signo);
}

int main() {

    signal(SIGINT, sig_handler);
    // the sets are sets that say which signals to block

    sigset_t new_set, old_set;

    sigemptyset(&new_set);

    sigaddset(&new_set, SIGINT);

    if (sigprocmask(SIG_BLOCK, &new_set, &old_set) == -1) {
        perror("no set sig mask");
        return 1;
    }

    printf("unable to block here");
    sleep(5);
    
    if (sigprocmask(SIG_SETMASK, &old_set, NULL) == -1) {
        perror("no set sig mask");
        return 1;
    }


    return 0;
}