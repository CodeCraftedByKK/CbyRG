#include <stdio.h>
int main (){

    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num%2==0){
        printf("This Number is Even");
        
    }

    else {
        printf("This Number is Odd");
    }




    return 0;
}