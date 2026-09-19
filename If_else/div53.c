#include <stdio.h>
int main (){
    int num;
    printf("Enter Num: ");
    scanf("%d", &num);

    if(num%5==0 && num%3==0){
        printf("This Number is divisible by both 5 and 3");
        
    }

    else if (num%5==0) {
        printf("This Number is divisible by 5 but not 3");
    }

    else if (num%3==0){
        printf("This Number is divisible by 3 but not 5" );

    }

    else {
        printf("This number is neither divisible by 5 nor by 3");
    }
    return 0;
}