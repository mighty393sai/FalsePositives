#include <stdio.h>

void openFile(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file != NULL) {
        // Code to read from file
        // Missing fclose(file)
    }
}

int main() {
    openFile("example.txt"); // Potential false positive: file descriptor not released after effective lifetime
    return 0;
}
