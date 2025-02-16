#include <stdio.h>

struct Date{
    int year;
    int month;
    int day;
};

struct Student{
    char full_name[30];
    float gpa;
    struct Date birthday;
};


int main(){
    struct Date birthday1 = {2005, 01, 01};
    struct Student st1 = {"John Smith", 3.4, birthday1};

    printf("Name: %s", st1.full_name);
    printf("\nGpa: %.2f", st1.gpa);
    printf("Birthday: %02d/%02d/%d", st1.birthday.day, st1.birthday.month, st1.birthday.year);


    printf("\n");
    return 0;
}