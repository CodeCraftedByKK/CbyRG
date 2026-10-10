#include <stdio.h>
int main() {
// caluclate the sum of two numbers

    printf("Enter first numbers: ");
    int num1;
    scanf("%d", &num1);

    printf("Enter second numbers: ");
    int num2;
    scanf("%d", &num2);

    int sum = num1 + num2;
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    int difference = num1 - num2;
    printf("The difference of %d and %d is: %d\n", num1, num2, difference);


    int product = num1 * num2;
    printf("The product of %d and %d is: %d\n", num1, num2, product);

    int quotient = num1 / num2;
    printf("The quotient of %d and %d is: %d\n", num1, num2, quotient);



    return 0;
}



