#include <stdlib.h>

void allocateMemory(int **ptr) {
    *ptr = (int *)malloc(sizeof(int));
    if (*ptr != NULL) {
        // Some operations with *ptr
    }
}

void processMemory(int **ptr) {
    if (*ptr != NULL) {
        // Some operations with *ptr
        free(*ptr);
        *ptr = NULL; // Set pointer to NULL after freeing
    }
}

int main() {
    int *ptr = NULL;

    allocateMemory(&ptr); // Allocate memory
    processMemory(&ptr);  // Free memory

    // Attempting to free memory again
    if (ptr != NULL) {
        free(ptr); // Potential false positive: ptr is freed again in main
        ptr = NULL;
    }

    return 0;
}
