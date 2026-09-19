#include <stdio.h>
int main (){

    printf("Enter your battery percentage: ");
    int battery;
    scanf("%d",&battery);

    printf("Enter hour you have to use: ");
    int hour;
    scanf("%d",&hour);

    int batteryleft = battery - (hour*8);

    printf("Your battery percentage is %d after using %d hour ",batteryleft,hour);




    return 0;
}