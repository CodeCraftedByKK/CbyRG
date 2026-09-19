#include <stdio.h>
int main (){

    int x1;
    printf("Enter x1\n");
    scanf("%d",&x1);

     int y1;
    printf("Enter y1\n");
    scanf("%d",&y1);


    int x2;
    printf("Enter x2\n");
    scanf("%d", &x2);

    
    int y2;
    printf("Enter y2\n");
    scanf("%d", &y2);

    

    int z1;
    printf("Enter z1\n");
    scanf("%d",&z1);

    int z2;
    printf("Enter z2\n");
    scanf("%d", &z2);

    int m1= (y2-y1)/(x2-x1);

    int m2= (z2-z1)/(y2-y1);

    if (m2==m1)
    {
        printf("The Line is Straight");

    }
    
    else{
        printf("The Line is Not straight");
    }

    return 0;

}