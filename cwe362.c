#include <stdio.h>

void encryptData(const char *data) {
    // Code to encrypt data with weak encryption algorithm
}

int main() {
    char data[100];
    // Code to initialize data
    encryptData(data); // Potential false positive: weak encryption algorithm not detected
    return 0;
}
