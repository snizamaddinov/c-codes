#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int *RandArr2(int *A, int n, int n1) {
    int i;
    int *A1;
    
    if (n == n1) {
        for (i = 0; i < n; i++) {
            A[i] = rand();
        }
        return A;
    } else if (n < n1) {
        // reallocs the array A, creating a new array of integers A’ of size n’
        A1 = (int *) realloc(A, n1 * sizeof(int));
        if (A1 == NULL) {
            printf("Memory allocation failed!\n");
            exit(1);
        }
        for (i = n; i < n1; i++) {
            A1[i] = (rand() % 21) - 10;  // Random integers between -10 and 10
        }
        return A1;
    } else {
        // reallocs the array A, creating a new array of integers A’ of size n’
        A1 = (int *) realloc(A, n1 * sizeof(int));
        if (A1 == NULL) {
            printf("Memory allocation failed!\n");
            exit(1);
        }
        return A1;
    }
}

int main() {
    int n, n1;
    int *A;
    int i;
    
    printf("Insert two integers: ");
    scanf("%d %d", &n, &n1);  // Fixed scanf format string
    
    A = (int *) malloc(n * sizeof(int));  // Initialize the array
    if (A != NULL) {
        A = RandArr2(A, n, n1);
        
        // Print the array elements
        for (i = 0; i < n1; i++) {  // Changed to n1 to print all elements
            printf("\n Element at index %d: %d", i, A[i]);
        }
        
        free(A);
    } else {
        printf("Memory allocation failed!\n");
        exit(0);
    }
    
    return 0;
}
