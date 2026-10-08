#include <stdio.h>
int main()
{

    printf("Enter Number: ");
    int n;
    scanf("%d", &n);

    int arr[n];

    printf("Enter Numbers: ");

    

    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr[i]);
    }

    int x;
    printf("Enter Refrence Number: ");
    scanf("%d", &x);

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > x)
        {
            count++;
        }
    }

    printf("Count: %d", count);

    return 0;
}