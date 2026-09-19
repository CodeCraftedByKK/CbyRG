#include <stdio.h>
int main (){

    int a,b,c;
    printf("Enter Length: ");
    scanf("%d",&a);

    
    printf("Enter Breadth: ");
    scanf("%d",&b);

    
    printf("Enter Height: ");
    scanf("%d",&c);

    int capacity= a*b*c;

    printf("Total Capacity of tanker is %d",capacity);



    return 0;
}