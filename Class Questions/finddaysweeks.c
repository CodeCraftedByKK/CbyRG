#include <stdio.h>

// program to find the number of days in years weeks and days
int main() {

    printf("Enter the number of days: ");
    int totalDays;
    scanf("%d", &totalDays);

    int years = totalDays / 365;
    int remainingDays = totalDays % 365;
    int weeks = remainingDays / 7;
    int days = remainingDays % 7;

    printf("The number of years is: %d\n", years);
    printf("The number of weeks is: %d\n", weeks);
    printf("The number of days is: %d\n", days);

    return 0;
}