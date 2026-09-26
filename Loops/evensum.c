#include <stdio.h>
int main () {

    int n;
    printf("Enter Number: ");
    scanf("%d",&n);

    int sum = 0;
    int even = 0;

    while(n!=0){
        int lastdigit = n%10;

        if(lastdigit%2==0){
            sum = sum + lastdigit;
        }

       n = n/10;

    }


 printf("%d",sum);

    return 0;
}