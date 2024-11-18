#include <stdio.h>
#include <pthread.h>
#include <unistd.h>


// int pthread_create(pthread_t* thread, const pthread_attr_t* addr, void* (*start_routine)(void *), void* arg) {
//     return 0;
// }

void *thread_function(void *data) {
    printf("I am thread, data is: %d\n",*((int *) data));
}

// thread = thread id
// attr = attributes for thread (NULL for now)
// start_routine: function for thread to execute
// arg: address of a value to pass to the executed function

int main() {

    pthread_t pthread;
    int data = 100;

    if (pthread_create(&pthread, NULL, thread_function, (void*) &data) != 0) {
        printf("error\n");
        return 1;
    }
    
    printf("I am the main program\n");
    sleep(3);
    return 0;
}