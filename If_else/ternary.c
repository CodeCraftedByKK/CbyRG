#include <stdio.h>
int main () {

    int n;
    printf("Enter Number");
    scanf("%d",&n);

    n>99 ? printf("3 digit") : printf("two digit");



    return 0;
}