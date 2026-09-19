#include <stdio.h>
int main (){

    int num;
    printf("Enter Number: ");
    scanf("%d", &num);

    if(num<0){
        int num1 = num*-1;
        printf("%d",num1);
    }

    else{
        printf("%d",num);
    }


    return 0;
}