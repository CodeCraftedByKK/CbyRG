#include <stdio.h>
int main () {

    int a = 25;
    int *x= &a;

    int *y = &x;


    printf("%p",&x);
    return 0;
}