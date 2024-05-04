#include <stdio.h>

void dereferencePointer(int *ptr) {
    if (ptr != NULL) {
        // Code to dereference ptr
    }
}

int main() {
    int *ptr = NULL;
    // Code to initialize ptr
    dereferencePointer(ptr); // Potential false positive: NULL pointer dereference not detected
    return 0;
}
