#include <stdio.h>

int main (){

    int num;
    printf("Enter Number: ");
    scanf("%d",&num);

    if(num>99 && num<999){
        printf("This Number is three digit Number");

    }
    else {
        printf("This Number is not three digit Number");
    }



    return 0;
}