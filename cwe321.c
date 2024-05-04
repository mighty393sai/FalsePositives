#include <stdio.h>
#include <string.h>

void encryptData(const char *data) {
    // Code to encrypt data using a hard-coded key
}

int main() {
    char data[100];
    printf("Enter data to encrypt: ");
    fgets(data, sizeof(data), stdin);
    encryptData(data); // Potential false positive: hard-coded key not detected
    return 0;
}
