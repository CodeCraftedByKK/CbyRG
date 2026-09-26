#include <stdio.h>
int main () {

    printf("Enter the Cost Price: ");
    int cp;
    scanf("%d",&cp);

    printf("Enter the Selling Price: ");
    int sp;
    scanf("%d",&sp);

    int profit = sp - cp;
    int loss = cp - sp;

    if(sp>cp){
        printf("You have made %d rupees profit",profit);
    }

    else{
        printf("You have made loss of %d rupees",loss);
    }




    return 0;
}