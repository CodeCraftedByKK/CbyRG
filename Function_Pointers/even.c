#include <stdio.h>

int even(a)
{
    if (a % 2 == 0)
    {
        printf("The Number is Even");
    }
    else
    {
        printf("The Number is odd");
    }
}

int main()
{

    printf("Enter Number: ");
    int n;
    scanf("%d", &n);

    int result = even();

    return 0;
}