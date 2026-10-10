#include <stdio.h>

int main () {

    printf("Enter Number: ");
    int num1;
    scanf("%d", &num1);

    if (num1%2==0){
        printf("The Number you have entered is even\n");
    }

    else{
        printf("The number you have entered is odd\n");
    }

if (num1<0)
    {
        printf("The number you have entered is Negative");
    
    } 

    else if (num1>0)        
    {
        printf("The number you have entered is Positive");

    }
    else{
        printf("The number is 0");
    }
    


    return 0; 
}