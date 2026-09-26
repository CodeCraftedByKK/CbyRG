#include <stdio.h>
int main () {

    int a;
    printf("Enter First Number: ");
    scanf("%d",&a);

    int b;
    printf("Enter Second Number: ");
    scanf("%d",&b);

    if(a>b){
        printf("A is greater Number");
    }

    else{
        printf("B is greater");
    }



    return 0;
}