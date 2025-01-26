#include <stdio.h>

int strlens(char* str){
    // int i = -1;
    // while(str[++i] != '\0');
    // return i;

    int i = 0;
    while(str[i] != '\0'){
        i++;
    }

    return i;
}

int main(void){
    char buffer[100];

    if ('a' > 'A'){
        printf("Smaller");
    }

    if ('A' > 'a'){
        printf("bigger");
    }
    // printf("Enter: ");
    // fgets(buffer, sizeof(buffer), stdin);

    // buffer[5] = '\n';
    // printf("You have enetered: %s", buffer);
    // printf("END");

    // printf("\nLength of the text: %d", strlen(buffer));

    return 0;
}