#include <stdio.h>

typedef int* intP;

// struct student {
//     char name[15];
//     int age;
// };

// typedef struct student Student;

typedef struct {
    char name[15];
    int age;
} Student;

int main(){
    int a;
    // struct student s1;
    Student s2;
    int * aPtr2;
    intP aPtr;

    aPtr = &a;

    printf("a = %d, aPtr = %p\n", a, aPtr);

    return 0;
}