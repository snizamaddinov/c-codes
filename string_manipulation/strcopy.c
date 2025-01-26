#include <stdio.h>

char* strcopy(char* dest, const char* source) {
    char* original_dest = dest;

    while (*source != '\0') {
        *dest = *source;
        dest++;
        source++;
    }
    *dest = '\0';

    return original_dest;
}

int main() {
    char source[] = "Hello, World!";
    char dest[50];

    strcopy(dest, source);
    printf("Source: %s\n", source);
    printf("Destination: %s\nYep.", dest);

    return 0;
}
