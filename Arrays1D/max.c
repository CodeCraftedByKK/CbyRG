

// finding maximum using array

#include <stdio.h>
int main () {

    int arr[7] = {1,5,78,45,16,451,4115};
    int max = -1;
    for(int i=0; i<=7; i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }

    printf("%d",max);





    return 0;
}