// reverse the array without using ohter array 

void reverse (int arr[]){
    int i=0;
    int j=5;

    while (i<j){

        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;        
    }
}



#include<stdio.h>
int main() {

    int arr[6]={1,2,3,4,5,6};

    reverse(arr);

   
    for ( int i=0; i < 6; i++){
        printf("%d",arr[i]);
    }
















    return 0;
}