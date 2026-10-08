#include <stdio.h>
#include <string.h>
int main () {

    struct person{
        char name[40];
        int age;
        float salary;
    };

    struct person first;
    strcpy(first.name,"Ajay");
    first.age=28;
    first.salary=51000;

    struct person second;
    strcpy(second.name,"Anuska");
    second.age=26;
    second.salary=38000;


    printf("%s \n%d \n%.2f  \n",first.name,first.age,first.salary);
    
    printf("%s \n%d \n%.2f  \n",second.name,second.age,second.salary);
  







    return 0;
}