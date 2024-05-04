#include <stdlib.h>
#include <stdio.h>

void bufferOverflow(const char *input) {
    char *buffer = (char *)malloc(10 * sizeof(char));
    if (buffer != NULL) {
        snprintf(buffer, 10, "%s", input); // False positive: potential heap-based buffer overflow
        free(buffer); // Proper deallocation
    }
}

int main() {
    char input[20] = "This is a long string";
    bufferOverflow(input);
    return 0;
}
