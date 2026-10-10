#include <stdio.h>
// find simple interest
int main () {
 float principal, rate, time, simpleInterest;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest (in percentage): ");
    scanf("%f", &rate);

    printf("Enter the time (in years): ");
    scanf("%f", &time);

    simpleInterest = (principal * rate * time) / 100;

    printf("The simple interest is: %.2f\n", simpleInterest);

    float totalAmount = principal + simpleInterest;

    printf("The total amount after %.2f years is: %.2f\n", time, totalAmount);

    return 0;
}