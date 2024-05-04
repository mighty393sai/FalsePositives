#include <stdlib.h>

void releaseMemory(int *ptr) {
    free(ptr);
}

int main() {
    int *ptr = (int *)malloc(sizeof(int));
    // Code to initialize ptr
    releaseMemory(ptr);
    releaseMemory(ptr); // Potential false positive: double free
    return 0;
}
