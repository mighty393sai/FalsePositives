#include <stdio.h>
#include <string.h>

void authenticateUser(const char *username, const char *password) {
    if (strcmp(username, "admin") == 0 && strcmp(password, "password") == 0) {
        printf("Login successful!\n");
    } else {
        printf("Login failed!\n");
    }
}

int main() {
    char username[20];
    char password[20];
    printf("Enter username: ");
    fgets(username, sizeof(username), stdin);
    printf("Enter password: ");
    fgets(password, sizeof(password), stdin);
    authenticateUser(username, password); // Potential false positive: no actual authentication mechanism
    return 0;
}
