#include<stdlib.h>
#include<stdio.h>

// fopen(name, mode)
// mode: w, w+, r, a
// fscanf("%s %s %d")
// fgets(buffer, size, file_ptr)
// fprintf()

int main(){
    FILE *fptr;
    char a[15], b[15], c[15];
    int d; 
    char buffer[10];
    
    fptr = fopen("filename.txt", "w+");
    int counter = 0;
    // while (fscanf(fptr, "%s %s %s %d", a, b, c, &d)){
    //     printf("Line %d ", counter++);
    //     printf("%s %s %s %d\n", a, b, c, d);
    //     char c = fgetc(fptr);
    // }
    

    fgets(buffer, sizeof(buffer), fptr);

    printf("First line in file: %s", buffer);


    fprintf(fptr, "\nthis is a new linne\n\n");
    return 0;

}