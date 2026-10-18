#include <stdio.h>
#include <limits.h>
int main () {

    printf("Enter No. of digits: ");
    int n;
    scanf("%d",&n);

    int arr[n];

    printf("Enter Numbers: ");

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    
    int max = INT_MIN;
    int smax = INT_MIN;
    for(int i=0; i<n; i++){
        if(max<arr[i]){
            max = arr[i];
        }

    }

    for(int i=0; i<n; i++){
        if(arr[i]!=max && smax<arr[i]){
            smax = arr[i];
        }
    }

    printf("%d",smax);



    return 0;
}