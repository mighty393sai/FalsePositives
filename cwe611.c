#include <stdio.h>
#include <string.h>

void processXML(const char *xml) {
    // Code to process XML
}

int main() {
    char xml[100];
    printf("Enter XML data: ");
    fgets(xml, sizeof(xml), stdin);
    processXML(xml); // Potential false positive: XXE vulnerability not detected
    return 0;
}
