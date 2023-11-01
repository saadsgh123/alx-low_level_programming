#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
extern int errno;
int main() {

    int file_descriptor = open("new.txt", O_RDONLY | O_CREAT);

    printf("fd = %d\n", file_descriptor);

    if (file_descriptor == -1) {
        // print which type of error have in a code
        printf("Error Number % d\n", errno);

        // print program detail "Success or failure"
        perror("Program");
    }
    return 0;
}
