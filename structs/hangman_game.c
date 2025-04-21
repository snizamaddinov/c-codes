#include <stdio.h>
#include <string.h>
int checkGuessed (char guess, char Game_allGuesses[], int uniqueCharacters){
    for(int i = 0; i < uniqueCharacters; i++){
        if(guess == Game_allGuesses[i]){
            return 1;
        }
    }
    return 0;
}
typedef struct{
    char guessed[6];
    char target[6];

} Word;

typedef struct {
    int stage;
    char *art;
} HangmanArt;

typedef  struct {
    int maxAttemptCount;
    int wrongAttemptCount;
    Word words;
    char allGuesses[26];
} Game;


HangmanArt hangmanStages[] = {
    {0, "  +---+\n      |\n      |\n      |\n      |\n      |\n========="},
    {1, "  +---+\n  O   |\n      |\n      |\n      |\n      |\n========="},
    {2, "  +---+\n  O   |\n  |   |\n      |\n      |\n      |\n========="},
    {3, "  +---+\n  O   |\n /|   |\n      |\n      |\n      |\n========="},
    {4, "  +---+\n  O   |\n /|\\  |\n      |\n      |\n      |\n========="},
    {5, "  +---+\n  O   |\n /|\\  |\n /    |\n      |\n      |\n========="},
    {6, "  +---+\n  O   |\n /|\\  |\n / \\  |\n      |\n      |\n========="}
};

void initializeGame (Game* game){
    game->maxAttemptCount = 6;
    game->wrongAttemptCount = 0;
    strncpy(game->words.target, "hello", 6);
    strncpy(game->words.guessed, "_____", 6);
}

void printCurrentStageArt(int stage){
    printf("%s\n", hangmanStages[stage].art);
}

int checkUserInput(Word* gameWord, char guess){
    int found = 0;

    for (int i = 0; i < strlen(gameWord->target); ++i){
        if (guess == gameWord->target[i]){
            found = 1;
            gameWord->guessed[i] = guess;
        }
    }

    return found;
}

char getUserInput(){
    printf("Enter a letter: ");
    char guess;
    scanf("%c", &guess);

    getchar();
    return guess;
}

int hasWon(Game* game){
    int result = strcmp(game->words.target, game->words.guessed);
    
    return !result;
}

int hasLost(Game* game){
    if (game->maxAttemptCount <= game->wrongAttemptCount){
        return 1;
    } else{
        return 0;
    }
}


int main(){
    int uniqueCharacters = 0;
    Game game;
    initializeGame(&game);

    while(! (hasLost(&game) || hasWon(&game)) ){
        printCurrentStageArt(game.wrongAttemptCount);

        printf("Word: %s\n", game.words.guessed);
        char guess = getUserInput();
        if(checkGuessed(guess, game.allGuesses, uniqueCharacters) == 0){
            game.allGuesses[uniqueCharacters] = guess;
            uniqueCharacters++;
        }else{
            printf("You have already guessed %c\n", guess);
            continue;
        }
        int result = checkUserInput(&game.words, guess);
        
        if (!result){
            game.wrongAttemptCount++;
        }
    }

    if (hasWon(&game)){
        printf("\n\nCongrats, you won!!!\n\n");
    } else {
        printf("\n\nYou MURDERER, you killed an innocent person!!!\n\n");
        printCurrentStageArt(game.wrongAttemptCount);
    }





    return 0;
}