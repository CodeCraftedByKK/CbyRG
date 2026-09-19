#include <stdio.h> 
int main () {

    printf("How many Platinum ticket you bought? \n");
    int platinum;
    scanf("%d",&platinum);

    printf("How many gold ticket you bought?\n");
    int gold;
    scanf("%d",&gold);

    printf("How many silver ticket you bought?\n");
    int silver;
    scanf("%d",&silver);

    int total = platinum*250 + gold*180 + silver*120;

    printf("You spent total %d rupees on movie ticket \n", total);




    return 0;
}