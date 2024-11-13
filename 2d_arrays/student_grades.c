#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_CHOICES 5

const char CHOICES[] = {'A', 'B', 'C', 'D', 'E'};

void generateRandomAnswers(int students, int questions, char answers[students][questions]) {
    for (int i = 0; i < students; i++) {
        for (int j = 0; j < questions; j++) {
            answers[i][j] = CHOICES[rand() % NUM_CHOICES];
        }
    }
}

int calculateScores(int students, int questions, char answers[students][questions], char answerKey[], int scores[], int *above60) {
    *above60 = 0;
    for (int i = 0; i < students; i++) {
        int correct = 0, incorrect = 0;

        for (int j = 0; j < questions; j++) {
            if (answers[i][j] == answerKey[j]) {
                correct++;
            } else {
                incorrect++;
            }
        }
        
        scores[i] = correct - (incorrect / 3);
        if (scores[i] > 60) {
            (*above60)++;
        }
    }

    return *above60;
}

void prin1DArray(char arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%c ", arr[i]);
    }
}

int main() {
    srand(time(0));

    int students, questions;
    printf("Enter the number of students: ");
    scanf("%d", &students);
    printf("Enter the number of questions: ");
    scanf("%d", &questions);

    char answerKey[questions];
    char studentAnswers[students][questions];
    int scores[students];
    int above60;

    for (int i = 0; i < questions; i++) {
        answerKey[i] = CHOICES[rand() % NUM_CHOICES];
    }

    printf("Answer keys:\n");
    prin1DArray(answerKey, questions);
    printf("\n\n");

    generateRandomAnswers(students, questions, studentAnswers);
    calculateScores(students, questions, studentAnswers, answerKey, scores, &above60);


    printf("Students' Answers and Scores:\n");
    for (int i = 0; i < students; i++) {
        printf("Student %d: ", i + 1);
        prin1DArray(studentAnswers[i], questions);
        printf(" | Score: %d\n", scores[i]);
    }

    printf("\nNumber of students with scores above 60: %d\n", above60);

    return 0;
}
