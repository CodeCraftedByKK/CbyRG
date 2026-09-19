#include <stdio.h>

int main () {
    int n;
    printf("Enter Number: ");
    scanf("%d", &n); // break state is used to terminate the loop 

    for (int i=2; i<=n; i++){
        if(n%i==0){
            printf("THe Number entered is Composite");
            break;
        }
    }
return 0;
    }