#include <stdio.h>
int main () {

    printf("Enter First Number: ");
    int a;
    scanf("%d",&a);

    printf("Enter Second Number: ");
    int b;
    scanf("%d",&b);

    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("The Value of a id %d\n",a);
    printf("The Value of b is %d\n",b);

    




    return 0;
}