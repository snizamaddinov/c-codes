#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* fptr;
    char str1[15], str2[15], str3[15];
    int year;

    fptr = fopen("filename.txt", "r");
    
    fscanf(fptr, "%s %s %s %d", str1, str2, str3, &year);
    char c = fgetc(fptr);

    
    if (fptr == NULL) {
        printf("The file is not opened. The program will "
               "now exit.");
        exit(0);
    }

    if (c == EOF){
        printf("End of file in c \n");
    }

    printf("%s %s %s %d\n\n",  str1, str2, str3, year);
    printf("EOF: %c", c);

    return 0;
}
