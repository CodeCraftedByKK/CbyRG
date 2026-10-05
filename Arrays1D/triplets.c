// sum of three number is equal to target value 

#include <stdio.h>
int main () {
    int x;
    printf("Enter Number: ");
    scanf("%d",&x);

    int arr[x];
    printf("Enter all Numbers : ");
    for(int i = 0; i<x; i++){
        scanf("%d",&arr[i]);
    }

    int target;
    printf("Enter Target Sum: ");
    scanf("%d",&target);

    int count=0;

    for (int i = 0; i < x; i++) {
    for (int j = i + 1; j < x; j++) {
        for (int k = j + 1; k < x; k++) {
            if (arr[i] + arr[j] + arr[k] == target) {
                count++;
                
            }
        }
    }

   
}












 printf("%d",count);


    return 0;
}