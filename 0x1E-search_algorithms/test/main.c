#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int array[] = {
            0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);
    printf("%ld", size);
    *array = array[4];
    size_t size2 = sizeof(array) / sizeof(array[0]);
    printf("%ld", size2);
    return 0;
}