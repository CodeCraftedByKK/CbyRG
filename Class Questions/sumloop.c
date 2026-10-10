#include <stdio.h>

int main () {

    printf("Enter the Number: ");
    int num;
    scanf("%d", &num);

    int sum = 0;

    for (int i = 1; i <= num; i++)
    {
        printf("%d ", i);
        sum= sum + i ;

    }

    printf("\n Sum = %d \n", sum);
    



    
    return 0; 
}