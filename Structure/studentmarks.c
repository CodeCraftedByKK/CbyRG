#include <stdio.h>
int main () {

    struct students{
        int roll;
        int engmarks;
        int phymarks;
        int mathmarks;
        int chemmarks;

    };

    struct students first;
    printf("Enter Roll No. ");
    scanf("%d",&first.roll);

    printf("Enter English Marks: ");
    scanf("%d",&first.engmarks);

    printf("Enter Physics Marks: ");
    scanf("%d",&first.phymarks);

    printf("Enter Maths Marks: ");
    scanf("%d",&first.mathmarks);

    printf("Enter Chemistry Marks: ");
    scanf("%d",&first.chemmarks);



    printf("%d",first.roll);
















    return 0;
}