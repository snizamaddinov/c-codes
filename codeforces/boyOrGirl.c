#include <stdio.h>
#include <stdlib.h>

void boyOrGirl(){
    char seen[27] = {'\0'};
    char *username = (char*)malloc(101);
    char nOfUniques = 0; // 48

    scanf("%s", username);

    while( (*username) != '\0'){
        int i = 0;
        printf("Checking: %c\n", *username);
        while( seen[i] != '\0'){
            if (seen[i] == *username){
                printf("Found it\n");
                i = -1;
                break;
            }
            ++i;
        }
        printf("Check finished, index: %d\n", i);
        if (i != -1){
            seen[i] = *username;
            seen[i+1] = '\0';
            ++nOfUniques;
        }
        printf("Number of uniques: %d\n", nOfUniques);
        username++;
    }

    if ((nOfUniques - 48) & 1){ // odd
        printf("IGNORE HIM!");
    }else{
        printf("CHAT WITH HER!");
    }
}

int main(void){

    boyOrGirl();
    return 0;
}