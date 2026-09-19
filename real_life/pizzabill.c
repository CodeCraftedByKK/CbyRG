#include <stdio.h>
int main()
{

    printf("Enter the total Bill: ");
    float totalbill;
    scanf("%f", &totalbill);

    printf("How much percent tip you want to give? ");
    float tip;
    scanf("%f", &tip);

    // tip = x% * totalbill , x% = (x/totalbill) * 100 , x% / 100)total

    printf("Enter No. of Friends: ");
    float friend;
    scanf("%f", &friend);

    float tipamount = (tip / 100) * totalbill;

    float final = totalbill + tipamount;

    float each = final / friend;

    printf("Each friend has to pay %f rupees", each);

    return 0;
}