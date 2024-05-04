#include <stdlib.h>

void releaseMemory(int *ptr) {
    free(ptr);
}

int main() {
    int *ptr = (int *)malloc(sizeof(int));
    // Code to initialize ptr
    releaseMemory(ptr);
    // Code attempting to use ptr after it has been freed
    return 0;
}
