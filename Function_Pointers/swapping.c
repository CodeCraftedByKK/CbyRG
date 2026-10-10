#include <stdio.h>

int main () {

    int a;
    printf("Enter first Numer: ");
    scanf("%d",&a);

    int b;
    printf("Enter Second Number: ");
    scanf("%d",&b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("a is %d\n",a);
    printf("b is %d",b);







    return 0;
}