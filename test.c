#include <stdlib.h>

void allocateMemory() {
    int *ptr = (int *)malloc(sizeof(int));
    if (ptr != NULL) {
        // Some operations with ptr
        free(ptr);
    }
}

void processMemory() {
    int *ptr = (int *)malloc(sizeof(int));
    if (ptr != NULL) {
        // Some operations with ptr
        free(ptr); // Potential false positive: ptr is freed, but it's not used afterward
    }
}

int main() {
    allocateMemory();
    processMemory();
    return 0;
}
