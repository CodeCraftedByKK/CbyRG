#include <stdio.h>

int main () {

    printf("Enter first Number: ");
    int num1;
    scanf("%d", &num1);

    printf("Enter second number: ");
    int num2;
    scanf("%d", &num2);

    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    int quotient = num1 / num2;


    printf("Sum of the %d and %d is:%d \n ", num1, num2, sum );
    printf("Difference of %d and %d is : %d \n", num1, num2, difference);
    printf("Product of %d and %d  is : %d \n" , num1, num2, product);
    printf("Quotient of %d and %d is : %d \n", num1, num2, quotient);


    return 0;
}