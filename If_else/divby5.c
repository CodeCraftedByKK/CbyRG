#include <stdio.h>
int main (){

    int num;
    printf("Enter a Number: ");
    scanf("%d", &num);

    if(num%5==0){
        printf("This Number is divisible by 5");
    }

    else {
        printf("This Number is Not divisible by 5");
    }


    return 0;
}