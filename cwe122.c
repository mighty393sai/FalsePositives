#include <stdlib.h>

void bufferOverflow(char *input) {
    char buffer[10];
    strcpy(buffer, input); // Potential false positive: no bounds checking
}

int main() {
    char input[20];
    // Code to initialize input
    bufferOverflow(input);
    return 0;
}
