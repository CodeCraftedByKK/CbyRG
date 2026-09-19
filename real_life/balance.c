#include <stdio.h>
int main () {
    printf("Enter Balence in your wallet: ");
    int balence; 
    scanf("%d",&balence);

    printf("How much money you have used per day in internet pack?  ");
    int spend;
    scanf("%d", &spend);

    int totalspend= spend*7;

    int left= balence - totalspend;

    printf("You have spent %d rupees in recharging your internet in last week and you are left with %d rupees",totalspend,left);




    return 0;
}