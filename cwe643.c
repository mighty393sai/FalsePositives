#include <stdio.h>
#include <string.h>

void performXPathQuery(const char *query) {
    // Code to perform XPath query
}

int main() {
    char query[100];
    printf("Enter XPath query: ");
    fgets(query, sizeof(query), stdin);
    performXPathQuery(query); // Potential false positive: XPath injection vulnerability not detected
    return 0;
}
