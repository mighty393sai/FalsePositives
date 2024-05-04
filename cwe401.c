#include <stdlib.h>
#include <stdio.h>

void allocateMemory() {
    int *ptr = (int *)malloc(sizeof(int));
    if (ptr != NULL) {
        *ptr = 10;
        printf("Allocated memory at address: %p\n", (void *)ptr); // Added for demonstration
        // No deallocation, false positive potential CWE-401
    }
}

int main() {
    allocateMemory();
    return 0;
}
