#include <stdio.h>
int main () {

    int dob;
    printf("Enter your birth year: ");
    scanf("%d",&dob);

    int currentyear;
    printf("Enter current year: ");
    scanf("%d",&currentyear);

    int age = currentyear-dob;
    int month = age*12;
    int days = age*365;

    printf("You are %d years old\n",age);
    printf("You are %d months old\n",month);
    printf("You are %d days old \n",days);



    return 0;
}