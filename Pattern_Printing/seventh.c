#include <stdio.h>
int main (){

    int n;
    printf("Enter Number: ");
    scanf("%d" ,&n);

    for(int i=1; i<=n; i++){ // outer Loop - now of lines/ no of rows 
        for( int j =1; j<=i; j++){ // inner loop - no of colums 
            printf("* ");

        }
        printf("\n");
    }



    return 0;

}