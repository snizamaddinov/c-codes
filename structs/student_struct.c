#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    char name[30];
    float gpa;
    int age;
    struct Date birthday;
};


void printStudentInfo(struct Student student){
    printf("Name: %s\n", student.name);
    printf("Gpa: %.2f\n", student.gpa);
    printf("Age: %d\n", student.age);

    printf("Birthday: %02d/%02d/%d", student.birthday.day, student.birthday.month, student.birthday.year);
    printf("\n");
}

struct Student inputStudentInfo(){
    struct Student s1;
    struct Date birthdate;

    printf("Enter student name: ");
    scanf("%s", s1.name);
    getchar();

    printf("Enter GPA: ");
    scanf("%f", &s1.gpa);

    printf("Enter birthdate (day/month/year): ");
    scanf("%d %d %d", &birthdate.day, &birthdate.month, &birthdate.year);
    
    s1.birthday = birthdate;
    
    // int calculatedAge;
    // if(s1.birthday.month < 2){
    //     calculatedAge = 2025 - s1.birthday.year;
    // }else{
    //     calculatedAge = 2024 - s1.birthday.year;
    // }
    // s1.age = calculatedAge;

    return s1;
}

void calculateAge(struct Student *studentPtr){
    int calculatedAge;
    if(studentPtr->birthday.month < 2){
        calculatedAge = 2025 - studentPtr->birthday.year;
    }else{
        calculatedAge = 2024 - studentPtr->birthday.year;
    }

    studentPtr->age = calculatedAge;
}



int main(){
    struct Student s1 = inputStudentInfo();
    s1.calculateAge()

    struct Student s2 = s1;

    struct Student *sPtr;
    sPtr = &s1;

    sPtr->age = 45;

    printStudentInfo(s1);
    printStudentInfo(s2);
    return 0;
}