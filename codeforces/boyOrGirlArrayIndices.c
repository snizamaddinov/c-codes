#include <stdio.h>

int main(void){
    char nOfUniques = 0; /// 48
    char uniques[27] = {'\0'};
    char username[101];

    scanf("%s", username);
    int i = 0;
    while (username[i] != '\0'){
        if (uniques[ username[i] - 97] == '\0'){
            uniques[ username[i] - 97] = '1';
            ++nOfUniques;
        }
        ++i;
    }
    
    if ( (nOfUniques - 48 ) & 1){
        printf("IGNORE HIM!");
    } else {
        printf("CHAT WITH HER!");
    }

    return 0;
}