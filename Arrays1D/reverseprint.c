//Read n numbers into an array, then print them in reverse order (don't create a new array — just loop backwards through the original).

#include <stdio.h>
int main(){
    int n;
    printf("Enter Number: \n");
    scanf("%d",&n);

    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    for(int i= n-1 ; i>=0; i--){
        printf("%d",arr[i]);
    }






    return 0;
}