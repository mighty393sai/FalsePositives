#include <stdlib.h>
#include <stdio.h>

void executeCommand() {
    system("echo Hello, World!"); // False positive: system call without user input
}

int main() {
    executeCommand();
    return 0;
}
