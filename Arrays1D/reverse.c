#include <stdio.h>
int main () {

    int arr[6]={1,2,3,4,5,6};
    int brr[6];

    for(int i=0; i<6; i++){
        brr[i]=arr[i];
    }



    for(int i=0; i<6; i++){
        printf("%d",brr[5-i]);
    }





    return 0;
}