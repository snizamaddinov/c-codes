#include <stdio.h>


void init(int rows, int cols, int a[][cols]){
    int counter = 0;
    for(int i = 0; i < rows; ++i){
        for(int j = 0; j < cols; ++j){
            a[i][j] = counter++;
        }
    }
}

void exchange(int rows, int cols, int a[][cols], int col1, int col2){
    for(int i = 0; i < rows; ++i){
        int temp = a[i][col1];
        a[i][col1] = a[i][col2];
        a[i][col2] = temp;
    }
}

void print(int rows, int cols, int a[][cols]){
    for(int i = 0; i < rows; ++i){
        for(int j = 0; j < cols; ++j){
            printf("%3d ", a[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int rows, cols, col1, col2;
    char empty;
    printf("Enter row and col: ");
    scanf("%d %d", &rows, &cols);
    scanf("%c", &empty);
    
    printf("Enter col1 and col2 indeces to exchange: ");
    scanf("%d %d", &col1, &col2);
    
    int a[rows][cols];
    init(rows, cols, a);
    printf("Original array: \n");
    print(rows, cols, a);
    exchange(rows, cols, a, col1, col2);
    
    printf("\n\nExchanged array: \n");
    print(rows, cols, a);

    return 0;
    
    
}
