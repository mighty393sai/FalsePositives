#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

void readInput(char *buffer) {
    printf("Enter a string: ");
    fgets(buffer, MAX_SIZE, stdin); // Using fgets instead of gets to prevent buffer overflow
}

void processString(const char *input, char *output) {
    // Processing function, no security issue here
    strncpy(output, input, MAX_SIZE); // Using strncpy to prevent buffer overflow
    output[MAX_SIZE - 1] = '\0'; // Ensuring null termination
}

void writeToFile(const char *data) {
    FILE *file = fopen("output.txt", "w");
    if (file != NULL) {
        fputs(data, file);
        fclose(file);
    }
}

int main() {
    char input[MAX_SIZE];
    char output[MAX_SIZE];

    readInput(input);
    processString(input, output);
    writeToFile(output);

    return 0;
}
