#include <stdio.h>
int main (){

    int n;
    printf("Enter rows: ");
    scanf("%d",&n);

    int m;
    printf("Enter Column: ");
    scanf("%d",&m);

    for(int i=1; i<=n; i++){ //rows
        for(int i=1; i<=m; i++){ //column
        printf("*");}

        printf("\n"); // enter after every line
    }


    return 0;
}