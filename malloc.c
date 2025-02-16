#include <stdio.h>
#include <stdlib.h>

/// malloc, calloc, realloc, free
int main(void){
    int size;
    scanf("%d", &size);
    int Arr [size];

    // int *A = (int *) malloc(size * sizeof(int));

    int *A = (int *) calloc(size, sizeof(int));
    if (A != NULL){
        printf("Success");
        printf("\nSize: %d\n" , size);
        for (int i = 0; i < size; i++){
                A[i] = i;
        }

        A = realloc(A, 10 * size);
        free(A);
        A[5] = 8;
        for (int i = 0; i < size * 10; i++){
            printf("%d ", A[i]);
        }
    } else{
        printf("Returned null");
    }

    

    return 0;
}