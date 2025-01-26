#include <stdio.h>

char* strconcat(char* dest, const char* source) {
    char* original_dest = dest;

    while (*dest != '\0') {
        dest++;
    }

    while (*source != '\0') {
        *dest = *source;
        dest++;
        source++;
    }

    *dest = '\0';

    return original_dest;
}

int main() {
    char dest[50] = "Hello";
    char source[] = ", World!";

    strconcat(dest, source);
    printf("Concatenated String: %s\nYep", dest);

    return 0;
}
