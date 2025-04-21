
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* fptr;

    fptr = fopen("filename.txt", "a+");
    printf("File pointer after fopen: %p\n", (void*)fptr);

    if (fptr == NULL) {
        printf("The file is not opened. The program will "
               "now exit.");
        exit(0);
    }

    fprintf(fptr, "Hello, world!\nThis is a second line.\nAnd a third line.\n");
    printf("Written text to file.\n");

    fclose(fptr);
    printf("File closed after writing.\n");

    return 0;
}
