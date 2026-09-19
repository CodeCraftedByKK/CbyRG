#include <stdio.h>
int main (){

    int cp;
    printf("Enter the Cost Price of Product: ");
    scanf("%d",&cp);

    int sp;
    printf("Enter the Selling Price of Product: ");
    scanf("%d", &sp);

    if(sp>cp){
        printf("Congrats! You have made a Profit\n");
        int profit= sp-cp;
        printf("Your Profit Ammount is %d", profit); 

    }
        

    else if (cp=sp){
        printf("No worries, You haven't made profit, but made a Customer");
    }

    
    else {
        int loss=cp-sp;
        printf("Better Luck Next Time, You have made a Loss of %d",loss);
    }

    return 0;
}