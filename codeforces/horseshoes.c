#include <stdio.h>

void directSolutio(){
    int colors[4];
    int buy = 4;

    scanf("%d %d %d %d", &colors[0], &colors[1], &colors[2], &colors[3]);

    for(int i = 0; i < 4; ++i){
        if (colors[i] != 0){
            for(int j = i + 1; j < 4; ++j){
                if (colors[i] == colors[j]){
                    colors[j] = 0;
                }
            }
            --buy;
        }
    }

    printf("%d", buy);
}

void sortingFirst(){
    int unique_colors = 1;
    int colors[4];

    scanf("%d %d %d %d", &colors[0], &colors[1], &colors[2], &colors[3]);

    for(int i = 0; i < 3; ++i){
        for(int j = i + 1; j < 4; ++j){
            if (colors[j - 1] > colors[j]){
                int temp = colors[j - 1];
                colors[j - 1] = colors[j];
                colors[j] = temp;
            }
        }
    }

    for (int i = 1; i < 4; ++i){
        if (colors[i] != colors[i - 1]){
            ++unique_colors;
        }
    }

    printf("%d", 4 - unique_colors);
}
int main(void){
    sortingFirst();
    return 0;
}