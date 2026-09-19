#include <stdio.h>
int main () {

    printf("Enter No of terms: ");
    int n;
    scanf("%d",&n);

    printf("Enter Comman Difference: ");
    int d;
    scanf("%d",&d);

    printf("Enter First Term:" );
    int a;
    scanf("%d",&a);


    for(int i=1; i<=n; i++){
        printf("%d",a);
        a=a+d;
    }


    return 0;
}