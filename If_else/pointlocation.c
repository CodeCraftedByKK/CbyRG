#include <stdio.h>
int main()
{

    int x, y;
    printf("Enter the x: ");
    scanf("%d", &x);

    printf("Enter y:  ");
    scanf("%d", &y);

    if (x == 0 && y == 0)
    {
        printf("The point lies on origin");
    }
    else if (x == 0)
    {
        printf("This point lies on y axis");
    }
    else if (y == 0)
    {
        printf("This point lies on x axis");
    }
    else if (x > 0 && y > 0)
    {
        printf("This point lies in 1st quadrant");
    }
    else if (x < 0 && y > 0)
    {
        printf("This point lies in 2nd quadrant");
    }
    else if (x < 0 && y < 0)
    {
        printf("This point lies in 3rd quadrant");
    }
    else if (x > 0 && y < 0)
    {
        printf("This point lies in 4th quadrant");
    }

    return 0;
}