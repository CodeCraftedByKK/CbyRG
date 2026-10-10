
// factorial of a number


#include <stdio.h>
int main () {

    printf("Enter Number: ");
    int num; 
    scanf("%d", &num);


    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i; 
    }
    printf("Factorial of %d is %d", num, fact);
    return 0;
}