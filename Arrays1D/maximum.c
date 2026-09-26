#include <stdio.h>
int main () {

    int arr[5] = {1,2,10,45,78};
    int max = -1;
    for(int i=0; i<=5; i++){
       if(max<arr[i])
       {
        max=arr[i];
       }
    }


    printf("%d",max);


    return 0;
}