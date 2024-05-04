#include <stdlib.h>
#include <stdio.h>

void executeCommand(const char *command) {
    system(command); // Potential false positive: system call without user input
}

int main() {
    char command[100];
    printf("Enter command: ");
    fgets(command, sizeof(command), stdin);
    executeCommand(command);
    return 0;
}
