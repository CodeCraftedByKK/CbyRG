// find the total number of pair in the array whose sum is equal to the given value

#include <stdio.h>
int main () {
    int x;
    printf("How many Numbers ? ");
    scanf("%d",&x);

    int arr[x];
    printf("Enter %d Numbers\n",x);
    for(int i=0; i<x; i++){
        scanf("%d",&arr[i]);
    }

    int target;
    printf("Enter Target Sum\n");
    scanf("%d",&target);

    int count = 0;
    for (int i = 0; i < x; i++) {
     for (int j = i + 1; j < x; j++) {   // key detail: j starts at i+1
            if (arr[i] + arr[j] == target) {
                count++;
            }
        }
    }

    printf("Total pairs = %d\n", count);




















    return 0;
}


