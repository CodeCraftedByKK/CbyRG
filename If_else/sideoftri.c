#include <stdio.h>
int main (){

    int side1;
    printf("Enter the first sides of Triangle\n");
    scanf("%d",&side1);

    int side2;
    printf("Enter the Second Sides of Triangle\n");
    scanf("%d",&side2);

    int side3;
    printf("Enter the third sides of Triangle\n");
    scanf("%d",&side3);

    if(side1+side2>side3 && side1+side3>side2 && side3+side2>side1){
        printf("Triangle Can be constructed by these side\n");
    }
    else{
        printf("Triangle can't be constructed by these sides because to form the triangle the sum of two sides should always greater than third side \n");
    }



    return 0;
}