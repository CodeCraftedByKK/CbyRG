// printing first and last number in array 

#include <stdio.h>
int main () {

    int n;
    printf("How many number you want to enter? \n");
    scanf("%d",&n);

    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    printf("Your first Number is %d\n",arr[0]);
    printf("Your Last Number is %d\n",arr[n-1]);




    return 0;
}