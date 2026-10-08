#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s1;

    strcpy(s1.name, "Aman");   // can't use s1.name = "Aman"
    s1.roll = 101;
    s1.marks = 87.5;

    printf("Name: %s\nRoll: %d\nMarks: %.2f\n", s1.name, s1.roll, s1.marks);
    return 0;


    struct Student s2;
    
    strcpy(s2.name, "Ravi");
    s2.roll = 102;
    s2.marks = 92.0;

    printf("Name: %s\nRoll: %d\nMarks: %.2f\n", s2.name, s2.roll, s2.marks);
}