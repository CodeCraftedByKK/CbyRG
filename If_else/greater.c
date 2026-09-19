#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter first Number: ");
    scanf("%d", &a);

    printf("Enter Second Number: ");
    scanf("%d", &b);

    printf("Enter third Number: ");
    scanf("%d", &c);

    if (a > b && b > c)
    {
        printf("%d is the Largest Number", a);
    }

    else if (b > a && a > c)
    {
        printf("%d is the Largest Number", b);
    }

    else
    {
        printf("%d is the largetst Number", c);
    }

    return 0;
}