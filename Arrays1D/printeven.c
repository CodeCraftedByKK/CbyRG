//Read n numbers into an array, then print only the elements at even indices

#include <stdio.h>
int main () {

    int n;
    printf("Enter Number: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter Numbers: ");

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<n; i++){
        if(i%2==0){
            printf("%d",arr[i]);
        }

    }






    return 0;
}