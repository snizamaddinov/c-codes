#include <stdio.h>

typedef struct {
    int stage;
    char *art;
} HangmanArt;

HangmanArt hangmanStages[] = {
    {0, "  +---+\n      |\n      |\n      |\n      |\n      |\n========="},
    {1, "  +---+\n  O   |\n      |\n      |\n      |\n      |\n========="},
    {2, "  +---+\n  O   |\n  |   |\n      |\n      |\n      |\n========="},
    {3, "  +---+\n  O   |\n /|   |\n      |\n      |\n      |\n========="},
    {4, "  +---+\n  O   |\n /|\\  |\n      |\n      |\n      |\n========="},
    {5, "  +---+\n  O   |\n /|\\  |\n /    |\n      |\n      |\n========="},
    {6, "  +---+\n  O   |\n /|\\  |\n / \\  |\n      |\n      |\n========="}
};

void printCurrentStageArt(int stage){
    printf("%s\n", hangmanStages[stage].art);
}
int main() {
    for (int i = 0; i < 7; i++) {
        printf("stage: %d\n%s\n",hangmanStages[i].stage, hangmanStages[i].art);
    }
    // int falseCount = 3;

    // printCurrentStageArt(falseCount);
    return 0;
}