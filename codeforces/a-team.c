#include <stdio.h>


int main(){
    int n, n_p = 0;
    char p, v, t;

    scanf("%d", &n);
    getchar();
    
    do{
        scanf("%c %c %c", &p, &v, &t);
        getchar();

        if (145 < p + v + t){
            ++n_p;
        }
        --n;
    }while (n > 0);

    printf("%d", n_p);
    return 0;
}