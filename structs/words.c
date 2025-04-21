#include <stdio.h>
#include <string.h>
typedef struct{
    char guessed[6];
    char target[6];

} Word;

void initialize (Word* word){
    strncpy(word->target, "hello", 6);
    strncpy(word->guessed, "h____", 6);
}

char getUserInput(){
    printf("Enter a letter: ");
    char guess;
    scanf("%c", &guess);

    getchar();
    return guess;
}

int checkUserInput(Word* gameWord, char guess){
    int found = 0;

    for (int i = 0; strlen(gameWord->target); ++i){
        if (guess == gameWord->target[i]){
            found = 1;
            gameWord->guessed[i] = guess;
        }
    }

    return found;
}

int main(){


    Word gameWord;

    initialize(&gameWord);
    printf("Words: %s\n", gameWord.target);
    printf("Words: %s\n", gameWord.guessed);

    char guess1 = getUserInput();
    char guess2  = getUserInput();
    printf("G1: %c, g2: %c\n", guess1, guess2);

    checkUserInput(&gameWord, guess1);

    printf("Guessed word: %s\n", gameWord.guessed);


    checkUserInput(&gameWord, guess);

    printf("Guessed word: %s\n", gameWord.guessed);
;}