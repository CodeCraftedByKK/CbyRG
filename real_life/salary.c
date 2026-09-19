#include <stdio.h>
int main () {

    float salary; 
    printf("Enter Your Basic Salary : ");
    scanf("%f",&salary);


    // 20% * salary , % = hra/sal * 100 , hra  = %*100/sal

    float hra = 0.20*salary;

    float da = 0.15*salary;

    float medical= 1500;

    float total = salary + hra + da + medical;

    printf("Your total salary is %f",total);





    return 0;
}