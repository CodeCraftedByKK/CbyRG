// find the diference betweeen sum of even and odd 
// sum of even - sum of off

#include <stdio.h>
int main () {

    int arr[7]= {1,2,3,4,5,6,7};
    int sumEven = 0;
    int sumOdd= 0;

    for(int i=0; i<7; i++){
        if(i%2==0){
            sumEven= sumEven + arr[i];
        }

        else{
            sumOdd= sumOdd + arr[i];
        }

    }


    printf("Sum of Even is  : %d\n",sumEven);
    printf("Sum of Odd is : %d\n",sumOdd);

    int diff = sumEven - sumOdd;

    printf("Difference is : %d\n", diff);




    return 0;
}