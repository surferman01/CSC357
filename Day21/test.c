#include <stdio.h>
#include <signal.h>

double multiply(double x, int y) {
        return x * y;
    }
void int_handler(int sig_handler) {
    printf("no sigint\n");
}

int main() {

    signal(SIGINT, int_handler);
    double (*function_ptr)(double, int);

    function_ptr = multiply;

    double result = function_ptr(10.0, 2);

    printf("%f\n", result);
    // while(1) {
    //     printf("hello\n");
    // }
    return 0;
}