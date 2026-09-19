#include <stdio.h>
int main (){

    printf("Enter your pocket money: ");
    int money;
    scanf("%d",&money);

    printf("Enter no of teas you drunk each day: ");
    int teaeachday;
    scanf("%d",&teaeachday);

    int totaltea= teaeachday * 7;

    int totalmoney = totaltea*12;

    int left= money-totalmoney;

    printf("In this week, you have drunk %d tea and spent %d rupees\n",totaltea, totalmoney);
    printf("You are left with %d rupees",left);



    return 0;
}