// the number is divisible by 5 or 3 but not 15


#include <stdio.h>
int main (){
    int num;
    printf("Enter Num: ");
    scanf("%d",&num);

    if(num%5==0 || num%3==0){
        if (num%15!=0){
            printf("The Number is divisible by 5 or 3 but not 15");
        }



    }

    else {
        printf("The Number is not divisible by 5 or 3");
    }

    

    return 0;
}