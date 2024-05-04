#include <stdlib.h>

void allocateMemory() {
    int *ptr = (int *)malloc(sizeof(int));
    // Code to use ptr
    // Missing free(ptr)
}

int main() {
    allocateMemory(); // Potential false positive: memory release missing after effective lifetime
    return 0;
}
