#include <stdio.h>

    void swap(int a, int b){

    }


int main() {

    printf("Enter a: ");
    int a;
    scanf("%d",&a);

    printf("Enter b: ");
    int b;
    scanf("%d",&b);

    int* x = &a;
    int* y = &b;

    swap(x,y);
    printf("The value of a is %d",a);
    printf("The value of b is %d",b);






    return 0;
}