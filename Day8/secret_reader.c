#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main() {
    int f = open("secret.bin", O_RDONLY);
    lseek(f, 16, SEEK_SET);

    char message[13];

    read(f, message, sizeof(message));

    for (int i = 0; i < 12; i++) {
        message[i] -= 7;
    };

    message[12] = "\0";

    printf("%s\n", message);

    return 0;
}; 