#include <stdio.h>


int add(int a, int b){
    return a+b;

}

int sub(int a, int b){
    return a-b;
}

int multi(int a, int b){
    return a*b;
}

int main (){
    int a;
    printf("Enter first Number: ");
    scanf("%d", &a);

    int b;
    printf("Enter second Number: ");
    scanf("%d",&b);

    int sum= add(a,b);
    int product= multi(a,b); // this is called pass by value 

    printf("The sum of %d and %d is %d\n",a, b, sum);
    printf("The product of %d and %d is %d\n",a,b,product);

    return 0;
}