#include <stdio.h>

int main(void){
    int unique_colors = 1;
    int colors[4];

    scanf("%d %d %d %d", &colors[0], &colors[1], &colors[2], &colors[3]);

    for(int i = 0; i < 3; ++i){
        for(int j = i + 1; j < 4; ++j){
            if (colors[i] > colors[j]){
                int temp = colors[i];
                colors[i] = colors[j];
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
    return 0;
}